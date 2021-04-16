#include <stdio.h>
#include <stdlib.h>

int IngresarEntero(char mensaje[])
{
	int numeroIngresado;
	printf("%s", mensaje);
	scanf("%d",&numeroIngresado);
	return numeroIngresado;
}


int SumarEnteros(int a, int b)
{
	int resultadoSuma;

	resultadoSuma=a+b;

	return resultadoSuma;
}

int RestarEnteros(int a, int b)
{
	int resultadoResta;

	resultadoResta=a-b;

	return resultadoResta;
}

float DividirEnteros(int a, int b)
{
	float resultadoDivicion;

	resultadoDivicion=(float)a/b;

	return resultadoDivicion;
}

int ValidarCeros(int a)
{
	int validez;
	validez=0;
	if(a==0)
	{
		validez=1;
	}
	return validez;
}

int MultiplicarEnteros(int a, int b)
{
	int resultadoMultiplicacion;

	resultadoMultiplicacion=a*b;

	return resultadoMultiplicacion;
}

unsigned long int FactoriarNumero(int operando)
{
	unsigned long int resultadoFactorial;
	int i;
	resultadoFactorial=1;
	if(operando==0)
	{
		resultadoFactorial=1;
	}
	else
	{
		for(i=operando; i>1; i--)
		{
			resultadoFactorial=resultadoFactorial*i;
		}
	}
	return resultadoFactorial;
}

void MostrarResultadoSuma(int a, int b, int r)
{
	printf("el resultado de %d + %d es: %d\n", a, b, r);
}

void MostrarResultadoResta(int a, int b, int r)
{
	printf("el resultado de %d - %d es: %d\n", a, b, r);
}

void MostrarResultadoDivicion(int a, int b, float r)
{
	if(ValidarCeros(a)==1 || ValidarCeros(b)==1)
	{
		printf("No es posible dividir por 0.\n");
	}
	else
	{
		printf("el resultado de %d / %d es: %.2f\n", a, b, r);
	}
}

void MostrarResultadoMultiplicacion(int a, int b, int r)
{
	printf("el resultado de %d x %d es: %d\n", a, b, r);
}

void MostrarFactorial(int a, unsigned long int r)
{
	if(a>12)
	{
		printf("el factorial de %d es demasiado grande para este formato\n", a);
	}
	else
	{
		printf("el factorial de %d es: %lu\n", a, r);
	}
}

