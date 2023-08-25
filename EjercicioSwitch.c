#include <stdio.h>
int main(){
    int Ejercicio;
    printf("Digite el numero del ejercicio al que desea ingresar:");
    scanf("%i", &Ejercicio);

    switch (Ejercicio){
        //Ejercicio 1. "Nombre"
        case 1:
        //code
        break;

        //Ejercicio 2. "Nombre"
        case 2:
        //code
        break;

        //Ejercicio 3. "Nombre"
        case 3:
        //code
        break;

        //etc...

        //Ejercicio 25. Daniel Moreno Herrera
        case 25:
            printf("Por favor Digite los años en la empresa para calcular el sueldo con su respectivo aumento: ");
            int anos;
            float sueldoAumentado, sueldo=40000.0;
            scanf("%i", &anos);
            switch (anos){
                case 1:
                    sueldoAumentado = sueldo + sueldo*0.03;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;

                case 2:
                    sueldoAumentado = sueldo+sueldo*0.03;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;

                case 3:
                    sueldoAumentado = sueldo+sueldo*0.03;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;

                case 4:
                    sueldoAumentado = sueldo+sueldo*0.05;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;

                case 5:
                    sueldoAumentado = sueldo+sueldo*0.05;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;

                case 6:
                    sueldoAumentado = sueldo+sueldo*0.07;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;

                case 7:
                    sueldoAumentado = sueldo+sueldo*0.07;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;

                case 8:
                    sueldoAumentado = sueldo+sueldo*0.07;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;

                case 9:
                    sueldoAumentado = sueldo+sueldo*0.07;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;

                case 10:
                    sueldoAumentado = sueldo+sueldo*0.07;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;

                default:
                    sueldoAumentado = sueldo+sueldo*0.10;
                    printf("El sueldo es de: %.2f", sueldoAumentado);
                    break;
                }
                break;
        
        default:
            printf("Opcion Fuera de Rango.");
            break;
    }

    return 0;
    }
