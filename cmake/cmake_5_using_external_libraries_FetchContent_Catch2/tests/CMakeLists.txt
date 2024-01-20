set(TEST_EXECUTABLE_NAME myTests)
set(TEST_SOURCES test_main.cpp)

add_executable(${TEST_EXECUTABLE_NAME} ${TEST_SOURCES})
target_link_libraries(${TEST_EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME} Catch2::Catch2WithMain)