#include <iostream>
void Print(int *ptr) {
	std::cout << *ptr << std::endl;
	//*ptr = 700;
}
void PrintConstPtr(const int* ptr) {
	std::cout << *ptr << std::endl;
	//*ptr = 700;
}
int main()
{

	/*float radius = 0;
	std::cin >> radius;
	const float PI = 3.141f;
	float area = PI * radius * radius;
	float circumference = PI * 2 * radius;
	std::cout << "Area  is: " << area << std::endl;
	std::cout << "Circumference is: " << circumference << std::endl;*/
	const int CHUNK_SIZE = 512;
	//int* ptr = &CHUNK_SIZE;//This is not allowed
	//if creating a pointer to a constant then the pointer should also be constant.
	const int* ptr = &CHUNK_SIZE;
	//*ptr = 1;//this not allowed since it is pointing to a constant
	int x = 10;
	ptr = &x;
	//*ptr = 1;//This means star *ptr is constant and ptr is not.

	//To make ptr const
	const int* const ptr1 = &CHUNK_SIZE;
	//Print(&x);
	PrintConstPtr(&x);
	std::cout << "main-x" << x << std::endl;//value of x is x changed to avoid this we need to make argument const pointer

	return 0;

}