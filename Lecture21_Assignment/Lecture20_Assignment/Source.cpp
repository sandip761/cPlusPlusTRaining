/*

Implement the following functions using pointer arguments only

int Add(int *a, int *b) ;    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b) ;  //Swap the value of two integers
void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument

*/

#include <iostream>

int Add(int* a, int* b);    //Add two numbers and return the sum
void AddVal(int* a, int* b, int* result); //Add two numbers and return the sum through the third pointer argument
void Swap(int* a, int* b);  //Swap the value of two integers
void Factorial(int* a, int* result);       //Generate the factorial of a number and return that through the second pointer argument


int main()
{
	int a, b;
	int result;
	std::cin >> a >> b;
	result = Add(&a, &b);
	std::cout << result<< std::endl;
	AddVal(&a, &b, &result);
	std::cout << result << std::endl;
	Swap(&a, &b);
	Factorial(&a, &result);
	std::cout << result << std::endl;
	return 0;
}

int Add(int* a, int* b)
{
	return *a + *b;

}
void AddVal(int* a, int* b, int* result) {
	*result = *a + *b;
}

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Factorial(int* a, int* result)
{

	*result = 1;
	while (*a != 0)

	{
		*result = *result * (*a);
		*a = *a - 1;
	}
}