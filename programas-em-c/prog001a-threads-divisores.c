/*
 * Programa (não otimizado) que determina todos os divisores de um inteiro.
 * Não utiliza threads (N = 0).  // N = Número de unidades de processamento
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <stdlib.h>

int divisores(long v[])
{
	long id = v[0];
	long num = v[1];
	long divisor;

	for ( divisor = 1; divisor <= num; divisor++ )
		if ( num % divisor == 0 )
			switch ( id ) {
				case 0: printf( "%ld\n", divisor ); break;
				case 1: printf( "\t\t%ld\n", divisor ); break;
				case 2: printf( "\t\t\t\t%ld\n", divisor ); break;
				case 3: printf( "\t\t\t\t\t\t%ld\n", divisor ); break;
			}
	
	return 0;
}

int main()
{
	long v0[] = { 0, 2000999121 };
	long v1[] = { 1, 2000999123 };
	long v2[] = { 2, 2000999125 };
	long v3[] = { 3, 2000999127 };

	divisores(v0);
	divisores(v1);
	divisores(v2);
	divisores(v3);
	
	return 0;
}

