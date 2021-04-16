/*
 ============================================================================
 Name        : Trabajo Practico 1
 Author      : Castro Matias Ezequiel 1°C
 Version     : v3.0
 Description : Hacer una calculadora.
 Para ello el programa iniciará y contará con un menú de opciones:
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
 4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "OperarEnteros.h"


int main(void)
{
	int opcion;
	int primerOperando;
	int segundoOperando;
	int valorSuma;
	int valorResta;
	float valorDivision;
	int valorMultiplicacion;
	unsigned long int valorFactiralA;
	unsigned long int valorFactiralB;
	int banderaPrimerOpernado;
	int banderaSegundoOperando;

	banderaPrimerOpernado=0;
	banderaSegundoOperando=0;

	setbuf(stdout, NULL);

	printf("Bienvenido a Calculadora C\n");

	do
		{
			printf("Que accion desea realizar?");
			if(banderaPrimerOpernado==0)
			{
				printf("\n1. Ingresar primer operando(A=X)");
			}
			else
			{
				printf("\n1. Ingresar primer operando(A=%d)", primerOperando);
			}
			if(banderaSegundoOperando==0)
			{
				printf("\n2. Ingresar segundo operando(B=Y)");
			}
			else
			{
				printf("\n2. Ingresar segundo operando(B=%d)", segundoOperando);
			}
			printf("\n3. Calcular todas las operaciones");
			printf("\n\tCalcular la suma (A+B)");
			printf("\n\tCalcular la resta (A-B)");
			printf("\n\tCalcular la division (A/B)");
			printf("\n\tCalcular la multiplicacion (A*B)");
			printf("\n\tCalcular el factorial (A! - B!)");
			printf("\n4. Mostrar resultados");
			printf("\n5. Salir");
			printf("\nElija una opcion: ");
			scanf("%d", &opcion);

				switch(opcion)
				{
					case 1:
						primerOperando=IngresarEntero("ingrese 1er operando: ");
						banderaPrimerOpernado=1;
						break;
					case 2:
						segundoOperando=IngresarEntero("ingrese 2do operando: ");
						banderaSegundoOperando=1;
						break;
					case 3:
						if(banderaPrimerOpernado==0 || banderaSegundoOperando==0)
						{
						printf("No hay operadores suficientes para realizar los calculos!\n");
						}
						else
						{
							printf("calculando\n");
							valorSuma=SumarEnteros(primerOperando, segundoOperando);
							valorResta=RestarEnteros(primerOperando, segundoOperando);
							valorDivision=DividirEnteros(primerOperando, segundoOperando);
							valorMultiplicacion=MultiplicarEnteros(primerOperando, segundoOperando);
							valorFactiralA=FactoriarNumero(primerOperando);
							valorFactiralB=FactoriarNumero(segundoOperando);
						}
						break;
					case 4:
						if(banderaPrimerOpernado==0 || banderaSegundoOperando==0)
						{
							printf("No hay operadores suficientes para realizar los calculos!\n");
						}
						else
						{
							MostrarResultadoSuma(primerOperando, segundoOperando, valorSuma);
							MostrarResultadoResta(primerOperando, segundoOperando, valorResta);
							MostrarResultadoDivicion(primerOperando, segundoOperando, valorDivision);
							MostrarResultadoMultiplicacion(primerOperando, segundoOperando, valorMultiplicacion);
							MostrarFactorial(primerOperando, valorFactiralA);
							MostrarFactorial(segundoOperando, valorFactiralB);
						}
						break;
					case 5:
						printf("Eligio salir.\nQue tenga buen día!\n");
						break;
					default:
						printf("La opcion ingresada no es valida. Por favor ingrese otra\n");
						break;
				}

		}while(opcion!=5);

	return EXIT_SUCCESS;
}
