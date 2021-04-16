#include <stdio.h>
#include <stdlib.h>
#ifndef INGRESARENTEROS_H_
#define INGRESARENTEROS_H_
/**
 * @fn int IngresarEntero(char[])
 * @brief mustra un mensaje especifico y toma un numero entero.
 *
 * @param un array de caracteres que muestran el mensaje solicitado.
 * @return devuelve un numero con el formato int.
 */
int IngresarEntero(char[]);
/**
 * @fn int SumarEnteros(int, int)
 * @brief toma 2 numeros enteros ingresados por parametro y los suma.
 *
 * @param un numero entero tomado anteriormente.
 * @param un numero entero tomado anteriormente.
 * @return la suma de los dos numeros enteros.
 */
int SumarEnteros(int, int);
/**
 * @fn int RestarEnteros(int, int)
 * @brief toma 2 numeros enteros ingresados por parametro y resta el segundo numero al primero.
 *
 * @param un numero entero tomado anteriormente.
 * @param un numero entero tomado anteriormente.
 * @return la diferencia entre dos numeros numeros.
 */
int RestarEnteros(int, int);
/**
 * @fn float DividirEnteros(int, int)
 * @brief toma 2 numeros enteros ingresados por parametro y divide el primero por el segundo.
 * 		  retornando decimal si es necesario.
 * @param un numero entero tomado anteriormente.
 * @param un numero entero tomado anteriormente.
 * @return el cociente de dos numeros enteros.
 */
float DividirEnteros(int, int);
/**
 * @fn int ValidarCeros(int, int)
 * @brief verifica que el numero ingrsado sea 0 o no.
 *
 * @param un numero entero tomado anteriormente.
 * @param un numero entero tomado anteriormente.
 * @return un valor parametro para las diviciones.
 */
int ValidarCeros(int);
/**
 * @fn int MultiplicarEnteros(int, int)
 * @brief toma 2 numeros enteros ingresados por parametro y los multiplica.
 *
 * @param un numero entero tomado anteriormente.
 * @param un numero entero tomado anteriormente.
 * @return el producto de dos enteros.
 */
int MultiplicarEnteros(int, int);
/**
 * @fn unsigned long int FactoriarNumero(int)
 * @brief toma un numero entero ingresado por parametro y calcula su factorial.
 *
 * @param un numero entero tomado anteriormente.
 * @return el factorial de un numero
 */
unsigned long int FactoriarNumero(int);
/**
 * @fn void MostrarResultadoSuma(int, int, int)
 * @brief muestra un mensaje con el resultado de la suma de los numeros ingresados por parametro.
 *
 * @param un numero entero tomado anteriormente.
 * @param un numero entero tomado anteriormente.
 * @param el resultado de la suma.
 */
void MostrarResultadoSuma(int, int, int);
/**
 * @fn void MostrarResultadoResta(int, int, int)
 * @brief muestra un mensaje con el resultado de la resta entre
 * el primer y el segundo numero, ingrsados por parametro.
 * @param un numero entero.
 * @param un numero entero.
 * @param la diferencia de la resta.
 */
void MostrarResultadoResta(int, int, int);
/**
 * @fn void MostrarResultadoDivicion(int, int, float)
 * @brief muestra un mensaje con el cociente de la divicion entre
 * el primer y el segundo numero, ingrsados por parametro.
 * @param un numero entero.
 * @param un numero entero.
 * @param el cociente de la divicion.
 */
void MostrarResultadoDivicion(int, int, float);
/**
 * @fn void MostrarResultadoMultiplicacion(int, int, int)
 * @brief muestra el resultado de la multiplicacion entre los numeros ingresados por parametro
 *
 * @param un numero entero tomado anteriormente.
 * @param un numero entero tomado anteriormente.
 * @param el producto de la multiplicacion.
 */
void MostrarResultadoMultiplicacion(int, int, int);
/**
 * @fn void MostrarFactorial(int, unsigned long int)
 * @brief muestra el factorial de un numero ingresado por parametro.
 *
 * @param un numero entero.
 * @param el factorial del numero entero.
 */
void MostrarFactorial(int, unsigned long int);

#endif /* INGRESARENTEROS_H_ */
