#include <stdio.h>


int main() {

	int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

	int(*p)[3][4] = &arr;

}

// Reference:
// 1. https://chatgpt.com/c/6861195b-bc90-8008-8b9c-d1c500d03caf
