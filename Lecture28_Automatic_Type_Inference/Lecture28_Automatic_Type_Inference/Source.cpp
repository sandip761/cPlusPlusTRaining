/*
Indicate storgae class of a variable in c and pre-c++11
Remnant of B language
Meaning has been changed in c++11
Allows the compiler to automatically infer the type from the intializer
intia;izer is important
*/

#include<iostream>
int Sum(int x, int y)
{
	return x + y;
}
int main()
{
	auto i = 10;
	//auto j; IT WILL GIVE ERROR since there is no intializer
	auto j = 5;
	auto sum = i + j;
	auto sum1 = i + 4.3f;
	auto result = Sum(i, j);
	static auto y = 2;
	const int x = 10;
	//int* z = &x;this one will not work below works
	int a = x;
	auto var = x;//var is not constant
	const auto var = x;
	auto& var1 = x;
	auto ptr1 = &x;
	auto list1{ 1 };
	//auto list { 1, 2, 3, 4 };//this will not work
	auto list = { 1, 2, 3, 4 };
}