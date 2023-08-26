#include <iostream>

int main()
{
	int x = 5;
	int y = 6;
	const int MAX = 12;
	int& ref_x1 = x;
	const int& ref_x2 = x;
	ref_x1 = 6;
	//ref_x2 = 9;//it is not possible due to cinstant reference
	const int* ptr1 = &x;
	int* const ptr2 = &x;
	const int* const ptr3 = &x;
	//*ptr1 = y;//it is not possible since ptr poining to value is constant
	*ptr2 = y;
	//ptr2 = &y;it is a constant pointer


	//Find which declarations are valid. If invalid, correct the declaration
	//int* ptr4 = &MAX;

	const int& r1 = ref_x1;
	//int& r2 = ref_x2;constant reference type assigning to non constant

	//int*& p_ref1 = ptr1;//non constant qualified
	//const int*& p_ref2 = ptr2;int* const can't intialize to const int*&
	return 0;

}