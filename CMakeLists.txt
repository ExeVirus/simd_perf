cmake_minimum_required (VERSION 3.20)
project(simd_perf)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${PROJECT_SOURCE_DIR}/bin/${ARGN}")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${PROJECT_SOURCE_DIR}/bin/${ARGN}")

add_subdirectory(src)