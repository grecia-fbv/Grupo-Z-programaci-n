#include <stdio.h>

int main() {
// Definir variables
float Pratica_Laboratorio_1, Practica_Laboratorio_2, Practica_Laboratorio_3, Examen_Teorico, Proyecto_Final, Nota_Final;

printf("Ingrese la nota de la Practica de Laboratorio 1: ");
scanf("%f", &Pratica_Laboratorio_1);

printf("Ingrese la nota de la Practica de Laboratorio 2: ");
scanf("%f", &Practica_Laboratorio_2);

printf("Ingrese la nota de la Practica de Laboratorio 3: ");
scanf("%f", &Practica_Laboratorio_3);

printf("Ingrese la nota del Examen Teorico: ");
scanf("%f", &Examen_Teorico);

printf("Ingrese la nota del Proyecto Final: ");
scanf("%f", &Proyecto_Final);

Nota_Final = (Pratica_Laboratorio_1 * 0.15)+
            (Pratica_Laboratorio_2 * 0.15)+
            (Pratica_Laboratorio_3 * 0.15)+
            (Examen_Teorico * 0.35)+
            (Proyecto_Final * 0.20)

// Mostrar el resultado
    printf("\n--- Resultados ---\n");
    printf("El promedio final ponderado es: %.2f\n", Nota_Final);

}
