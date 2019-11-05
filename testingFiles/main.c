// use this to test: sh ../../testingFiles/testBash.sh
// use this for bug testing segfaults: 
	//gcc -g joetest -Wall -Werror -Wextra ../../testingFiles/*.c ./*.c


//gcc -Wall -Wextra -Werror -o rush-1 *.c && ./rush-1 && rm rush-1

#include "testHeader.h"

//prototype here

//prototype here

int		main(int argc, char **argv)
{
	clock_t		t;
	double		time_taken;

	printf("\nvvvvvvvvvvvvvvvvvvv\nProgram starts.\n\n");
	t = clock();
//mockmoulinette
	//paste mockmoulinette below

	//paste mockmoulinette above
//end mockmoulinette
	t = clock() - t;
	time_taken = (double)t / CLOCKS_PER_SEC;
	printf("\n\nProgram ends after %f seconds.\n^^^^^^^^^^^^^^^^^^^\n\n", time_taken);
	return (0);
}

//mockmoulinette notes:

/*



*/