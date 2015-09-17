cmake_minimum_required (VERSION 2.6)
project(rcssserver)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_definitions(-DHAVE_CONFIG_H)

file(GLOB BASE_CONF_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/conf/*.cpp)
file(GLOB BASE_GZIP_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/gzip/*.cpp)
file(GLOB BASE_NET_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/net/*.cpp)
file(GLOB LANGPARSER_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/net/*.cpp)
set(LANGPARSER_SOURCES ${SOURCE_DIR}/clangbuilder.cpp ${SOURCE_DIR}/clangmsgbuilder.cpp ${SOURCE_DIR}/clangparser.cpp ${SOURCE_DIR}/clangmsg.cpp ${SOURCE_DIR}/clangmetamsg.cpp ${SOURCE_DIR}/clangfreeformmsg.cpp ${SOURCE_DIR}/clangunsuppmsg.cpp ${SOURCE_DIR}/clangrulemsg.cpp ${SOURCE_DIR}/clangdelmsg.cpp ${SOURCE_DIR}/clanginfomsg.cpp ${SOURCE_DIR}/clangadvicemsg.cpp ${SOURCE_DIR}/clangdefmsg.cpp ${SOURCE_DIR}/clangaction.cpp ${SOURCE_DIR}/clangutil.cpp ${SOURCE_DIR}/coach_lang_comp.cpp ${SOURCE_DIR}/arithop.cpp ${SOURCE_DIR}/cond.cpp ${SOURCE_DIR}/compop.cpp ${SOURCE_DIR}/region.cpp ${SOURCE_DIR}/rule.cpp)

# MESSAGE(STATUS "CONF_SOURCES " ${CONF_SOURCES})
add_library(rcssconfparser SHARED ${BASE_CONF_SOURCES})
add_library(rcssgz SHARED ${BASE_GZIP_SOURCES})
add_library(rcssnet SHARED ${BASE_NET_SOURCES})
add_library(rcsslangparser SHARED ${LANGPARSER_SOURCES})

target_include_directories(rcssconfparser PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/conf)
target_include_directories(rcssgz PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/rcssbase/gzip)
target_include_directories(rcssnet PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/net)
target_include_directories(rcsslangparser PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# add_executable(rcssserver ${CMAKE_CURRENT_SOURCE_DIR}/src)
# add_executable(rcssclient ${CMAKE_CURRENT_SOURCE_DIR}/src)