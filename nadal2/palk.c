#include <stdio.h>

int main(int argc, char const *argv[])
{
    int algus, lopp, tooaeg, tunnipalk, kuupalk, paevade_arv;

    printf("Mis kell toopaev algab?\n");
    scanf("%d", &algus);
    printf("Mis kell toopaev loppeb?\n");
    scanf("%d", &lopp);
    printf("Sisesta tunnipalk\n");
    scanf("%d", &tunnipalk);
    printf("Toopaevade arv kalendrikuus\n");
    scanf("%d", &paevade_arv);
    
    tooaeg = lopp - algus;
    kuupalk = tooaeg * tunnipalk * paevade_arv;
    
    printf("Uhes paevas teenite: %d\n", tooaeg * tunnipalk);
    printf("Uhes kuus teenite: %d\n", kuupalk);
    printf("See on %s Eesti keskmise (1433 eur) brutopalga\n", kuupalk < 1433 ? "alla" : "ule");
    
    return 0;
}
