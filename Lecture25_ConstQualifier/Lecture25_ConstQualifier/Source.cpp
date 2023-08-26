//The const keyword is used to qualify a declaration//
//and makes the variable constant, afterwards//
//The value in the variable cannot be modified.Any attempt to modify the value of the variable will cause//
//a compiler error.The const keyword is qualified to a declaration but will always need an initializer.//
//Omitting the initializer will cause a compiler error.It largely replaces the usage of C macros in C++.
#include <iostream>
//The most common use of const qualifier is with references, so they are frequently used as references

int main()
{

	float radius = 0;
	std::cin >> radius;
	//when a constant is declared it is declared with uppercase letters(not compulsory).
	//Note that a constant will always need an initializer.
	const float PI = 3.141f;
	float area = PI * radius * radius;
	float circumference = PI * 2 * radius;
	std::cout << "Area  is: " << area << std::endl;
	std::cout << "Circumference is: " << circumference << std::endl;
	return 0;

}