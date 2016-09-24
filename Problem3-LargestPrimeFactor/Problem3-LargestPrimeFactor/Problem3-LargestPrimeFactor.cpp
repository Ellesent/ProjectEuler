// Problem3-LargestPrimeFactor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include <iostream>

using namespace std;
int main()
{
	long prime = 0;
	for (long i = 3; i <= long(sqrt(600851475143)); i++)
		if (600851475143 % i == 0)
		{
			if (i % 2 != 0)
			{
				for (int j = 3; j <= long(sqrt(i)); j++)
				{
					if (i%j == 0)
					{
						break;
					}
					else if (j == long(sqrt(i)))
					{
						prime = i; 
					}
				}
			}
		}
	cout << prime;
	cin.get();
    return 0;
}

