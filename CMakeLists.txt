cmake_minimum_required (VERSION 3.6)
project(dlr_adapter VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

include_directories("${PROJECT_SOURCE_DIR}/include")
link_directories(${CMAKE_BINARY_DIR} ${PROJECT_SOURCE_DIR})

FILE(GLOB DLR_ADAPTER_SRC
    "src/*.c"
)

add_library(dlr_adapter SHARED ${DLR_ADAPTER_SRC})

target_link_libraries(dlr_adapter PRIVATE dlr)
