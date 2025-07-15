#include <stdio.h>

int main() {

	int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

	int (*p)[3][4] = &arr;

	int (*pp)[4] = arr;

	// Rationale: Per [1], if int arr[3][4]'s type is int [3][4], then the type should accept 
	//            arr, regardless arr decays into the first element of arr.
	int (*ppp)[3][4] = arr;
}

// Reference:
// 1. https://chatgpt.com/c/686153be-6f50-8008-a2df-51b7d1bf6a7d