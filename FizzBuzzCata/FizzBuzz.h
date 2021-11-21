#pragma once

bool IsMultiple(int value, int base)
{
	return value % base == 0;
}

std::string FizzBuzz(int value)
{
	std::string result = "";
	
	if (IsMultiple(value, 3))
		result += "Fizz";

	if (IsMultiple(value, 5))
		result += "Buzz";

	if (result == "")
		result = std::to_string(value);
	
	return result;
}
