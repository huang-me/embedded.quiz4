#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG_LEN 8

static inline bool is_divisible(uint32_t n, uint64_t M) {
    return n * M <= M - 1;
}

static uint64_t M3 = UINT64_C(0xFFFFFFFFFFFFFFFF) / 3 + 1;
static uint64_t M5 = UINT64_C(0xFFFFFFFFFFFFFFFF) / 5 + 1;

void naive(int in)
{
    if (in % 15 == 0)
        printf("FizzBuzz\n");
    else if (in % 5 == 0)
        printf("Buzz\n");
    else if (in % 3 == 0)
        printf("Fizz\n");
    else
        printf("%u\n", in);

    return;
}

void bitwise(int in)
{
    uint8_t div3 = is_divisible(in, M3);
    uint8_t div5 = is_divisible(in, M5);
    unsigned int length = (2 << div3) << div5;

    char fmt[MSG_LEN + 1];
    strncpy(fmt, &"FizzBuzz%u"[(MSG_LEN >> div5) >> (div3 << 2)], length);
    fmt[length] = '\0';

    printf(fmt, in);
    printf("\n");

    return;
}

int main(int argc, char *argv[]) {
    for (size_t i = 1; i <= 100; i++) {
        naive(i);
        bitwise(i);
    }

    return 0;
}
