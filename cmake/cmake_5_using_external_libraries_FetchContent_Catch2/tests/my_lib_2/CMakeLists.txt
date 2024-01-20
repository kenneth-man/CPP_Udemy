set(TEST_EXECUTABLE_NAME myLib2Tests)
set(TEST_SOURCES tests.cpp)

add_executable(${TEST_EXECUTABLE_NAME} ${TEST_SOURCES})
target_link_libraries(${TEST_EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME_2} Catch2::Catch2WithMain)