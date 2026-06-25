#include <stdio.h>
#include <stdbool.h> // Para usar el tipo de dato bool
typedef char cadena[200]; // Para tratar a los arrays de chars como 'cadena'

///////////////////////////////////////////////////////////////////////////
////////////////////////////  PROTOTIPOS  /////////////////////////////////
///////////////////////////////////////////////////////////////////////////

int leerEntero(cadena mensaje);
float leerFloat(cadena mensaje);
char leerCaracter(cadena mensaje);
int leerEnteroEntre(int valorMin, int valorMax, cadena mensaje);
float leerFloatEntre(float valorMin, float valorMax, cadena mensaje);
bool confirmaUsuario(cadena mensaje);

///////////////////////////////////////////////////////////////////////////
/////////////////////////  IMPLEMENTACIONES  //////////////////////////////
///////////////////////////////////////////////////////////////////////////

int leerEntero(cadena mensaje) {
    /* Muestra el mensaje al usuario, lee un entero y lo retorna */
    int numero;
    printf("%s: ", mensaje);
    fflush(stdin); // No es obligatorio pero por las dudas...
    scanf("%d", &numero);
    return numero;
}

float leerFloat(cadena mensaje) {
    /* Muestra el mensaje al usuario, lee un float y lo retorna */
    // ¡Esta va resuelta de regalo! 😉
    float numero;
    printf("%s: ", mensaje);
    fflush(stdin); // No es obligatorio pero por las dudas...
    scanf("%f", &numero);
    return numero;
}

char leerCaracter(cadena mensaje) {
    /* Muestra el mensaje al usuario, lee un char y lo retorna */
    char numero;
    printf("%s: ", mensaje);
    fflush(stdin); // No es obligatorio pero por las dudas...
    scanf("%c", &numero);
    return numero;
}

int leerEnteroEntre(int valorMin, int valorMax, cadena mensaje) {
    /* Muestra el mensaje al usuario. Luego lee enteros mientras éstos estén
       fuera del rango [valorMin, valorMax] informando al usuario de
       su error. Cuando finalmente lea un entero válido, lo retorna */
       int numero;
do {
    printf("%s: ", mensaje);
    fflush(stdin); // No es obligatorio pero por las dudas...
    scanf("%d", &numero);
    if (numero < valorMin || numero > valorMax)
    {
        printf("ERROR. Ingrese un valor entre %d y %d\n", valorMin, valorMax);
    }
} while (numero < valorMin || numero > valorMax);
    return numero;
}

float leerFloatEntre(float valorMin, float valorMax, cadena mensaje) {
    /* Muestra el mensaje al usuario. Luego, lee floats mientras éstos estén
       fuera del rango [valorMin, valorMax] informando al usuario de
       su error. Cuando finalmente lea un float válido, lo retorna */
       float numero;
    do {
    printf("%s: ", mensaje);
    fflush(stdin); // No es obligatorio pero por las dudas...
    scanf("%f", &numero);
    if (numero < valorMin || numero > valorMax)
    {
        printf("ERROR. Ingrese un valor entre %d y %d\n", valorMin, valorMax);
    }
} while (numero < valorMin || numero > valorMax);
    return numero;
}

bool confirmaUsuario(cadena mensaje) {
    /* Muestra el mensaje al usuario junto a la leyenda "[S/N]" que
       representa "Si" o "No". Luego, lee chars mientras éstos no sean los
       previstos ('S' o 'N', incluyendo minúsculas) informando al
       usuario de su error. Retorna si el usuario seleccionó que sí. */
       char numero;
        do {
        printf("%s: ", mensaje);
        fflush(stdin); // No es obligatorio pero por las dudas...
        scanf("%c", &numero);

    if (numero != 'S' || numero != 'N') {
    printf("ERROR. El valor debe ser 'S' o 'N'.");
        }
    }
    while (numero != 'S' && numero != 'N');
        return numero;
}
    
    