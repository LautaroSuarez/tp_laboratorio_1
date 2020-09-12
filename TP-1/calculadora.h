#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED


/** \brief Muestra un menu de opciones
 *
 * \param numero1 int Toma el valor del primer numero ingresado por el usuario para mostrarlo en la primer operacion del menu.
 * \param numero2 int Toma el valor del segundo numero ingresado por el usuario para mostrarlo en la segunda operacion.
 * \param flag1 int Toma el valor de la primer bandera para mostrar o no el primer numero ingresado en el menu.
 * \param flag2 int Toma el valor de la segunda bandera para mostrar o no el segundo numero ingresado en el menu.
 * \return int Un valor ingresado por el usuario para seleccionar una opcion.
 *
 */

int mostrarMenu(int numero1, int numero2, int flag1, int flag2);

/** \brief Pide al usuario que ingrese un numero.
 *
 * \param char[] toma la cadena de texto para mostrar esta misma incluida en un printf dentro de la funcion.
 * \return int El dato ingresado por el usuario como una cadena de texto.
 *
 */

int pidoNumero(char[]);

/** \brief Valida si el dato ingresado es un numero.
 *
 * \param  numero[] char Toma el valor de una variable como cadena de caracter para compararla entre un rango de numeros y negarlas para así lograr que muestre un mensaje en caso de no ser un numero lo ingresado.
 * \return int Numero ingresado por el usuario.
 *
 */

int validarNumero(char numero[]);

/** \brief Suma dos numeros enteros.
 *
 * \param numero1 int Toma un numero para realizar la suma.
 * \param numero2 int Toma otro numero para poder realizar la suma.
 * \return int El resultado de la suma entre dos numeros enteros.
 *
 */

int sumar(int numero1, int numero2);

/** \brief Resta dos numeros enteros.
 *
 * \param numero1 int Toma un numero a restar.
 * \param numero2 int Toma un numero que va a restar.
 * \return int El resultado de la resta entre dos numeros enteros.
 *
 */

int restar(int numero1, int numero2);

/** \brief Multiplica dos numeros enteros.
 *
 * \param numero1 int Toma un numero para realizar la multiplicacion.
 * \param numero2 int Toma otro numero para poder realizar la multiplicacion.
 * \return int El resultado de la multiplicacion entre dos numeros enteros.
 *
 */
int multiplicar(int numero1, int numero2);

/** \brief Divide dos numeros enteros.
 *
 * \param numero1 int Toma un numero para realizar la division.
 * \param numero2 int Toma otro numero para poder realizar la division.
 * \return float el resultado flotante de la division entre dos numeros enteros.
 *
 */

float dividir(int numero1, int numero2);

/** \brief Valida que se ingresen dos numeros y que no se ingrese el 0 ya que no se puede dividir.
 *
 * \param numero1 int Toma un numero para validar que no sea 0.
 * \param numero2 int Toma otro numero para validar que no sea 0.
 * \param calculo float Muestra el resultado de la division realizada en otra funcion.
 * \return float Un mensaje si se ingresaron los dos numeros y ninguno de los dos es 0, otro mensaje si un numero ingresado es 0, y otro mensaje si no se ingresaron los dos numeroo.
 *
 */

float validarDivision(int numero1, int numero2, float calculo);

/** \brief Calcula el factorial de un numero entero ingresado por el usuario del 1 al 12.
 *
 * \param numero int El valor sobre el cual se calcula el factorial.
 * \return int El resultado del factorial del numero.
 *
 */

int funcionFactorial (int numero);

/** \brief Valida que el numero ingresado para factorizar esté entre el rango 1 y 12.
 *
 * \param numero int Toma el numero ingresado por el usuario para validar dentro de la funcion que no sea un numero negativo o 0, y que este mismo se encuentre dentro del rango 1 y 12.
 * \param resultado int Contiene el resultado del numero factorizado de otra funcion.
 * \return int Un mensaje si el numero ingresado era negativo, otro mensaje si el numero se encontraba dentro del rango 1 y 12, y otro mensaje si el numero superaba el rango permitido.
 *
 */
int ValidarFactorial(int numero, int resultado);

/** \brief Reinicia el valor de la bandera.
 *
 * \return Devuelve el valor reiniciado de la bandera.
 *
 */

/** \brief Cambia el valor de la bandera a 0.
 *
 * \param p int* Cambia el valor del puntero a 0.
 * \return void El valor de la bandera en 0.
 *
 */
void resetFlag(int* p);

#endif // CALCULADORA_H_INCLUDED
