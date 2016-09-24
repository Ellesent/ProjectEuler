// Problem2-EvenFibonacciNumbers.cpp : Defines the entry point for the console application.
//Summary: From 1 to 4000000, do the fibonacci sequence and find the sume of the even ones

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int sumFib = 0;
	int i = 1;	//current fibonacci number 
	int j = 0;	//previous fibonacci number

	while (i <= 4000000)
	{
		int oldFibonacci = i;
		int newFibonacci = i + j;

		if (newFibonacci % 2 == 0)
		{
			sumFib += newFibonacci;
		}

		j = i;
		i = newFibonacci;
	}

	cout << sumFib;
	cin.get();
    return 0;
}

