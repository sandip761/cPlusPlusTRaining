#include <iostream>
//Pass by value
//Even though you swap the values in the swap function the values are swapped in the local copies that
void Swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
void Swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void Swapref(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
//But if a function accepts a pointer the first thing you'll have to do before accessing the value in
//that pointer.
//You have to check for null.
void Print(int* ptr) {
	if(ptr!=nullptr)
	std::cout << *ptr << "\n";
}
//if you have a function that accepts a reference, the reference will always have a valid value.
//It will never be null.
void Printref(int &ptr) {
	std::cout << ptr << "\n";
}
int main()
{
	int a = 5, b = 10;
	Swap(a, b);
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	Swap(&a, &b);
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	
	Swapref(a, b);
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;

	//Print(nullptr);you cannot read or write a null pointer, so to ensure that the program does not crash
	//Printref(nullptr);
	return 0;
}