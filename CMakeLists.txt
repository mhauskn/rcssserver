cmake_minimum_required (VERSION 2.6)
project(rcssserver)

find_package(Boost COMPONENTS system filesystem REQUIRED)
find_package(Zlib REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
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
  rule.cpp rcssexceptions.cpp coach_lang_tok.cpp coach_lang_parser.cpp)
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
  visualsenderplayer.cpp weather.cpp xmlreader.cpp xpmholder.cpp player_command_tok.cpp player_command_parser.cpp)
foreach(src ${RCSSSERVER_CPP})
  list(APPEND RCSSSERVER_SOURCES ${SOURCE_DIR}/${src})
endforeach(src ${RCSSSERVER_CPP})

# MESSAGE(STATUS "CONF_SOURCES " ${LANGPARSER_CPP})
add_library(rcssconfparser SHARED ${BASE_CONF_SOURCES})
add_library(rcssgz SHARED ${BASE_GZIP_SOURCES})
add_library(rcssnet SHARED ${BASE_NET_SOURCES})
add_library(rcssclangparser SHARED ${LANGPARSER_SOURCES})
add_executable(rcssserver ${RCSSSERVER_SOURCES})
add_dependencies(rcssserver rcssconfparser rcssgz rcssclangparser)

target_include_directories(rcssconfparser PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/conf)
target_include_directories(rcssgz PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/gzip)
target_include_directories(rcssnet PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/net)
target_include_directories(rcssclangparser PUBLIC ${SOURCE_DIR})
target_include_directories(rcssserver PUBLIC ${SOURCE_DIR})

target_link_libraries(rcssconfparser ${Boost_LIBRARIES})
target_link_libraries(rcssconfparser ${ZLIB_LIBRARIES})
target_link_libraries(rcssserver ${Boost_LIBRARIES} rcssconfparser rcssgz rcssnet rcssclangparser)
