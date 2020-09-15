// EjerciciosCapitulo2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

// ejercicio 2.17 2.17 (Impresión) Escriba un programa que imprima los caracteres V a Z en la misma línea con cada par de caracteres adyacentes separados por un espacio i.c.VX YZ.Haga esto de varias formas :

//a) Usar una declaración con dos operadores de inserción de flujo.

//b) Usar una declaración con el operador de inserción de cuatro flujos.

//c) Usar dos declaraciones con un operador de inserción de flujo cach.


/*
int main()
{
	char a[] = "vxy z";
	char b = 'v';
	char c = 'x';
	char d = 'y';
	char e = 'z';
	// utilizando una insteruccion con un operador de insercion de flujos 
	cout << a << endl;
	// utilizando una insteruccion con cuatro operadores de insercion de flujos 
	cout << b << "\ t" << c << "\ t" << d << "\ t" << e << endl;
	// utilizando cuatro instrucciones
	cout << b;
	cout << c;
	cout << d;
	cout << e;
	return 0;
}
*/


//ejercicio 2.18 2.18 (Comparación de enteros) Escriba un programa que le pida al usuario que ingrese dos enteros, obtenga el números del usuario, 
//luego imprime el número mayor seguido de las palabras "es mayor".Si el los números son iguales, imprima el mensaje "Estos números son iguales".


/*
int main()
{
	int num1, num2, num3, mayor, menor;
	cout << "Ingresar tres numeros :" << endl;
	cout << "Ingrese un numero: ";
	cin >> num1;
	cout << "Ingrese un numero: ";
	cin >> num2;
	cout << "Ingrese un numero: ";
	cin >> num3;
	if (num1 == num2 || num1 == num3 || num2 == num3)
	{
		cout << "Hay numeros iguales, Ingresar numeros distintos";
	}
	else
	{
		if (num1 > num2 && num2 > num3)
		{
			mayor = num1;
			menor = num3;
		}
		if (num1 > num3 && num3 > num2)
		{
			mayor = num1;
			menor = num2;
		}
		if (num2 > num3 && num3 > num1)
		{
			mayor = num2;
			menor = num1;
		}
		if (num2 > num1 && num1 > num3)
		{
			mayor = num2;
			menor = num3;
		}
		if (num3 > num2 && num2 > num1)
		{
			mayor = num3;
			menor = num1;
		}
		if (num3 > num1 && num1 > num2)
		{
			mayor = num3;
			menor = num2;
		}
	}
	cout << mayor << " es el mas grande" << endl;
	cout << menor << " es el mas pequeno" << endl;
	return 0;
}
*/

//Ejercicio 2.21 2.21 (Visualización de letras grandes) Escriba un programa que imprima C ++ de la siguiente manera:
/*
int main()
{
	cout << "  ccc   +      +" << endl;
	cout << " c      +      +" << endl;
	cout << "c     +++++  +++++" << endl;
	cout << " c      +      +" << endl;
	cout << "  ccc   +      +" << endl;

	return 0;
}
*/


//Ejercicio 2.24 2.24 (Impar o Par) Escriba un programa que lea en dos enteros y determine e imprima si cada entero, así como la suma de los dos enteros, es un número sumado.[Sugerencia Utilice el operador resto(%).
//Un número impar no es múltiplo de dos.Cualquier número de adición tiene un resto de uno cuando se divide por 2.]


/*
int main()
{
	int a, b, suma;

	cout << "inserte unnumero: " << endl;
	cin >> a;

	cout << "inserte unnumero: " << endl;
	cin >> b;

	suma = a + b;

	if (!(a % 2))
	{
		cout << a << " es un numero par" << endl;
	}
	else
	{
		cout << a << " es un numero impar" << endl;

	}

	if (!(b % 2))
	{
		cout << b << " es un numero par" << endl;
	}
	else
	{
		cout << b << " es un numero impar" << endl;

	}


	if (a % 2 == b % 2)
	{
		cout << "Ambos numeros son pares y la suma de ellos es: " << suma << " tambien es par." << endl;
	}

	else if (a % 2 == 1 || b % 2 == 1)
	{
		cout << "La suma de ambos numeros es: " << suma << " es un numero impar." << endl;
	}
	return 0;
}
*/

//Ejercicio 2.25 2.25 (Factores) Escriba un programa que lea en tres enteros y determine e imprima si el primero dos enteros son factores del segundo.[Sugerencia:use el operador restante(%).]


/*
int main()
{
	int multiplo1, multiplo2, numero;

	cout << "Inserte un posible multiplo: " << endl;
	cin >> multiplo1;

	cout << "Inserte un posible multiplo: " << endl;
	cin >> multiplo2;

	cout << "Inserte un numero: " << endl;
	cin >> numero;


	if (numero % multiplo1 == 0 && numero % multiplo2 == 0)
	{
		cout << multiplo1 << " y " << multiplo2 << " son factores de " << numero << endl;
	}

	else if (numero % multiplo1 == 0 || numero % multiplo2 == 0)
	{
		if (numero % multiplo1 == 0)
		{
			cout << multiplo1 << " es factor de " << numero << endl;
		}
		else
		{
			cout << multiplo2 << " es factor de " << numero << endl;
		}
	}
	return 0;
}
*/


