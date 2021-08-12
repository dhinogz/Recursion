#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Factorial.h"
#include "Fibonacci.h"
#include "Potencia.h"

int main()
{
	int opcion;
	while (opcion > 2)
	{
		cout << "0: Factorial\n1: Fibonacci\n2. Potencia\n";
		cin >> opcion;
		if (opcion == 0)
		{
			long long num;
			cout << "Factorial de: ";
			cin >> num;
			if (num <= 0)
			{
				cout << "'N' tiene que ser un entero positivo\n";
				return 0;
			} 
			cout << "Factorial iterativa: " << factIterativa(num) << endl;
			cout << "Factorial recursiva: " << factRecursiva(num) << endl;
		}
		else if (opcion == 1)
		{
			int num;
			cout << "Fibonacci de: ";
			cin >> num;
			if (num <= 0)
			{
				cout << "'N' tiene que ser un entero positivo\n";
				return 0;
			} 
			cout << "Fibonacci iterativa: " << fibonacciIterativa(num) << endl;
			cout << "Fibonacci recursiva: " << fibonacciRecursiva(num) << endl;
		}
		else if (opcion == 2)
		{
			int x, y;
			cout << "Potencia x^y\nx: ";
			cin >> x;
			cout << "y: ";
			cin >> y;
			cout << "Potencia iterativa: " << potenciaIterativa(x, y) << endl;
			cout << "Potencia recursiva: " << potenciaRecursiva(x, y) << endl;
		}
	}
}