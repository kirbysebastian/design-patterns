cmake_minimum_required(VERSION 3.16)
project(designpatterns VERSION 1.0.0)

##############
# SETUP GTEST
##############
# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
                 ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
                 EXCLUDE_FROM_ALL)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
  include_directories("${gtest_SOURCE_DIR}/include")
endif()

##############
# SOURCE
##############
add_library(src_lib
  libs/patterns/behavioral/observer-pattern/Subject.cpp
  libs/patterns/creational/singleton-pattern/Database.cpp
  src/factorymethod/ApplianceHardware.cpp
  src/factorymethod/Microwave.cpp
  src/factorymethod/MicrowaveFactory.cpp
  src/observer-classes/Seconds.cpp
  src/observer-classes/TimeObserver.cpp
  src/observer-classes/TimeObserver.cpp)

include_directories(src patterns)

target_include_directories(src_lib PUBLIC libs/patterns)
add_executable(designpattern src/main.cpp)
target_link_libraries(designpattern src_lib)

##############
# TESTING
##############
add_executable(unittest
    test/sampletest.cpp)
target_link_libraries(unittest gtest_main gtest)
target_link_libraries(unittest src_lib)

add_test(NAME UnitTest COMMAND runtests)
