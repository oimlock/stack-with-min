project(StackWithMin)
cmake_minimum_required(VERSION 3.18.1)

set(HEADERS
    include/StackWithMin.h
)

set(SOURCES
	src/main.cpp
    src/StackWithMin.cpp
)

add_executable(demo ${SOURCES} ${HEADERS})
target_include_directories(demo PUBLIC include)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input.txt
    DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)
