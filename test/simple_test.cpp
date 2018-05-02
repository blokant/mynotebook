#include <gtest/gtest.h>
#include <note/note.h>
TEST(mynotebook_test, my_first_test)
{
	EXPECT_EQ(5,5);
}
TEST(mynotebook_test, my_second_test)
{
	int x = 5;
    int c = 3;
    EXPECT_GT(x,c);
}
TEST(mynotebook_test, test_version_number_eq3)
{
    Note *note = new Note();
    EXPECT_EQ(3, note->getVersion());
}
