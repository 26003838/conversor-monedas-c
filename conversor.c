#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;
    // Tasas de cambio (puedes actualizarlas)
    float usd_gtq = 7.78; 
    float eur_gtq = 8.45;

    printf("--- CONVERSOR DE MONEDAS ---\n");
    printf("1. USD a Quetzales\n2. Quetzales a USD\n");
    printf("3. EUR a Quetzales\n4. Quetzales a EUR\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    if(opcion == 1) printf("%.2f USD = %.2f GTQ\n", cantidad, cantidad * usd_gtq);
    else if(opcion == 2) printf("%.2f GTQ = %.2f USD\n", cantidad, cantidad / usd_gtq);
    else if(opcion == 3) printf("%.2f EUR = %.2f GTQ\n", cantidad, cantidad * eur_gtq);
    else if(opcion == 4) printf("%.2f GTQ = %.2f EUR\n", cantidad, cantidad / eur_gtq);
    else printf("Opcion no valida.\n");

    return 0;
}