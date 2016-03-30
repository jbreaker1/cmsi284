#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include "madlib-by-numbers.h"
int main()
{
	char* words_to_use[] = {"swim", "brilliant", "git"};
	char* test1 = madlib_by_numbers("The 1 2 likes to 0 in the 1 moonlight.", 3, words_to_use);
	assert(strcmp(test1,"The brilliant git likes to swim in the brilliant moonlight.") == 0);
	printf("true1\n");
	char* words_to_use2[] = {"swim", "brilliant", "git"};
	char* test2 = madlib_by_numbers("The 1 2 likes to 8 in the 5 moonlight.", 3, words_to_use2);
	assert(strcmp(test2,"The brilliant git likes to 8 in the 5 moonlight.") == 0);
	printf("true2\n");
	char* words_to_use3[] = {"hi", "professor", "potato", "friends"};
	char* test3 = madlib_by_numbers("0 1 2 and 3", 4, words_to_use3);
	assert(strcmp(test3,"hi professor potato and friends") == 0);
	printf("true3\n");
	char* words_to_use4[] = {};
	char* test4 = madlib_by_numbers("", 0, words_to_use4);
	assert(strcmp(test4,"") == 0);
	printf("true4\n");
	return 0;
}