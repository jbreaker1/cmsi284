#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

int64_t gcd(int64_t, int64_t);

int main(int argc, char* argv[]) {
    int i = atoi(argv[1]);
    int j = atoi(argv[2]);
    printf("gcd = %ld\n", gcd(i,j));
    return 0;
}
