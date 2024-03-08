#include <iostream>
#include <math.h>
using namespace std;

int multiplication(int a, int b)
{
    return a * b;
}
int pow(int number, int power)
{
    int result = number;
    for (int i = 0; i < power - 1; i++)
    {
        result *= number;
    }
    return result;
}


void division(int a,int b) {
    int result = a / b;
    cout << "Result of division " << a << " and " << b << " = " << result;
}
void sqrtt(int a) {
    cout << " Sqrt of number " <<a << " is equal " <<  sqrt(a);
}
void main()
{
    cout << "hello";
   
}