/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Main Function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
<<<<<<< HEAD
		printf("NEGSUPPORT: Usage: sqrt input\n\n");
=======
		printf("DEBUG: Usage: sqrt input\n\n");
>>>>>>> br_printDebug
		exit(-1);
	}

	int input = atoi(argv[1]);
	if (input < 0) {
		printf("NEGSUPPORT: Sqrt of %d is %fi\n",input,sqrt(-input));
	}
	else {
		printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
	}

	printf("DEBUG: End of program, Exiting\n");
	return(0);

} // end main
