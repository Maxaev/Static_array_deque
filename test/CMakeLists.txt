add_executable(Static_array_deque_tests Static_array_deque.cpp)

target_link_libraries(Static_array_deque_tests 
	gtest_main 
	scl_lib
)

add_test(long_number_tests long_number_tests)
