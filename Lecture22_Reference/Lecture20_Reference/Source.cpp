//A reference is an alternative name or an alias of a variable.
//It is created with the ampersand operator(&) during declaration.When it is created
//It will always need an initializer.
//The initializer
//In this context is called as the referent.
//That is the variable to which the reference is created.
//The referent should always be a variable.
//It cannot be a literal except in some special cases, when a reference is created
//It is bound to its referent.
//That means you cannot make the reference bind to some other variable.
//The reference can be used to modify a variable indirectly just like a pointer.
//However unlike a pointer, a reference is not a new variable.
//It is just another name that means no memory is allocated for a reference.

#include<iostream>

int main() {

	int x = 10;
	int& ref = x;
	x = 6;
	std::cout << "x:" << x << std::endl;
	std::cout << "ref:" << ref << std::endl;

	std::cout << "x:" << &x << std::endl;
	std::cout << "ref:" << &ref << std::endl;
	int y = 20;
	ref = y;

	//Now this only assigns the value of Y to ref.
	// does not make ref bind to Y and will print the values of x and ref, both have the same value.
	std::cout << "x:" << x << std::endl;
	std::cout << "ref:" << ref << std::endl;
	return 0;

}
//pointer vs reference

//It'll always need an initializer, without the initializer
//The reference cannot be created but in case of a pointer the initializer is optional.

//The initializer in case of a reference should be a variable that is it should be an lvalue but in case
//of a pointer the initializer need not be an lvalue.
//It can even be some literal.

//A reference can never be NULL but a pointer can be initialized to null.

//It will point to its referent and it cannot point to any other variable but a pointer can be made to
//point to other variables throughout its lifetime because a reference is just another name for a variable

//Reference  does not require any storage.
//Therefore it will have the same address as that of it's referent.
//A pointer can point to different variables throughout it's lifetime so it will have it's own storage.
//Consequently it will have a different address, 



// To access the value inside a reference You do not need to dereference it.But in case of a pointer we need to use the dereference operator to access the value in the address.