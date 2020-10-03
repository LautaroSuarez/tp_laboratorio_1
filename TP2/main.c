#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculadora.h"

int main()
{
    char seguir = 's';
    int numero1 = 0;
    int numero2 = 0;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    float resultadoDivision;
    int resultadoCalculoFactorialA;
    int resultadoCalculoFactorialB;
    int flagNumero1 = 0;
    int flagNumero2 = 0;
    int flagCalculo = 0;

    do
    {

        switch(mostrarMenu(numero1, numero2, flagNumero1, flagNumero2))
        {
        case 1:
            numero1 = pidoNumero("primer");
            flagNumero1 = 1;
            system("pause");
            break;

        case 2:
            numero2 = pidoNumero("segundo");
            flagNumero2 = 1;
            system("pause");
            break;

        case 3:
            if(flagNumero1 == 1 && flagNumero2 == 1)
            {
                resultadoSuma = sumar(numero1, numero2);
                resultadoResta = restar(numero1, numero2);
                resultadoMultiplicacion = multiplicar(numero1, numero2);
                resultadoDivision = dividir(numero1, numero2);
                resultadoCalculoFactorialA = funcionFactorial(numero1);
                resultadoCalculoFactorialB = funcionFactorial(numero2);
                puts("\nTodas las operaciones han sido realizadas.\n");

                flagCalculo = 1;
            }
            else
            {
                puts("\nAntes de realizar los calculos, debes ingresar los numeros solicitados en la opcion 1 y 2.\n");
            }

            system("pause");
            break;

        case 4:
            if(flagCalculo == 1)
            {
                printf("\nLa suma de %d y %d es: %d\n", numero1, numero2, resultadoSuma);
                printf("La resta de %d y %d es: %d\n", numero1, numero2, resultadoResta);
                printf("La multiplicacion de %d y %d es: %d\n", numero1, numero2, resultadoMultiplicacion);
                validarDivision(numero1, numero2, resultadoDivision);
                ValidarFactorial(numero1, resultadoCalculoFactorialA);
                ValidarFactorial(numero2, resultadoCalculoFactorialB);
                printf("\n");

                resetFlag(&flagCalculo);
                resetFlag(&flagNumero1);
                resetFlag(&flagNumero2);
            }
            else
            {
                puts("\nAntes de informar los resultados se debe realizar los calculos en la opcion 3.\n");
            }

            system("pause");
            break;

        case 5:
            seguir = 'n';
            break;
        default:
            puts("No es una opcion valida\n");
            system("pause");
            break;
        }
    }
    while(seguir=='s');

    return 0;
}
