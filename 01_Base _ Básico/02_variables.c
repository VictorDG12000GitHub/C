#include <stdio.h>
#include <stdlib.h>

//Función para convertir un entero a cadena.
char* to_string(int num) {
    //Reservamos suficiente espacio para el número convertido y el terminador nulo.
    char* str = (char*)malloc(20 * sizeof(char));  
    snprintf(str, 20, "%d", num); //Convertir entero a cadena.
    return str;
}

int main() {
    //Snake case.
    char* mi_variable_string = "String";
    printf("%s\n", mi_variable_string);

    //Concatenación.
    printf("%s %d hola\n", mi_variable_string, 5);

    //ToString, conversión de entero a string.
    int num = 5;
    char* int_to_str = to_string(num);
    printf("Tipo: string (resultado de to_string)\n");
    printf("Valor: %s\n", int_to_str);
    free(int_to_str); //Liberar la memoria asignada para la cadena.

    //Declaración múltiple.
    int a = 1, b = 2, c = 3;
    char* d = "d";
    printf("Valores de variables múltiples: a=%d, b=%d, c=%d, d=%s\n", a, b, c, d);

    return 0;
}
