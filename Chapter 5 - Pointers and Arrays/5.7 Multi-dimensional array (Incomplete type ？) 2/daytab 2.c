int main() {

	static char daytab[][] = {

	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

	};

	/*
	
	"In C, for a multidimensional array, all dimensions except the first must be specified at the point 
	of declaration."	 [1]
	
	*/


	char _daytab[][] = {
		
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

	};

}

// References:
// 1. https://chatgpt.com/c/695779c8-0cd4-8324-9522-a77e6c41bac4
