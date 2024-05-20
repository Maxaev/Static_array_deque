#include <gtest/gtest.h>

#include "Static_array_deque.hpp"
#include "Static_array_deque.cpp"

TEST(StaticArrayDequeTest, Empty) {
    RMaxaev::StaticArrayDeque<int, 5> deque;
    EXPECT_TRUE(deque.empty());
}

TEST(StaticArrayDequeTest, PushBack) {
    RMaxaev::StaticArrayDeque<int, 5> deque;
    deque.push_back(1);
    EXPECT_EQ(deque.get_size(), 1);
    EXPECT_EQ(deque.back(), 1);
}

TEST(StaticArrayDequeTest, PushFront) {
    RMaxaev::StaticArrayDeque<int, 5> deque;
    deque.push_front(2);
    EXPECT_EQ(deque.get_size(), 1);
    EXPECT_EQ(deque.front(), 2);
}

TEST(StaticArrayDequeTest, PopBack) {
    RMaxaev::StaticArrayDeque<int, 5> deque;
    deque.push_back(1);
    deque.push_back(2);
    deque.pop_back();
    EXPECT_EQ(deque.get_size(), 1);
    EXPECT_EQ(deque.back(), 1);
}

TEST(StaticArrayDequeTest, PopFront) {
    RMaxaev::StaticArrayDeque<int, 5> deque;
    deque.push_front(2);
    deque.push_front(1);
    deque.pop_front();
    EXPECT_EQ(deque.get_size(), 1);
    EXPECT_EQ(deque.front(), 2);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
