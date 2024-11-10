#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Definición de un "diccionario" simple usando arreglos.
typedef struct {
    char* key;
    int value;
} Dictionary;

int main() {
    //Tipo int.
    printf("Int:\n");
    int num = 3;
    printf("Tipo: int\n");
    printf("Valor: %d\n", num);

    //Tipo float.
    printf("\nFloat:\n");
    float num_float = 3.5f;
    printf("Tipo: float\n");
    printf("Valor: %.2f\n", num_float);

    //Tipo complejo (usando la librería math.h).
    printf("\nComplejo:\n");
    double real = 3.5, imag = 1.0;
    printf("Tipo: complex\n");
    printf("Valor: %.2f + %.2fi\n", real, imag);

    // ipo booleano.
    printf("\nBooleano:\n");
    bool num_booleano = true;
    printf("Tipo: bool\n");
    printf("Valor: %d\n", num_booleano);//En C, true es 1, false es 0.

    //Tipo string.
    printf("\nString:\n");
    char* num_str = "3";
    printf("Tipo: string\n");
    printf("Valor: %s\n", num_str);

    //Tipo lista (usando un arreglo estático).
    printf("\nLista:\n");
    int num_lista[] = {1, 2, 3};
    int lista_size = sizeof(num_lista) / sizeof(num_lista[0]);
    printf("Tipo: arreglo de int\n");
    printf("Valor: ");
    for (int i = 0; i < lista_size; i++) {
        printf("%d ", num_lista[i]);
    }
    printf("\n");

    //Tipo diccionario (usando una estructura simple).
    printf("\nDiccionario:\n");
    Dictionary num_diccionario[] = {{"uno", 1}, {"dos", 2}, {"tres", 3}};
    int dict_size = sizeof(num_diccionario) / sizeof(num_diccionario[0]);
    printf("Tipo: diccionario (arreglo de estructuras)\n");
    printf("Valor: ");
    for (int i = 0; i < dict_size; i++) {
        printf("{%s: %d} ", num_diccionario[i].key, num_diccionario[i].value);
    }
    printf("\n");

    //Tipo set (usando un arreglo sin duplicados).
    printf("\nSet:\n");
    int num_set[] = {1, 2, 3};
    printf("Tipo: set (arreglo sin duplicados)\n");
    printf("Valor: ");
    for (int i = 0; i < lista_size; i++) {
        printf("%d ", num_set[i]);
    }
    printf("\n");

    //Tipo tupla (usando una estructura).
    printf("\nTupla:\n");
    struct {
        int first;
        float second;
        char* third;
    } num_tupla = {1, 2.5f, "hola"};
    printf("Tipo: tupla\n");
    printf("Valor: (%d, %.2f, %s)\n", num_tupla.first, num_tupla.second, num_tupla.third);

    return 0;
}
