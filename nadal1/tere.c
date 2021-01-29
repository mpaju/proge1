#include <stdio.h>

int main(int argc, char const *argv[])
{
    char    nimi[80];
    int     vanus;

    printf("Tere, mis on Teie nimi?\n");
    scanf("%s", nimi);
    printf("Tere %s\n", nimi);
    printf("Mis aastal Te sündisite?\n");
    scanf("%d", &vanus);
    printf("Te olete %d aastat vana\n", 2021-vanus);
    return 0;
}
