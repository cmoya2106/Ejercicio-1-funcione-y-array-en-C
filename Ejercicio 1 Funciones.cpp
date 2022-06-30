//Carlos Moya C.I: 31317884
//Ejercicio 1 funciones

#include <stdio.h>
int suma (int a, int b)
{
	return a+b;
}
main()
{
	int n1,n2,resp;
	printf("Ingresar dos numeros ");
	scanf("%i %i", &n1,&n2);
	
	resp = suma(n1,n2);
	 
	printf("resultado = %i", resp);
	return 0;
}