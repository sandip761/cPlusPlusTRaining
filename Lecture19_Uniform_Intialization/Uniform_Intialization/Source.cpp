//in C++ 98 the assignment operator or with the parentheses other types had to be initialized with braces.
// scalar types could be initialized with

//the assignment operator or with the parentheses, array types had to be initialized with braces.
//Now in C++ 11 we can use a single syntax for initializing both scalar and array types and this is

//called as uniform initialization.

//use {} braces to intialize all the type


//Advantage

//uniform syntax to intialize all the types
//Secondly if you don't use an initializer in the braces then it forces initialization of both scalar and other types.

//It also prevents bugs if you are initializing a type with a value from another type. The compiler may flag that initialization through a warning or an error.
#include <iostream>
int main()

{

	//before c++ 11
	int a1;//unintialized
	int a2 = 0;//Copy intialization
	int a3(5);//Direct intialization
	std::string s1;//automaically intialize using default constructor
	std::string s2("c++");//Direct intialization
	char d1[8];//unintialized
	char d2[8] = { '\0' };//Aggregate intialization copy intialization since we are using "{}" sign also copy intialization since we are using "=" sign
	char d3[8] = { 'a','b','c','d' };//Aggregate intialization copy intialization since we are using "{}" sign also copy intialization since we are using "=" sign
	char d4[8] = { "abcd" };//Copy intialization since we are using "=" sign

	//in c++11
	int b1{}; //value intialization and it will be assigned to default value 0;
	int b2();//Instead this creates a function called b2 that accepts void & returns int and this is called as the most vexing parse.
	int b3{ 5 };//Direct intialization
	char e1[8]{};//value intialization
	char e2[8]{"Hello"};//Direct intialization
	int* p1 = new int{};//object created in heap having value intialization
	char* p2 = new char[8] {};
	char* p3 = new char[8] {"Hello"};

}
/*
* Above code we studied
1. Value intialization => T obj{};
2. Direct intialization => T objv{};
3. Copy intialization => T obj = v; We should avoided with user defined object
*/

/*Advantages of uniform intialization
* It forces intilization
* You can use direct intilization for array types
* It prevents narrowing conversion
* ex. float f{};
* int i{f};
* Since above code is incompatible compiler will throw error
* 
* we have a uniform syntax
*/
