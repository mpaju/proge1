#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int     valik;
    float   kogus, hind, maksumus;

    printf("Saadaval tooted: Banaan, Mustikas, Apelsin, Mandariin\n");
    printf("Vali toode: (number 1-st 4ni)\n");
    scanf("%d", &valik);
    printf("Sisesta kogus (kilogrammides)\n");
    scanf("%f", &kogus);

    switch (valik)
    {
    case 1:
        printf("Toode %d - Banaan\n", valik);
        hind = 2.19;
        break;
    case 2:
        printf("Toode %d - Mustikas\n", valik);
        hind = 8.19;
        break;
    case 3:
        printf("Toode %d - Apelsin\n", valik);
        hind = 0.79;
        break;
    case 4:
        printf("Toode %d - Mandariin\n", valik);
        hind = 1.29;
        break;
    
    default:
        printf("Vale toode, kasuta numbreid 1-st 4-ni\n");
        exit(1);
        // hind = 0;
        // break;
    }

    maksumus = hind * kogus;
    printf("Kilohind: %.2f\n", hind);
    printf("Kokku: %.2f\n", maksumus);
    return 0;
}
