#include "Header.h"
#include <iostream>
#include <conio.h> 

int factorial(int i)
{
    if (i == 0) return 1;
    else return i * factorial(i - 1);
}

double c(double x) 
{
	return ((exp(x) + exp(-x)) / 2);
}

double f(double x, ListBox^ Lb)
{
	double sum,r;
	int n = 1;
	sum = 1;

	do 
	{
		r = (pow(x, 2 * n) / factorial(2 * n));
		if (n > x && r < (pow(x, 2 * n+1) / factorial(2 * n+1)))break;
		sum+=r;
		Lb->Items->Add(String::Format("    {0,2:D2}    {1,15:F9}    {2,15:F9}", n, r, sum));
		n++;
		
	} while (r > 0.0005 && n < 50);

	return sum;
}
