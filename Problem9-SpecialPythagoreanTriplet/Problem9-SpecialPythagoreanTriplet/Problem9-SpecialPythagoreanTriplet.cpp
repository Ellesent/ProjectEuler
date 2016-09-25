// Problem9-SpecialPythagoreanTriplet.cpp : Defines the entry point for the console application.
//Summary: Find the only pythagorean triplet to equal 1000

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std; 
int main()
{
	int one = 0;
	int two = 0;
	int three = 0;
	int productABC = 1;
	
	for (int i = 1; i <= 1000; i++)
	{
		one = i * i;
		for (int j = 1; j <= 1000 - i; j++)
		{
			two = j * j; 
			for (int k = 1; k <= 1000 - j; k++)
			{
				three = k *k;

				if ((i + j  + k) == 1000 && (one + two == three) && one != (two || three) && two != (one || three))
				{
					productABC = i * j * k;
				}
			}
		}
	}

	cout << productABC << endl; 
	cin.get();
    return 0;
}

