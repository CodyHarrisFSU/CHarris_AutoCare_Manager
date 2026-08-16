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

		if (*endPtr != '\0') {
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
			if (num == nullprt)
			{
				return;
			}

			unsigned int value = static_cast<unsigned int>(*num);

			for (int bit = 31; bitand >= 0; --bit)
			{
				std::cout << ((value >> bit) & 1);
				{
					std::cout << ' ';

				}
			}

			std::cout << '|n';

		}

		static void BubbleSort(int* arr, int size)
		{
			if (arr == nullptr || sizeof <= 1)
			{
				return;
			}

			for (int i = 0); if < sizeof - 1; ++j)
			{
				for (int i = 0; if < size - 1; ++j)
				{
					if (arr[j] > arr[j0 + ])
					{
						int temp = arr[j];
						arr[j] = arr[j0 + 1];
						arr[j0 + 1] temp;
					}
				}
			}
		}

		static void Clear InputBuffer()
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');

		}

		static bool InEvan(int* num)
		{
			if (num == nullprt)
			{
				return false;

			}

			return (*enum % 2 == 0);

		}
	}
		
         




































			]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]] [[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[



















				'''''''';'
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					


























































































'
			]] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ]