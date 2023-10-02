cmake_minimum_required(VERSION 3.5)

project(mac_os_bundle LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

include_directories(include)

file(GLOB SOURCES src/*.cpp src/*.ui)
file(GLOB HEADERS include/*.h)

set(CMAKE_OSX_DEPLOYMENT_TARGET "11.0") # Set minimum target to Mac OS Big Sur

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)

set_target_properties(${PROJECT_NAME} PROPERTIES
    MACOSX_BUNDLE TRUE
)
