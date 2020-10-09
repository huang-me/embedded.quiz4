#include <stdio.h>
#include <stdlib.h>

int hammingDistance(int x, int y) {
    return __builtin_popcount(x ^ y);
}

int my_hamming(int x, int y)
{
    x ^= y;
    y = 0;
    while (x) {
        x &= (x - 1);
        y++;
    }
    return y;
}


int main() {
    int x=1, y=4;
    printf("naive: %d\n", hammingDistance(x, y));
    printf("my: %d\n", my_hamming(x, y));

    return 0;
}
