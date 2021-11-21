#include "pch.h"
#include "..\FizzBuzzCata\FizzBuzz.h"

void checkFizzBuzz(int value, std::string expectedResult)
{
	std::string result = FizzBuzz(value);
	ASSERT_STREQ(expectedResult.c_str(), result.c_str());
}

TEST(FizzBuzzTest, WhenPass1Returns1) {
	checkFizzBuzz(1, "1");
}

TEST(FizzBuzzTest, WhenPass2Returns2) {
	checkFizzBuzz(2, "2");
}

TEST(FizzBuzzTest, WhenPass3ReturnsFizz) {
	checkFizzBuzz(3, "Fizz");
}

TEST(FizzBuzzTest, WhenPass5ReturnsBuzz) {
	checkFizzBuzz(5, "Buzz");
}

TEST(FizzBuzzTest, WhenPass6ReturnsFizz) {
	checkFizzBuzz(6, "Fizz");
}

TEST(FizzBuzzTest, WhenPass10ReturnsBuzz) {
	checkFizzBuzz(10, "Buzz");
}