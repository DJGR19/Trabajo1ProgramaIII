#include <iostream>
using namespace std;
//HOMEWORK
//DJ
int main() {
	//Programa de calificaciones
	int nota=0;
	int contador = 0;
	int alumap=0;
	int alumrep=0;
	int promedio=0;
	do {
		cout << "Ingrese las notas de los alumnos (valores numéricos entre 0 y 100): :)" << endl;
		cin >> nota;
		
		//nota += nota;
		//Cantidad de ingreso de notas

		//Alumnos aprobados y reprobados (Se aprueba con 60)
		for (int i = 0; i <= 100; i++) {
			contador++;
		}

		

		promedio = nota / contador;

		} while (nota != -1);

		cout << "La cantidad de alumnos ingresados es de: " <<nota<<endl;
		cout << "La cantidad de alumnos aprobados es: " << alumap<<endl;
		cout << "La cantidad de alumnos reprobados es: " << alumrep<<endl;
		cout << "El promedio de las calificaciones es de: " << promedio<<endl;

		

		


		system("pause");
	}

