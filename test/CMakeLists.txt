add_executable(test_deque test_deque.cpp)

target_link_libraries(test_deque 
	gtest_main 
	src_lib
)

add_test(test_deque test_deque)
