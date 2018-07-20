#include <iostream>

using namespace std;

void Convertidor1(int numero_decimal)
{
	int primer_numero;
	int segundo_numero;
	int tercer_numero;
	int cuarto_numero;


	float float_numero;
	float float2_numero;
	float float3_numero;
	float float4_numero;

	int binario;
	int binario1;
	int binario2;
	int binario3;

	primer_numero = numero_decimal;
	float_numero = primer_numero % 2;
	if ((float_numero) == 0)
	{
		binario = 0;
	}
	else
	{
		binario = 1;
	}
	segundo_numero = primer_numero / 2;
	float2_numero = segundo_numero % 2;
	if ((float2_numero) == 0)
	{
		binario1 = 0;
	}
	else
	{
		binario1 = 1;
	}
	tercer_numero = segundo_numero / 2;
	float3_numero = tercer_numero % 2;
	if ((float3_numero) == 0)
	{
		binario2 = 0;
	}
	else
	{
		binario2 = 1;
	}
	cuarto_numero = tercer_numero / 2;
	float4_numero = cuarto_numero % 2;
	if ((float4_numero) == 0)
	{
		binario3 = 0;
	}
	else
	{
		binario3 = 1;
	}
	cout << "El numero : " << numero_decimal << " Su conversion en binario seria : " << binario3 << " " << binario2 << " " << binario1 << " " << binario << endl;
}

int main()
{
	int numero = 0;
	cout << "Ingrese un numero : " << endl;
	cin >> numero;
	Convertidor1(numero);
	cout << "Se ha realizado la conversion!" << endl;
	system("pause");
}