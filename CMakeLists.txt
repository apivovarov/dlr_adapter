cmake_minimum_required (VERSION 3.6)
project(dlr_adapter VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include_directories("${PROJECT_SOURCE_DIR}/include")

FILE(GLOB DLR_ADAPTER_SRC
    "src/*.c"
)

add_library(dlr_adapter SHARED ${DLR_ADAPTER_SRC})

target_link_directories(dlr_adapter PRIVATE ${CMAKE_BINARY_DIR} ${PROJECT_SOURCE_DIR})
target_link_libraries(dlr_adapter PRIVATE dlr)

