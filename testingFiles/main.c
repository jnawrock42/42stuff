// use this to test: sh ../../testingFiles/testBash.sh
// use this for bug testing segfaults: 
	//gcc -g joetest -Wall -Werror -Wextra ../../testingFiles/*.c ./*.c


//gcc -Wall -Wextra -Werror -o rush-1 *.c && ./rush-1 && rm rush-1

#include "testHeader.h"

//prototype here

//prototype here



int		main(void)
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

$> make clean
$> make
$> ./do-op
$> ./do-op 1 + 1
2
$> ./do-op 42amis - -20toto12
62
$> ./do-op 1 p 1
0
$> ./do-op 1 + toto3
1
$>
$> ./do-op toto3 + 4
4
$> ./do-op foo plus bar
0
$> ./do-op 25 / 0
Stop : division by zero
$> ./do-op 25 % 0
Stop : modulo by zero

*/