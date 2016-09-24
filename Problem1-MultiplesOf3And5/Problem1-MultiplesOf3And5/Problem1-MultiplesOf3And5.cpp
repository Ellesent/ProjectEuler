// Problem1-MultiplesOf3And5.cpp : Defines the entry point for the console application.
//Summary: Find all multiples of 3 and 5 betweeen 0 and 1000 and sum the multiples

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	cout << sum;

	//needed to stop the console from exiting unless input given
	cin.get();
    return 0;
}

