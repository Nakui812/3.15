#include <stdio.h>

int main() {
    char categoria;
    float costo, sconto;

    printf("Inserisci il costo del biglietto: ");
    scanf("%f", &costo);
    printf("Inserisci la categoria (P = pensionati, S = studenti, D = disoccupati): ");
    scanf(" %c", &categoria);

    switch (categoria) {
        case 'P':
            sconto = 0.10;
        break;
        case 'S':
            sconto = 0.15;
        break;
        case 'D':
            sconto = 0.25;
        break;
        default:
            printf("Categoria non valida. Nessuno sconto applicato.\n");
        break;
    }

    float costo_finale = costo - (costo * sconto);
    printf("L'importo da pagare è: %.2f\n", costo_finale);

    return 0;
}