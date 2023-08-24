#include <stdio.h>
int main(){
    printf("Por favor Digite los años en la empresa para calcular el sueldo con su respectivo aumento: ");
    int anos;
    float sueldoAumentado, sueldo=40000.0;
    scanf("%i", &anos);
switch (anos)
{
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
    }
