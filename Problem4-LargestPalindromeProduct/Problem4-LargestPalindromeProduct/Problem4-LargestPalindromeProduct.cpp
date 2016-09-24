// Problem4-LargestPalindromeProduct.cpp : Defines the entry point for the console application.
//Summary: Find largest palindrome number of two three-digit numbers

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string backwardString;
	string initialString;
	int isPalindrome = 0;
	int initial;

	for (int i = 100; i <= 999; i++)
	{
		for (int j = 100; j <= 999; j++)
		{
			initial = j * i;
			initialString = to_string(j * i);
			backwardString = initialString;
			reverse(backwardString.begin(), backwardString.end());

			if (backwardString == initialString && initial > isPalindrome)
			{
				isPalindrome = initial;
			}
		}
	}
	cout << isPalindrome;
	cin.get();
	return 0;
}

