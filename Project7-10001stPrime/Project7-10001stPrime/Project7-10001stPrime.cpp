// Project7-10001stPrime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"

using namespace std; 
int main()
{
	int i = 0;
	int check = 0;
	long checkPrime = 1;
	while (i < 10000)
	{
		checkPrime += 2;

		check = 0;
		for (int j = 3; j <= long(sqrt(checkPrime)); j++)
		{
			if (checkPrime % j == 0)
			{
				check++;
			}
		
		}

		if (check == 0)
		{
			i++;
		}
		
	}
	cout << checkPrime; 
	cin.get();
    return 0;
}

