#pragma once

bool IsMultiple(int value, int base)
{
	return value % base == 0;
}

std::string FizzBuzz(int value)
{
	if (IsMultiple(value, 3))
		return "Fizz";

	if (IsMultiple(value, 5))
		return "Buzz";

	return std::to_string(value);
}
