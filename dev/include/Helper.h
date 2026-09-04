#pragma once

#include <iostream>
#include <climits>
#include <cstdlib>
#include <cerrno>

namespace Helper
{
	static bool IsInteger(char* input)
	{
		if (input == nullptr || input[0] == '\0')
		{
			return false;
		}

		char* endPtr = nullptr;
		errno = 0;

		long value = std::strtol(input, &endPtr, 10);

		if (errno == ERANGE)
		{
			return false;
		}

		if (*endPtr != '\0')
		{
			return false;
		}										  

		if (value < INT_MIN || value > INT_MAX)
		{
			return false;
		}

		return true;
	}

	static void PrintIntegerBinary(int* num)
	{
		if (num == nullptr)
		{
			return;
		}

		unsigned int value = static_cast<unsigned int>(*num);

		for (int bit = 31; bit >= 0; --bit)
		{
			std::cout << ((value >> bit) & 1);

			if (bit % 4 == 0 && bit != 0)
			{
				std::cout << ' ';
			}
		}

		std::cout << '\n';
	}

	static void BubbleSort(int* arr, int size)
	{
		if (arr == nullptr || size <= 1)
		{
			return;
		}

		for (int i = 0; i < size - 1; ++i)
		{
			for (int j = 0; j < size - i - 1; ++j)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	static void ClearInputBuffer()
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}

	static bool IsEven(int* num)
	{
		if (num == nullptr)
		{
			return false;
		}

		return (*num % 2 == 0);
	}
}