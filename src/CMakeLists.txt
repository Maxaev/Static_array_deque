target_sources(src_lib
	PUBLIC
		Static_array_deque.hpp
		Static_array_deque.cpp
)

target_include_directories(src_lib PUBLIC
	"${PROJECT_SOURCE_DIR}/src"
)


