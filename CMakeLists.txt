cmake_minimum_required(VERSION 2.8.11)
project(octomap_memoryleak_poc)

find_package(OCTOMAP REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE ${OCTOMAP_LIBRARIES})

target_include_directories(${PROJECT_NAME} PRIVATE ${OCTOMAP_INCLUDE_DIRS})
