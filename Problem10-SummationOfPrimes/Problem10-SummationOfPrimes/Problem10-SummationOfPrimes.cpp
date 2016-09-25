// Problem10-SummationOfPrimes.cpp : Defines the entry point for the console application.
//Summary: Find the sum of all primes below 2 million

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std; 
int main()
{
	long sumBelow = 2000000;
	long long sumPrimes = 2;
	int counter;
	for (long i = 3; i < sumBelow; i+=2)
	{
		counter = 0;
		for ( long j = 2; j <= sqrt(i) ; j++)
		{
			if (i % j == 0)
			{
				counter++;
				break;
			}

		}

		if (counter == 0)
		{
			sumPrimes += i; 
			
		}
	}

	cout << sumPrimes << endl;
	cin.get();
    return 0;
}

