#include <gtest/gtest.h>
#include "my_project/my_class.h"

TEST(MyClassTest, MethodTest) {
    MyClass obj;
    EXPECT_EQ(obj.method(), 42);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
