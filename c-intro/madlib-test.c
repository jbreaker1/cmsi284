#include "madlib.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main() {
    assert(strcmp(madlib("The %s %s likes to %s in the moonlight.", "brilliant", "git", "swim"), "The brilliant git likes to swim in the moonlight.")  == 0);
    puts("Test passed");
    assert(strcmp(madlib("The %s %s %s", "yes", "no", "maybe"), "The yes no maybe") == 0);
    puts("Test passed");
    return 0;
}
