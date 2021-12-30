#include "box.h"
#include "gtest/gtest.h"

TEST(Box, EmptyCtor) 
{
    box b1;

    ASSERT_EQ(0, b1.get_length());
    ASSERT_EQ(-1, b1.get_length());
   // ASSERT_EQ(0, b1.get_breadth()));
    //ASSERT_EQ(0, b1.get_weight());  
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}