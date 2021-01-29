#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   
    int num;

    printf("Sisesta number:\n");
    scanf("%d", &num);
    num == 0 ? printf("hea nali\n"), exit(1) : 0;
    printf("Number %s\n", num % 3 == 0 ? num % 5 == 0 ? "jagub 3 ja 5ga" : \
    "jagub 3ga" : num % 5 == 0 ? "jagub 5ga" :"ei jagu 3e ega 5ga");

    printf("Numbrisse %d mahub %d taisosa arvust 3 ja jaak on %d\n", num, num / 3, num % 3);
    printf("Numbrisse %d mahub %d taisosa arvust 5 ja jaak on %d\n", num, num / 5, num % 5);

    return 0;
}
