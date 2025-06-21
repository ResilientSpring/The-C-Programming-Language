#include <stdio.h>

int string_length(char* array_of_characters) {

	int length = 0;

	while (array_of_characters[length])
		length++;

	return length;
}

int string_length2(char* array_of_characters) {

	int length = 0;

	while (array_of_characters[length++])
		;

	return length;
}

int string_length3(char* array_of_characters) {

	int length = 0;
	char character;

	while ((character = array_of_characters[length]) != '\0')
		length++;

	return length;
}

int main() {

	printf("%d\n", string_length("tangle"));

	printf("%d\n", string_length2("tangle"));

	printf("%d\n", string_length3("tangle"));
}

// I asked ChatGPT why these outputs are different?
// It answered that 
// "...Let me know if you want a diagram or step-through example of how the values change during the loop."
// Then, I asked
//
//  In K&R2, it states that 
//  
//  
// /* squeeze:  delete all c from s */
// void squeeze(char s[], int c)
// {
// 	 int i, j;
//
// 	 for (i  = j  = 0; s[i] != ′\0′; i++)
//		if (s[i] != c)
//		  s[j++] = s[i];
//	 s[j] = ′\0′;
// }
// 
//   is exactly equivalent to 
//   
// 
// /* squeeze:  delete all c from s */
// void squeeze(char s[], int c)
// {
// 	 int i, j;
//
// 	 for (i  = j  = 0; s[i] != ′\0′; i++)
//		if (s[i] != c){
//		  s[j] = s[i];
//        j++;
//      }
//	 s[j] = ′\0′;
// }