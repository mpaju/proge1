#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0, width = 0;

    printf("Sisesta pohja laius: ");
    scanf("%d", &width);
    printf("%*s row   total\n", width + 2, " ");
    for (int i = 1; i <= width; i++)
    {
        sum += i;
        for (int j = i; j < width; j++) {printf(" ");}
        for (int j = 0; j < i; j++) {printf("#");}
        printf("%5d", i);
        printf("%7d\n", sum);
    }
    
    return 0;
}
