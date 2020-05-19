//Ejercicio 8

/*Repita el programa anterior, pero dibujando el triángulo al revés:
   *
  **
 ***
****
*/

#include <stdio.h>

main()
{
	int x;
	printf("Que tamaño de catetos desea?(Ingresar un solo numero): ");
	scanf("%i",&x);
	
	switch(x){
		case 1: printf("*"); break;
		case 2: printf(" *\n**"); break;
		case 3: printf("*\n**\n***"); break;
		case 4: printf("*\n**\n***\n****"); break;
		case 5: printf("*\n**\n***\n****\n*****"); break;
		case 6: printf("*\n**\n***\n****\n*****\n******"); break;
		case 7: printf("*\n**\n***\n****\n*****\n******\n*******"); break;
		case 8: printf("*\n**\n***\n****\n*****\n******\n*******\n********"); break;
		case 9: printf("*\n**\n***\n****\n*****\n******\n*******\n********\n*********"); break;
		case 10: printf("*\n**\n***\n****\n*****\n******\n*******\n********\n*********\n**********"); break;
		default: printf("No se puede");
	}		
}

