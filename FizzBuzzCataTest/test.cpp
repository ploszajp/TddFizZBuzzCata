#include "pch.h"
#include "..\FizzBuzzCata\FizzBuzz.h"

TEST(FizzBuzzTest, WhenPass1Returns1) {
	std::string result = FizzBuzz(1);
	ASSERT_STREQ(result.c_str(), "1");
}
}
