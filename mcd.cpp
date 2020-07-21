//Jorge Galeano - 20172020060

#include <iostream>
#include <math.h>
using namespace std;


int calcular_mcd(int a, int b)
{
	int max,min,cociente,residuo,mcd;
	if(a >= b)
	{max = a; min = b;}
	else
	{max = b; min = a;}

	do{
		mcd = min;
		cociente = max/min;
		residuo = max - (min * cociente);
		max = min;
		min = residuo;
	}while(residuo != 0);

	return mcd;
}

int main()
{
	int a,b,mcd,mcm,a_abs,b_abs;
	
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	
	a_abs = abs(a);
	b_abs = abs(b);
	
	mcd = calcular_mcd(a_abs,b_abs);
	cout<<"El maximo comun divisor de "<<a<<" y "<<b<<" es: "<<mcd<<endl;
	
	system("pause");
	return 0;
}
