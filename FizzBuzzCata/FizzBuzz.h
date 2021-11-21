#pragma once
std::string FizzBuzz(int value)
{
	if (value % 3 == 0)
		return "Fizz";

	if (value == 5 )
		return "Buzz";

	return std::to_string(value);
}
