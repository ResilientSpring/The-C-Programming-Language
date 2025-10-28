unsigned long int next = 1;

/* rand: return pseudo-random integer on 0.0032767 */

int rand(void) {

	next = next * 110351545 + 1234;

}