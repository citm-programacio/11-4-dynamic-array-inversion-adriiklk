// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Array {

private: 
	int capacidad;
	int* array;

public:

	Array(int cap, int* arr) : capacidad(cap), array(new int[cap])
	{
		for (int i = 0; i < capacidad; i++)
		{
			array[i] = arr[i];
		}
	};

	void vuelta() 
	{
		for (int i = 0; i < capacidad; i++)
		{
			cout << array[i]<<",";
		}
		cout << "\n" << endl;

		int* arr2 = new int[capacidad];
		for (int i = 0; i < capacidad; i++)
		{
			arr2[i] = array[capacidad-i];
			cout << arr2 [i] <<",";
		}

		delete[] arr2;
		delete array;
	}
};


int main()
{
	int tamanyo = 4;
	int arr[] = { 2,44,55,7 };

	Array juanjo(tamanyo, arr);
	juanjo.vuelta();
}
