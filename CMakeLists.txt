cmake_minimum_required (VERSION 2.8.12)
project(rcssserver)

find_package(Boost COMPONENTS system filesystem REQUIRED)
find_package(ZLIB REQUIRED)
find_package(FLEX REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_definitions(-DHAVE_CONFIG_H)

file(GLOB BASE_CONF_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/conf/*.cpp)
file(GLOB BASE_GZIP_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/gzip/*.cpp)
file(GLOB BASE_NET_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/net/*.cpp)

# Source files for librcsslangparser
set(LANGPARSER_CPP clangbuilder.cpp clangmsgbuilder.cpp
  clangparser.cpp clangmsg.cpp clangmetamsg.cpp clangfreeformmsg.cpp
  clangunsuppmsg.cpp clangrulemsg.cpp clangdelmsg.cpp clanginfomsg.cpp
  clangadvicemsg.cpp clangdefmsg.cpp clangaction.cpp clangutil.cpp
  coach_lang_comp.cpp arithop.cpp cond.cpp compop.cpp region.cpp
  rule.cpp rcssexceptions.cpp coach_lang_parser.cpp)
foreach(src ${LANGPARSER_CPP})
  list(APPEND LANGPARSER_SOURCES ${SOURCE_DIR}/${src})
endforeach(src ${LANGPARSER_CPP})

# Source files for rcssserver
set(RCSSSERVER_CPP audio.cpp bodysender.cpp coach.cpp csvsaver.cpp
  dispsender.cpp field.cpp fullstatesender.cpp heteroplayer.cpp
  initsender.cpp initsendercoach.cpp initsenderlogger.cpp
  initsendermonitor.cpp initsenderonlinecoach.cpp initsenderplayer.cpp
  landmarkreader.cpp logger.cpp main.cpp monitor.cpp pcombuilder.cpp
  pcomparser.cpp player.cpp playerparam.cpp object.cpp referee.cpp
  remoteclient.cpp resultsaver.cpp serializer.cpp
  serializercoachstdv1.cpp serializercoachstdv7.cpp
  serializercoachstdv8.cpp serializercoachstdv13.cpp
  serializercoachstdv14.cpp serializercommonstdv1.cpp
  serializercommonstdv7.cpp serializercommonstdv8.cpp
  serializermonitor.cpp serializeronlinecoachstdv1.cpp
  serializeronlinecoachstdv6.cpp serializeronlinecoachstdv7.cpp
  serializeronlinecoachstdv8.cpp serializeronlinecoachstdv13.cpp
  serializeronlinecoachstdv14.cpp serializerplayerstdv1.cpp
  serializerplayerstdv7.cpp serializerplayerstdv8.cpp
  serializerplayerstdv13.cpp serializerplayerstdv14.cpp
  serverparam.cpp stadium.cpp stdoutsaver.cpp stdtimer.cpp
  synctimer.cpp team.cpp utility.cpp visualsendercoach.cpp
  visualsenderplayer.cpp weather.cpp xmlreader.cpp xpmholder.cpp player_command_parser.cpp)
foreach(src ${RCSSSERVER_CPP})
  list(APPEND RCSSSERVER_SOURCES ${SOURCE_DIR}/${src})
endforeach(src ${RCSSSERVER_CPP})

FLEX_TARGET(coach_lang_tok ${SOURCE_DIR}/coach_lang_tok.lpp ${SOURCE_DIR}/coach_lang_tok_lex.yy.c)
SET(awk_cmd "awk '/\#include <FlexLexer.h>/ { print \"\#include \\\"coach_lang_tok.h\\\"\"$<SEMICOLON> getline$<SEMICOLON> } /class istream$<SEMICOLON>/ { print \"\#include <iosfwd>\"$<SEMICOLON> print \"using namespace std$<SEMICOLON>\"$<SEMICOLON> getline$<SEMICOLON> } /\#include <iostream.h>/ { print \"\#include <iostream>\"$<SEMICOLON> getline$<SEMICOLON> } { gsub( \"lex.yy.c\", \"coach_lang_tok.cpp\" )$<SEMICOLON> print$<SEMICOLON> }' ${FLEX_coach_lang_tok_OUTPUTS} > ${SOURCE_DIR}/coach_lang_tok.cpp")
separate_arguments(awk_cmd)
add_custom_command(OUTPUT ${SOURCE_DIR}/coach_lang_tok.cpp DEPENDS ${FLEX_coach_lang_tok_OUTPUTS} COMMAND ${awk_cmd})

FLEX_TARGET(player_command_tok ${SOURCE_DIR}/player_command_tok.lpp ${SOURCE_DIR}/player_command_tok_lex.yy.c)
SET(awk_cmd "awk '/\#include <FlexLexer.h>/ { print \"\#include \\\"player_command_tok.h\\\"\"$<SEMICOLON> getline$<SEMICOLON> } /class istream$<SEMICOLON>/ { print \"\#include <iosfwd>\"$<SEMICOLON> print \"using namespace std$<SEMICOLON>\"$<SEMICOLON> getline$<SEMICOLON> } /\#include <iostream.h>/ { print \"\#include <iostream>\"$<SEMICOLON> getline$<SEMICOLON> } { gsub( \"lex.yy.c\", \"player_command_tok.cpp\" )$<SEMICOLON> print$<SEMICOLON> }' ${FLEX_player_command_tok_OUTPUTS} > ${SOURCE_DIR}/player_command_tok.cpp")
separate_arguments(awk_cmd)
add_custom_command(OUTPUT ${SOURCE_DIR}/player_command_tok.cpp DEPENDS ${FLEX_player_command_tok_OUTPUTS} COMMAND ${awk_cmd})

add_library(rcssconfparser STATIC ${BASE_CONF_SOURCES})
add_library(rcssgz STATIC ${BASE_GZIP_SOURCES})
add_library(rcssnet STATIC ${BASE_NET_SOURCES})
add_library(rcssclangparser STATIC ${SOURCE_DIR}/coach_lang_tok.cpp ${LANGPARSER_SOURCES})
add_executable(rcssserver ${RCSSSERVER_SOURCES} ${SOURCE_DIR}/coach_lang_tok.cpp ${SOURCE_DIR}/player_command_tok.cpp)
add_dependencies(rcssserver rcssconfparser rcssgz rcssclangparser)

target_include_directories(rcssconfparser PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/conf)
target_include_directories(rcssgz PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/gzip)
target_include_directories(rcssnet PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/net)
target_include_directories(rcssclangparser PUBLIC ${SOURCE_DIR})
target_include_directories(rcssserver PUBLIC ${SOURCE_DIR})

target_link_libraries(rcssconfparser ${Boost_LIBRARIES})
target_link_libraries(rcssclangparser ${Boost_LIBRARIES})
target_link_libraries(rcssgz ${ZLIB_LIBRARIES})
target_link_libraries(rcssserver ${Boost_LIBRARIES} rcssconfparser rcssgz rcssnet rcssclangparser)
