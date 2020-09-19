/*
 * Programa (n�o otimizado) que determina todos os divisores de um inteiro.
 * N�o utiliza threads adicionais (N = 1).  // N = N�mero de unidades de processamento
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <stdlib.h>

void* divisores(void* p)
{
	long *v = (long*)p;
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
	
	return NULL;
}

int main()
{
	long v0[] = { 0, 2000999121 };
	long v1[] = { 1, 2000999123 };
	long v2[] = { 2, 2000999125 };
	long v3[] = { 3, 2000999127 };

	divisores((void*)v0);
	divisores((void*)v1);
	divisores((void*)v2);
	divisores((void*)v3);
	
	return 0;
}

