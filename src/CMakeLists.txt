target_sources(src_lib
	PRIVATE
		Static_array_deque.cpp
	PUBLIC
		Static_array_deque.hpp
)

target_include_directories(src_lib PUBLIC
	"${PROJECT_SOURCE_DIR}/src"
)


