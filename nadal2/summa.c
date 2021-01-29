#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c = 5, summa = 0, num = 0;

    for (int i = 1; i <= c; i++)
    {
        printf("Anna arv nr %d/5\n", i);
        scanf("%d", &num);
        summa += num;
        printf("%ssumma on %d\n", i == 5 ? "Lopp" : "Vahe", summa);
    }
    
    return 0;
}
