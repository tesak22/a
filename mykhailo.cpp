#include <iostream>


using namespace std;

int multiplication(int a, int b)
{
	return a * b;
}
int pow(int number, int power)
{
	int result = number;
	for (int i = 0; i < power -1; i++)
	{ 
		result *= number;
	}
	return result;
}

