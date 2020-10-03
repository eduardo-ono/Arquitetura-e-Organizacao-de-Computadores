/*
 * Análise de desempenho utilizando threads em linguagem C (padrão POSIX).
 * Programa (não otimizado) que determina todos os divisores de um inteiro.
 * N = 4
 *
 * Copyright(c) Eduardo Ono.
*/

#include <stdio.h>
#include <pthread.h>  // threads 

void* divisores( void *p )
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
				case 3: printf( "\t\t\t\t\t\t%ld\n", divisor );
			}
	
	return NULL;
}

int main()
{
	long v0[] = { 0, 2000999121 };
	long v1[] = { 1, 2000999123 };
	long v2[] = { 2, 2000999125 };
	long v3[] = { 3, 2000999127 };

	pthread_t t0, t1, t2, t3;

	pthread_create( &t0, NULL, divisores, (void*)v0 );
	pthread_create( &t1, NULL, divisores, (void*)v1 );
	pthread_create( &t2, NULL, divisores, (void*)v2 );
	pthread_create( &t3, NULL, divisores, (void*)v3 );
	pthread_create( &t4, NULL, divisores, (void*)v4 );
	pthread_join( t0, NULL );
	pthread_join( t1, NULL );
	pthread_join( t2, NULL );
	pthread_join( t3, NULL );
	pthread_join( t4, NULL );
	
	return 0;
}

