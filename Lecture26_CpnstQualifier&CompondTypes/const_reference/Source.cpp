#include <iostream>
void Print(const int& ref) {
	std::cout << ref << std::endl;

}
void Printref(int& ref) {
	std::cout << ref << std::endl;
}
int main()
{
	int x = 5;
	const int& y = 15;
	Print(x);
	Print(10);//it is possible to create a constant reference to a literal
	//If the argument was just a simple reference then the compiler would not allow this, because this means the reference
	//is bound to a literal and that is not allowed.
	std::cout<< "Constant Reference:"<<y;
	//Printref(10);Incorrect
	Printref(x);//correct
	return 0;
}