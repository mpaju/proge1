#include <stdio.h>
#include <stdlib.h>
#define WIDTH 10

int main(int argc, char const *argv[])
{
    int sum = 0;
    printf("%*s row   total\n", 12, " ");
    for (int i = 1; i <= WIDTH; i++)
    {
        sum += i;
        for (int j = 0; j < i; j++) {printf("#");}
        for (int j = i; j < WIDTH + 3; j++) {printf(" ");}
        printf("%2d", i);
        printf("%7d\n", sum);
        // printf("%*s\n", WIDTH - i, " #");
    }
    
    return 0;
}
