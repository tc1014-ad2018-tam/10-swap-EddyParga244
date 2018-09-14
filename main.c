/*
 * Este programa fue realizado como la tarea#10 el 6 de septiembre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito ordenar de menor a mayor 3 numeros que el usuario escriba.
 *
 * Fecha: 13 de septiembre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

//Funcion que ordena los valores de menor a mayor.
void Swap(int a, int b, int c){
    printf("El valor menor en a: %i\n", a);
    printf("El valor medio en b: %i\n", b);
    printf("El valor mayor en c: %i\n", c);

}

//Funcion que obtiene el numero menor
int Menor(int a, int b, int c){
    int *menor=&a;
    if (b<*menor){ menor=&b; }
    if (c<*menor){ menor=&c; }
    return *menor;
}

//Funcion que obtiene el numero mayor
int Mayor(int a, int b, int c){
    int *mayor=&a;
    if (b>*mayor){ mayor=&b; }
    if (c>*mayor){ mayor=&c; }
    return *mayor;
}

//Funcion que obtiene el numero del medio
int Medio(int a, int b, int c){
    int *medio;
    if ((a>b&&c>a)||(a>c&&a<b)) { medio=&a; }
    if ((b>a&&b<c)||(b>c&&b<a)) { medio=&b; }
    if ((c>a&&c<b)||(c<a&&c>b)) { medio=&c; }
    return *medio;

}

int main(void) {

    int a;
    int b;
    int c;

    printf("Escribe el primer numero.");
    scanf("%i",&a);
    printf("Escribe el segundo numero.");
    scanf("%i",&b);
    printf("Escribe el tercer numero.");
    scanf("%i",&c);

    int menor=Menor( a, b, c); //La variable menor llama a la funcion Menor
    int medio=Medio( a, b, c); //La variable medio llama a la funcion Medio
    int mayor=Mayor( a, b, c); //La variable mayor llama a la funcion Mayor
    Swap(menor, medio, mayor); //La funcion Swap ordena los valores de menor a mayor

    return 0;
}