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


int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
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

    int choice;

    do 
    {
        int a;
        int b;

        cout << "1 - addition" << endl;
        cout << "2 - subtraction" << endl;
        cout << "3 - multiplication" << endl;
        cout << "4 - division" << endl;
        cout << "5 - exponentiation" << endl;
        cout << "6 - square root" << endl;
        cout << "7 - sine" << endl;
        cout << "8 - cosine" << endl;
        cout << "9 - tangent" << endl;
        cout << "10 - exit" << endl;

        cin >> choice;

        switch(choice)
        {
        case 1:
            cin >> a >> b;

            break;
        case 2:
            cin >> a >> b;

            break;
        case 3:
            cin >> a >> b;

            break;
        case 4:
            cin >> a >> b;

            break;
        case 5:
            cin >> a >> b;

            break;
        case 6:
            cin >> a;

            break;
        case 7:
            cin >> a;

            break;
        case 8:
            cin >> a;

            break;
        case 9:
            cin >> a;

            break;
        case 10:
            cout << "bb";
            break;
        default:
            break; 
        }

    }while(choice == 10)

    cout << "hello";
   
}
