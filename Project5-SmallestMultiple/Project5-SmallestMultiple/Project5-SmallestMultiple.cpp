// Project5-SmallestMultiple.cpp : Defines the entry point for the console application.
//Summary: Find smallest number evenly divisble by 1-20

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	bool correct = false;
	int i = 20; 

	while (correct == false)
	{
		i += 20;
		for (int j = 1; j <= 20; j++)
		{
			if (i % j != 0)
			{
				break;
			}
			else if (j == 20)
			{
				correct = true;
			}
		}
	}

	cout << i;
	cin.get();
    return 0;
}

