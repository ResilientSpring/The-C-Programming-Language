int main() {

	// static doesn’t change whether the type of daytab is complete or incomplete. 
	// It only changes storage duration / linkage, 
	// not the type system rule about “is the array bound known?”.

	static char daytab[][13] = {

	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

	};
}

// Without static, will daytab be visible to other .c files?
// 
// No. 🙂 Because it’s declared inside main, it has block scope.
// Block - scope names are never visible from other.c files — 
// regardless of whether you write static or not.

// Ref: https://chatgpt.com/c/695779c8-0cd4-8324-9522-a77e6c41bac4