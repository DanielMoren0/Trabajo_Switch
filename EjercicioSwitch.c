#include <stdio.h>
int main(){
    int Ejercicio;
    printf("Digite el numero del ejercicio al que desea ingresar:");
    scanf("%i", &Ejercicio);

    switch (Ejercicio){
        //Ejercicio 1. "Nombre"
        case 1:
        printf("Ingrese un numero del 1 al 5");
			int n;
			scanf("%d", &n);
			switch(n){
				case 1:
					printf("No es primo");
					break;
				case 2:
					printf("Primo");
					break;
				case 3:
					printf("Primo");
					break;
				case 4:
					printf("No es primo");
					break;
				case 5:
					printf("Primo");
					break;
				default:
					printf("Ingrese una opcion valida");
					break;
			}
			break;

        //Ejercicio 2. "Nombre"
        case 2:
        printf("Ingrese un numero para definir si es par o impar");
			int p;
			scanf("%d", &p);
			switch ((p%2)==0){
			case true:
				printf("El numero es par");
				break;
			default:
				printf("El numero es impar");
				break;
			}
			break;

        //Ejercicio 3. "Nombre"
        case 3:
        printf("Ingrese un numero del 1 al 7");
			int dia;
			scanf("%d",&dia);
			switch(dia){
				case 1:
					printf("Lunes");
					break;
				case 2:
					printf("Martes");
					break;
				case 3:
					printf("Miercoles");
					break;
				case 4:
					printf("Jueves");
					break;
				case 5:
					printf("Viernes");
					break;
				case 6:
					printf("Sabado");
					break;
				case 7:
					printf("Domingo");
					break;
				default:
					printf("Ingrese una opcion valida");
					break;
			}
			break;
        case 4:
			printf("Ingrese un numero del 1 al 12");
			int mes;
			scanf("%d",&mes);
			switch(mes){
				case 1:
					printf("Enero");
					break;
				case 2:
					printf("Febrero");
					break;
				case 3:
					printf("Marzo");
					break;
				case 4:
					printf("Abril");
					break;
				case 5:
					printf("Mayo");
					break;
				case 6:
					printf("Junio");
					break;
				case 7:
					printf("Julio");
					break;
				case 8:
					printf("Agosto");
					break;
				case 9:
					printf("Septiembre");
					break;
				case 10:
					printf("Octubre");
					break;
				case 11:
					printf("Noviembre");
					break;
				case 12:
					printf("Diciembre");
					break;
				default:
					printf("Ingrese una opcion valida");
					break;
			}
			break;
        case 5:
			printf("Ingrese 3 numeros para mostrarlos de menor a mayor");
			int n1, n2, n3;
			scanf("%d%d%d",&n1,&n2,&n3);
			switch((n1<n2)&&(n2<n3)){
				case true:
					printf("%d\n",n1);
					switch (n2<n3){
						case true:
							printf("%d\n",n2);
							printf("%d\n",n3);
							break;
						default:
							printf("%d\n",n3);
							printf("%d\n",n2);
							break;
					}
					break;
				default:
					switch((n2<n1)&&(n2<n3)){
						case true:
							printf("%d\n",n2);
							switch(n1<n3){
								case true:
									printf("%d\n",n1);
									printf("%d\n",n3);
									break;
								default:
									printf("%d\n",n3);
									printf("%d\n",n1);
									break;
							}
							break;
						default:
							switch((n3<n2)&&(n3<n1))
							{
								case true:
									printf("%d\n",n3);
									switch(n2<n1){
										case true:
											printf("%d\n",n2);
											printf("%d\n",n1);
											break;
										default:
											printf("%d\n",n1);
											printf("%d\n",n2);
											break;
									}
									break;
								default:
									break;
							}
							break;
					}
					break;
			}
			break;
        case 6:
			printf("Ingrese 3 numeros para mostrarlos de mayor a menor");
			int nm1, nm2, nm3;
			scanf("%d%d%d",&nm1,&nm2,&nm3);
			switch((nm1>nm2)&&(nm2>nm3)){
				case true:
					printf("%d\n",nm1);
					switch (nm2>nm3){
						case true:
							printf("%d\n",nm2);
							printf("%d\n",nm3);
							break;
						default:
							printf("%d\n",nm3);
							printf("%d\n",nm2);
							break;
					}
					break;
				default:
					switch((nm2>nm1)&&(nm2>nm3)){
						case true:
							printf("%d\n",nm2);
							switch(nm1>nm3){
								case true:
									printf("%d\n",nm1);
									printf("%d\n",nm3);
									break;
								default:
									printf("%d\n",nm3);
									printf("%d\n",nm1);
									break;
							}
							break;
						default:
							switch((nm3>nm2)&&(nm3>nm1))
							{
								case true:
									printf("%d\n",nm3);
									switch(nm2>nm1){
										case true:
											printf("%d\n",nm2);
											printf("%d\n",nm1);
											break;
										default:
											printf("%d\n",nm1);
											printf("%d\n",nm2);
											break;
									}
									break;
								default:
									break;
							}
							break;
					}
					break;
			}
			break;
        case 7:
        break;
        case 8:
			printf("Ingrese un numero");
			int num;
			scanf("%d",&num);
			switch(num==0){
				case true:
					printf("\nEl numero es cero.");
					break;
				default:
					switch(num>0){
						case true:
							printf("\nEl numero es positivo");
							break;
						default:
							printf("\nEl numero es negativo");
							break;
					}
					break;
			}
			break;
        case 9:
        break;
	//Ejercicio 10. "José Miguel Landino"
        case 10:
			printf("Ingrese un numero");
			int cien;
			scanf("%d",&cien);
			switch(cien>100){
				case true:
					printf("\nEl numero es mayor que 100.");
					break;
				default:
					printf("\nEl numero es menor que 100");
					break;
			}
			break;

        //Ejercicio 11. Johan Boshell Longas
        case 11:
            char vocal;
            while ((vocal = getchar()) != '\n' && vocal != EOF); // Limpiar el búfer de entrada
            printf("Ingrese una letra para detectar si es una vocal o no lo es: ");
            scanf(" %c", &vocal); // Usar un espacio antes del %c para ignorar espacios y saltos de línea

            switch (vocal) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    printf("La letra ingresada es una vocal\n");
                    break;
                default:
                    printf("La letra ingresada no es una vocal\n");
                    break;
            }
            break;
	    
	  //Ejercicio 12. Maximiliano Giraldo Ocampo
	  case 12:
            int nc1, nc2, nc3, ordencreciente;
            printf("Ingrese el primer numero\n");
            scanf("%d",&nc1);
            printf("Ingrese el segundo numero\n");
            scanf("%d",&nc2);
            printf("Ingrese el tercer numero\n");
            scanf("%d",&nc3);
            ordencreciente = nc1 < nc2 && nc2 < nc3;
            switch (ordencreciente)
            {
                case 1:
                    printf("Fueron ingresados en orden creciente\n");
                    break;
                default:
                    printf("No fueron ingresados en orden creciente\n");
                    break;
            }
            break; 
	    
        //Ejercicio 15. Valentina Murillo Muñoz
        case 15:	
	    int n1, n2, n3, suma;
            printf("Ingrese tres números:\n");
            scanf("%d %d %d", &n1, &n2, &n3);
            suma = n1 + n2 ;
           switch (suma==n3){
               case 1:
               printf("%d + %d = %d", n1, n2, n3);
               break;
               case 0:
               printf("%d + %d ≠ %d", n1, n2, n3);
               break;
           }
	    break;

	//Ejercicio 18. Gabriela Saldarriaga
         case 18:
         int num1,num2;
         printf ("Ingrese un número: ");
         scanf("%d", &num1);
         printf("Ingrese otro número: ");
         scanf("%d",&num2);
          switch(n1 % 2==0){
           case 1:
            printf("%d es par\n",n1);
           break;
           case 0:
            printf("%d no es par",n1);
     }
          switch(n2 % 2==0){
           case 1:
            printf("%d es par\n",n2);
           break;
           case 0:
           printf("%d no es par",n2);
           break;
     }
     break;
	    
        //Ejercicio 23. Santiago Mejia Ocampo
        case 23:
            int importeBruto;
            float importeNeto;
            char mayor_menor;
        
            printf("Su importe es mayor a 15,000? (s/n): ");
        
            switch (mayor_menor = getchar())
            {
            case 's':
            case 'S': 
                printf("Ingrese el importe bruto: ");
                scanf("%d", &importeBruto);
                importeNeto = importeBruto - (importeBruto * 0.16);
                printf("El importe neto es: %.2f", importeNeto);
                break;
            default:
                printf("Ingrese el importe bruto: ");
                scanf("%d", &importeBruto);
                importeNeto = importeBruto - (importeBruto * 0.10);
                printf("El importe neto es: %.2f", importeNeto);
                break;
            }
            break;

	    // Ejercicio 24. Juan Jose Baustista Muñoz
	    case 24:
		    int hora, minutos, segundos;
		    // Obtener la hora en formato hora:minutos:segundos
		    printf("Ingresa la hora (formato 24 horas): ");
		    scanf("%d:%d:%d", &hora, &minutos, &segundos);
	
	    // Validar que los valores estén dentro de los rangos apropiados
	    if (hora < 0 || hora > 23 || minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59) {
	        printf("Hora inválida. Asegúrate de ingresar valores válidos.\n");
	        return 1; // Salir con código de error
	    }
	
	    segundos++; // Añadir un segundo
	
	    // Ajustar los valores usando solo switch y case
	    switch (segundos) {
	        case 60:
	            segundos = 0;
	            minutos++;
	            // No hay "break" aquí para continuar al siguiente caso
	        case 61:
	            if (minutos == 60) {
	                minutos = 0;
	                hora++;
	                // No hay "break" aquí para continuar al siguiente caso
	            }
	        case 62:
	            if (hora == 24) {
	                hora = 0;
	            }
	            break;
	        default:
	            // No hacer nada, mantener los valores actuales
	            break;
	    }
	
	    // Imprimir la hora un segundo después
	    printf("La hora un segundo después es: %02d:%02d:%02d\n", hora, minutos, segundos);
		    break;
	
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
