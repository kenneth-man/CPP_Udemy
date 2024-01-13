# Add a target - Create executable
add_executable(${EXECUTABLE_NAME} main.cpp)

# Link library with executable
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME})