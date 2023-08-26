#include <iostream>


int main() {
	using namespace std;
	//Endl is a manipulator and it automatically inserts a new line
	//at the end and also flushes the output buffer, so the resolution of this statement starts from left to right.
	cout << "Hello World\n"<<45<<" " << 8.2f << endl;
	int age;
	cout << "Tell me your age :";
	cin >> age;
	cout << "your age is :" << age
		<< endl;
	char buff[512];
	cout << "what is your name?";
	// cin stops
	//reading from the keyboard when it encounters the space.
	//If you want to read a full string then you can use a function called as getline().
	//cin >> buff;
	cin.getline(buff, 64, '!');
	cout << "your name is:" << buff << endl;
	
	return 0;
}
/*Notes
* C++ provides two classes for input and output, basic_ostream

is resposible for output and basic_istream
is responsible for input. C++ provides type definitions of these classes for convenience(std::istream, std::ostream).

From now onwards I refer to the console I/O classes through their type definitions for convenience.

cout is an object of ostream class and cin is an object of istream class, cout represents the console

and to write anything on the console

we have to insert that into the cout object through the insertion operator(<<).

*/