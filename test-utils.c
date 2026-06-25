#include "utils.h" // Ya incluye la librería <stdio.h>

int main () {
    testLeerEntero();
    testLeerFloat();
    testLeerCaracter();
    testLeerEnteroEntre();
    testLeerFloatEntre();
    testConfirmaUsuario();
    return 0;
}
void testLeerEntero() {
    printf("Test de leerEntero\n");
    int edad = leerEntero("Edad?"); 
    printf("%d\n\n", edad); // Debería mostrar la edad que ingresaste
}
void testLeerFloat() {
    printf("Test de leerFloat\n");
    float precio = leerFloat("Precio?");
    printf("%f\n\n", precio); // Debería mostrar el precio que ingresaste
}
void testLeerCaracter() {
    printf("Test de leerCaracter\n");
    char genero = leerCaracter("Genero?");
    printf("%c\n\n", genero); // Debería mostrar el caracter que ingresaste
}
void testLeerEnteroEntre() {
    printf("Test de leerEnteroEntre\n");
    int edad = leerEnteroEntre(18, 60, "Edad? (entre 18 y 60)");
    printf("%d\n\n", edad); // Debería mostrar la edad que ingresaste
}
void testLeerFloatEntre() {
    printf("Test de leerFloatEntre\n");
    float edad = leerFloatEntre(5, 50.15, "Precio? (entre 5 y 50.15)");
    printf("%f\n\n", edad); // Debería mostrar el precio que ingresaste
}
void testConfirmaUsuario() {
    printf("Test de confirmaUsuario\n");
    bool conf = confirmaUsuario("Llueve?");
    printf("%d \n\n", conf); // El dato bool se muestra como entero (0 o 1)
}
