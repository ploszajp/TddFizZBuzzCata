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