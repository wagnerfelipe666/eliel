
#include <stdio.h>

int main() {
    int a, i;
    char continuar;

    printf("Tabuada classica\n");

    do {
        printf("\nEscolha a tabuada: ");
        scanf("%d", &a);

        printf("\nTabuada do %d:\n", a);

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", a, i, a * i);
        }

        printf("\nDeseja calcular outra tabuada? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nPrograma encerrado!\n");

    return 0;
}