//Ejercicio 2.26 2.26 (Patrón de tablero de ajedrez) Muestra el siguiente patrón de tablero de ajedrez con ocho salidas declaraciones, luego muestre el mismo patrón utilizando la menor cantidad posible de declaraciones.
/*
int main()
{
	cout << "* * * * * * * * " << endl;
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * * " << endl;
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * * " << endl;
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * * " << endl;
	cout << " * * * * * * * *" << endl;

	//segunda forma mas reducida
	cout << "segunda forma mas corta" << endl;

	cout << "* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *" << endl;

	return 0;
}
*/

// ejercicio 2.27 Escribe un programa que imprime el equivalente entero de un carácter escrito en el teclado.Almacene la entrada en un variable de tipo char.
//Pruebe su programa varias veces usando letras mayúsculas, minúsculas, dígitos sus y caracteres especiales(como $).


/*
int main()
{

	char val;
	cout << "ingrese un caracter: " << endl;
	cin >> val;
	int x = static_cast<int>(val);
	if (x >= 65 && x <= 90 || x >= 97 && x <= 122)
	{
		cout << val << "es una letra";
	}
	else
	{
		cout << val << "no es una letra";
	}
	return 0;

}

*/

// Ejercicio 2.28 2.28 (Dígitos de un entero) Escriba un programa que ingrese un entero de cuatro dígitos, separe el entero en sus dígitos y los imprime en orden inverso separados por dos espacios cada uno. 
//| Hinz: usa el entero operadores de división y resto.) Por ejemplo, si el usuario escribe 4315, el programa debe imprimir :


/*
int main()
{
	int num, unidades, decenas, centenas, millar;
	cout << "ingrese unn numero de 4 digitos para imprimirlo al revez:" << endl;
	cin >> num;
	unidades = num % 10;
	num = num / 10;
	decenas = num % 10;
	num = num / 10;
	centenas = num % 10;
	num = num / 10;
	millar = num % 10;
	num = num / 10;
	cout << "numero impreso al reves :" << endl;
	cout << unidades << "\t" << decenas << "\t" << centenas << "\t" << millar << endl;
	return 0;
}

*/

// Ejercicio 2.29 2.29 (Tabla) Usando las técnicas de este capítulo, escriba un programa que calcule el área de la superficie y volumen de cubos con longitudes de cara de 0 a 4 cm.
//Utilice pestañas para imprimir lo siguiente con un formato prolijo tabla de valores :


/*
int main()
{

	cout << "LONGITUDES DE CARA DESDE 0 A 4:" << endl;
	int n;
	cout << "LONGITUD DE LA CARA" << "\t" << "AREA DEL CUBO" << "\t" << "VOLUMEN DEL CUBO" << endl;

	n = 0;
	cout << n << "\t" << 6 * (n * n) << "\t" << n * n * n << endl;

	n = 1;
	cout << n << "\t" << 6 * (n * n) << "\t" << n * n * n << endl;

	n = 2;
	cout << n << "\t" << 6 * (n * n) << "\t" << n * n * n << endl;

	n = 3;
	cout << n << "\t" << 6 * (n * n) << "\t" << n * n * n << endl;

	n = 4;
	cout << n << "\t" << 6 * (n * n) << "\t" << n * n * n << endl;

	return 0;
}
*/

//Ejercicio 2.30 2.30 (Calculadora del índice de masa corporal) Introdujimos la calculadora del índice de masa corporal (IMC) en Ejercicio 1.9.Las fórmulas para calcular el IMC son:

int main()
{
	float altura, peso, imc;

	cout << "CALCULADORA DE INC:" << endl;

	cout << "Ingresa tu peso (Kg): ";
	cin >> peso;

	cout << "Ingresa tu altura (mts): ";
	cin >> altura;

	imc = peso / (altura * altura);



	cout << "\n";
	cout << "VALORES DEL INDICE DE MASA CORPORAL: " << endl;
	cout << "Tu indice de masa corporal es:  " << imc << endl;
	cout << "\n" << endl;

	cout << "Peso inferior al normal: " << "\t Menos de 18.5" << endl;
	cout << "Peso normal: " << "\t\t\t 18.5 - 24.9" << endl;
	cout << "Peso superior al normal: " << "\t 25.0 - 29.9" << endl;
	cout << "Obesidad: " << "\t\t\t Mas de 30.0" << endl;


	if (imc < 18.5)
	{
		cout << "tu indice de masa corporal es inferior a 18.5 " << endl;
	}
	else if (imc > 18.5 && imc < 24.9)
	{
		cout << "tu indice de masa corporal esta dentro del rango normal 18.5 - 24.9" << endl;
	}
	else if (imc > 25.0 && imc < 29.9)
	{
		cout << "tu indice de masa corporal es superior del rango normal 25.0 - 29.9" << endl;
	}
	else
	{
		cout << "\n" << endl;
		cout << "TU INDICE DE MASA CORPORAL ES DE OBESIDAD CON MAS DE 30.0" << endl;
	}


	return 0;
}