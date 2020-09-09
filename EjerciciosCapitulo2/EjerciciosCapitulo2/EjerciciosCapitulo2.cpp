// EjerciciosCapitulo2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

// ejercicio 2.17
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


//ejercicio 2.18
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

//Ejercicio 2.21
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


//Ejercicio 2.24
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

//Ejercicio 2.25
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


//Ejercicio 2.26
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

// ejercicio 2.27
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

// Ejercicio 2.28
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

// Ejercicio 2.29
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

//Ejercicio 2.30

int main()
{
	float a, p, imc;

	cout << "CALCULADORA DE INC:" << endl;

	cout << "Ingresa tu peso (Kg): ";
	cin >> p;

	cout << "Ingresa tu altura (mts): ";
	cin >> a;

	imc = p / (a * a);



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