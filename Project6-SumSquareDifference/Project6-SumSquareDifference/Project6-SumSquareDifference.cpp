// Project6-SumSquareDifference.cpp : Defines the entry point for the console application.
//Summary: find the sum of the squares of numbers 1-20 and the square of the sum of numbers 1-20 and find the difference 

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <string>

using namespace std; 
int main()
{
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum1 += i*i;
		sum2 += i;
	}

	sum2 = sum2 * sum2; 
	cout << to_string(sum2 - sum1);
	cin.get();
    return 0;
}

