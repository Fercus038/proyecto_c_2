#include <stdio.h>

// Variables tipo de cambio
#define USD_TO_GTQ 7.78
#define EUR_TO_GTQ 9.39

// Conversor Quetzales a Dolares.
float gtq_to_usd(float amount) {
    return amount / USD_TO_GTQ;
}

// Función Dolares a Quetzales.
float usd_to_gtq(float amount) {
    return amount * USD_TO_GTQ;
}

// Función Quetzales a Euros
float gtq_to_eur(float amount) {
    return amount / EUR_TO_GTQ;
}

// Función Euros a Quetzales.
float eur_to_gtq(float amount) {
    return amount * EUR_TO_GTQ;
}

int main() {
    int option;
    float amount;

    printf("Seleccione el tipo de cambio:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Dólares a Quetzales\n");
    printf("3. Quetzales a Euros\n");
    printf("4. Euros a Quetzales\n");
    scanf("%d", &option);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &amount);

    switch (option) {
        case 1:
            printf("%.2f quetzales son %.2f dólares\n", amount, gtq_to_usd(amount));
            break;
        case 2:
            printf("%.2f dólares son %.2f quetzales\n", amount, usd_to_gtq(amount));
            break;
        case 3:
            printf("%.2f quetzales son %.2f euros\n", amount, gtq_to_eur(amount));
            break;
        case 4:
            printf("%.2f euros son %.2f quetzales\n", amount, eur_to_gtq(amount));
            break;
        default:
            printf("Esta Opcion no se puede completar\n");
            break;
    }

    return 0;
}