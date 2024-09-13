
file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
add_executable (${PROJECT_NAME} ${SOURCE_FILES})

target_include_directories(${PROJECT_NAME}
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../"
)

if (WIN32)
    add_definitions(/std:c++17)
else (WIN32) # RHEL
    add_definitions(-std=c++17)
endif (WIN32)

# Create executable in bin/
install (TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_SOURCE_DIR}/bin)