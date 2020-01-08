#include <stdio.h> 
#include <stdlib.h>
#include <pthread.h> //crear funciones
#include <unistd.h> // libreria para sleep
#include <windows.h>
#include <string.h>

void *verde(void*); void *naranja(void*); void *rojo(void*);

int main()
{
	int i = 1;
	int ver,	rj,amarillo;
	printf( "Introduzca el tiempo de color verde " );
	scanf( "%d", &ver);
	printf( "Introduzca el tiempo de color rojo " );
	scanf( "%d", &rj);
	printf( "Introduzca el tiempo de color naranja " );
	scanf( "%d", &amarillo);
	
	system("cls"); system("color 20"); Sleep(ver);	
	system("cls"); system("color E0"); Sleep(amarillo);		
	system("cls"); system("color 40"); Sleep(rj);
	pthread_t pthread_rojo, pthread_naranja, pthread_verde;
	return 0;
}


