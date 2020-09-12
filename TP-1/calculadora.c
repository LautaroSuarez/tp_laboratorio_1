#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculadora.h"

int mostrarMenu(int numero1, int numero2, int flag1, int flag2)
{
    int opcion;

    system("cls");
    printf("|*|*|*|*|*| MENU DE OPCIONES |*|*|*|*|*|\n");           //Muestro el titulo del menu.
    printf("----------------------------------------\n\n");

    if (flag1)
    {
        printf("1- Ingresar primer operando A = %d\n", numero1);    //Muestro el primer numero si el usuario lo ingreso.
    }
    else
    {
        printf("1- Ingresar primer operando A = 0\n");              //Muestro "0" para mostrar al usuario que no ingreso un numero en la operacion.
    }

    if (flag2)
    {
        printf("2- Ingresar segundo operando B = %d\n", numero2);   //Muestro el segundo numero si el usuario lo ingreso.
    }
    else
    {
        printf("2- Ingresar segundo operando B = 0\n");             //Muestro "0" para mostrar al usuario que no ingreso un numero en la operacion.
    }

    printf("3- Calcular todas las operaciones\n");                  //Muestro la opcion 3 en la cual realiza los calculos.
    printf("4- Informar resultados\n");                             //Muestro los resultados de los calculos realizados en la opcion 3.
    printf("5- Salir\n\n");                                         //Muestro la opcion de salida en caso de querer cerrar el programa.
    printf("Indique opcion: ");                                     //Solicito al usuario que ingrese la opcion que desee elegir.
    scanf("%d", &opcion);

    return opcion;
}

int pidoNumero(char texto[])
{
    char cadenaNumero[20];
    int valido = 1;
    float numero;

    do
    {
        system("cls");
        printf("Ingresar el %s numero: ", texto);                      //Pido al usuario que ingrese el valor que va a ser otorgado al primer numero.
        scanf("%s", cadenaNumero);
        printf("\n");
        valido = validarNumero(cadenaNumero);                       //Valido que el usuario solo ingrese numeros y no letras.
    }
    while(valido == 1);                                             //Condicion para que el usuario vuelva a ingresar un numero.

    numero = atof(cadenaNumero);
    return numero;
}

int validarNumero(char numero[])
{
    int i;
    for(i=0; i<strlen(numero); i++)
    {
        if (! (numero[i] >= -45 && numero[i] < 58))                     //Condicion negada para que así tome los numeros negativos y positivos, y entre al if en caso de haber ingresado una letra en vez de un numero.
        {
            system("cls");
            printf("Error. Reintentar. Solo ingrese numeros.\n\n");     //Mensaje en caso de haber ingresado algo que no sea un numero.
            system("pause");
            return 1;
        }
    }
    return 0;
}

int sumar(int a, int b)
{
    int resultado;

    resultado = a + b;                                              //Realizo la operacion de suma la cual se guardara el resultado en la variable de tipo entera llamada "resultado".

    return resultado;
}

int restar(int a, int b)
{
    int resultado;

    resultado = a - b;                                              //Realizo la operacion de resta la cual se guardara el resultado en la variable de tipo entera llamada "resultado".

    return resultado;
}

int multiplicar(int a, int b)
{
    int resultado;

    resultado = a * b;                                              //Realizo la operacion de multiplicacion la cual se guardara el resultado en la variable de tipo entera llamada "resultado".

    return resultado;
}

float dividir(int a, int b)
{
    float resultado;

    resultado = (float) a / b;                                      //Realizo la operacion de division la cual se guardara el resultado en la variable de tipo flotante llamada "resultado".

    return resultado;
}

float validarDivision(int numero1, int numero2, float calculo)
{
    float resultado;

    if(numero1 != 0 && numero2 != 0)
    {
        resultado = printf("La division de %d y %d es: %.2f\n", numero1, numero2, calculo);
    }
    else if(numero1 == 0 && numero2 == 0)
    {
        resultado = printf("No se puede dividir por cero.\n\n");
    }
    else
    {
        resultado = printf("No se puede realizar la division si no ingresan los dos numeros.\n\n");
    }

    return resultado;
}

int funcionFactorial (int numero)
{
    int resultado;
    int factorial = 1;

    for(int i = 1; i <= numero; i++)                                 //Bucle con la condicion de entrar hasta que la variable "i" inicializada en "1" alcance el valor del numero a factorizar sumandole "1" cada vez que entra al bucle.
    {
        factorial *= i;                                              //Calculo para conseguir el factorial al multiplicarlo hasta alcanzar el numero asignado en la condicion del for.
    }

    resultado = factorial;                                           //Guardo el resultado del calculo factorial en una variable para retornarla como resultado.

    return resultado;
}

int ValidarFactorial(int numero, int resultado)
{
    int mostrar;

    if(numero == 0)
    {
        mostrar = printf("No se puede hacer factorial de negativo..\n");
    }
    else if(numero >= 1 && numero <= 12)
    {
        mostrar = printf("El factorial de %d es %d\n", numero, resultado);
    }
    else
    {
        mostrar = printf("No calculo factorial de un numero superior a 12.\n");
    }
    return mostrar;
}

void resetFlag(int* p)
{

    *p = 0;                                                          //Cambio el valor del puntero a 0;

}
