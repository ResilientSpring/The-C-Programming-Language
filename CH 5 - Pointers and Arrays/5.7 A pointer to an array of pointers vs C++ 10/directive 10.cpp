#include <stdio.h>
#include <typeinfo>
#include <iostream>

template<typename T>
void print_type(T x) {  // [1]
	std::cout << "Type is: " << typeid(x).name() << '\n';
}

char daytab[3][13] = {

	{'d', 'i', 'r', 'e', 'c', 't', 'i', 'v', 'e', ' ', 'o', 'n', '\0'},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	"direction"
};


int main() {

	char(*directive)[13] = &daytab[2];

	directive = &daytab[2];      // [2]

	directive[1] = &daytab[2];   // [2]

	char* stipulate = daytab[2];      // printf("hello, world\n");
								      // printf receives a pointer to the beginning of the character array.
									  // That is, a string constant is accessed by a pointer to its 
									  // first element. (K&RII:118)

	print_type(directive[0]);

	int arr[2][13];
	print_type(arr);          // prints type of int[2][13].    [1]
	print_type(&arr[0]);      // prints type of int(*)[13].    [1]

}

// References:
// 1. https://chatgpt.com/c/68602239-8750-8008-8ebd-93abbd1f14b9
// 2. https://chatgpt.com/c/6861195b-bc90-8008-8b9c-d1c500d03caf
