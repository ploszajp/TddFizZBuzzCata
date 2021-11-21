#pragma once
std::string FizzBuzz(int value)
{
	if (value == 3)
		return "Fizz";

	return std::to_string(value);
}
