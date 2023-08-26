#include <iostream>

void Add(int a, int b, int& result);    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int& result);    //Find factorial of a number and return that through a reference parameter
void Swap(int& a, int& b);            //Swap two numbers through reference arguments


int main()
{
	int a, b, result;
	std::cin >> a >> b;
	Add(a, b, result);
	std::cout << result<<std::endl;
	Factorial(a, result);
	std::cout << result;
	Swap(a, b);
	std::cout << a << " " << b;
	return 0;
}


void Add(int a, int b, int& result)
{
	result = a + b;
}
void Factorial(int a, int& result)
{
	result = 1;
	while (a) {
		result = result * a;
		a = a - 1;
	}
}

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}