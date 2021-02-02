#include <stdio.h>
#define TSYKARV 5

int main(int argc, char const *argv[])
{
    int c = 1, summa = 0, num = 0;

    printf("1. kasutame while tsykklit\n");
    while (c <= TSYKARV) 
    {
        printf("Anna arv nr %d/5\n", c);
        scanf("%d", &num);
        summa += num;
        printf("%ssumma on %d\n", c == TSYKARV ? "Lopp" : "Vahe", summa);
        c++;
    }

    printf("\n2. kasutame for tsykklit\n");
    summa = 0;
    for (int i = 1; i <= TSYKARV; i++)
    {
        printf("Anna arv nr %d/5\n", i);
        scanf("%d", &num);
        summa += num;
        printf("%ssumma on %d\n", i == TSYKARV ? "Lopp" : "Vahe", summa);
    }

    printf("\n3. kasutame do while tsykklit\n");
    c = 1, summa = 0;
    do 
    {
        printf("Anna arv nr %d/5\n", c);
        scanf("%d", &num);
        summa += num;
        printf("%ssumma on %d\n", c == TSYKARV ? "Lopp" : "Vahe", summa);
        c++;
    } while (c <= TSYKARV);
    
    return 0;
}
