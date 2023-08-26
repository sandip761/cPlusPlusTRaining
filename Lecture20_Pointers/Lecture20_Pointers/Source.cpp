//You need not initialize a pointer during declaration but as a good practice

//You should always initialize a pointer to avoid bugs later, a pointer is always declared with an asterisk
//when creating a pointer, the type of the pointer should match exactly with the source.

//But in some cases you may want to point to different types. In that case you can create a void pointer.
//always initialize pointers and variables too.

//NULL is a macro in C and pre - C++11. It is defined as zero in most compilers.And is used to initialize pointer types, when a pointer is initialized with NULL It is called as a Null pointer.
//C++11 introduced a new type of null called nullptr. It is typesafe and better than the null macro.

//You should always use nullptr to initialize a pointer instead of the null macro.

//The reason is you cannot read from a null pointer, but if you try to read from a null pointer, it will cause access violation.
#include <iostream>

int main()

{
	int x{ 10 };
	std::cout << &x<<std::endl;

	int* ptr = &x;
	std::cout << ptr;

	void* ptr1 = &x;
	std::cout << ptr1 << std::endl;
	*ptr = 5;//dereference operator
	std::cout << x << std::endl;
	int y = *ptr;
	std::cout << y << std::endl;

	//int* ptr3 = nullptr;
	//std::cout << *ptr3;
	//In the same way, you cannot write into a null pointer.
	//*ptr3=10;

	return 0;
}