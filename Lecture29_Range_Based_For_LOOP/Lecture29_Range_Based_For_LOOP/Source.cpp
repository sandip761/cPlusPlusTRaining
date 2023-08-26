#include<iostream>

int main() {
	using namespace std;
	int arr[] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	/*
	Ranged based for loop
	1. Allows iteration over arrays and containers
	2. Does not need index variables
	3.Each iteration returns an element
	4. Can be used with any object behaaves like range

	for(varibale declaration: range){
		sttatement;
	}
	ex 
	int arr[] = {1, 2, 3};
	for(int x: arr){

	for each iteration the varibale assigned with value
	*/

	for (int x : arr) {
		cout << x << " ";
	}
	// we can do above using auto which is written below 
	for (auto x : arr) {
		cout << x << " ";
	}
	//In the above a copy x always created to avoid that below is synatx
	for (auto &x : arr) {
		/*
		* if we declare as reference it can modify the value in the array
		* For ex x = 3;
		* To avovid that please see the below for loop
		*/
		cout << x << " ";
	}
	for (const auto &x : arr) {
		cout << x << " ";
	}
	//Range based for loop can iterate over intializer list

	for (auto x : { 1, 2, 3, 4 }) {
		cout << x << " ";
	}
	/*
	
	For loop
	-------------------
	1. Index base iteration
	2.Requires end condition
	3. Manually increment or decremant the index
	4. Error-Prone e.g wrong end condition, overflow, underflow, incorect iteraation expression
	5. More control over iteration
	--------------------
	Range based for loop
	----------------------
	1. Does not use index to iterate
	2. Does not require end condition
	3. Does not require manual increment
	4.Lesser chance of error
	5. No control over iteration
	*/
}