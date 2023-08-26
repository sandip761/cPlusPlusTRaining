#include <iostream>

//Please remember, you always include header files.

//You should never ever include source files.

//That is.cpp files.

//Don't do that.

//If you try to include math.cpp here then the program will have multiple definitions of Add() function,
#include "math.h"




//in this course during demos when I've to create functions to avoid having to create a header and

//cpp file for functions, I will define the functions before calling them.


void Print(char ch) {
	for (int i = 0; i < 10; i++) {
		std::cout << ch;
	}
	std::cout << std::endl;
}
//In some programs, you may see main() returning void.That is

//non - standard.In C main() can return void, but in C++ it should always return an integer.
//main() also accepts two parameters and they are used if you want to handle command line arguments.




//If we have compiled this code(with out declaration or prototype of a function) in C, then it would have compiled successfully.

//The C compiler would have assumed this Add() function to be a function that returns an integer and this
int main() {
	int x, y;
	std::cin >> x >> y;
	/*int result = x + y;
	std::cout << "Result is :" << result << std::endl;*/
	int result = Add(x, y);
	std::cout << result << std::endl;
	//Use result

	Print('#');

}




//Note that, you'll not create a separate .h and .cpp files for every function, instead functions

//that belong together that work towards one concept will be grouped together in one.cpp file.And

//the declarations of all such functions will be put inside one header file




//so far the functions that we have created, these functions have been defined directly

//inside the source files.

//So, these functions are global functions.So, Print(), main() and even the Add() function,

//all these are global functions.

//You can also put functions inside the classes.

//In that case, they're called as member functions but we'll discuss member functions with classes.