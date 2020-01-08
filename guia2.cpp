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
	int verdes;
	printf( "Introduzca el tiempo de color verde " );
	scanf( "%d", &verdes);
	int rojos;
	printf( "Introduzca el tiempo de color rojo " );
	scanf( "%d", &rojos);
	int amarillo;
	printf( "Introduzca el tiempo de color naranja " );
	scanf( "%d", &amarillo);
	system("cls"); system("color 20"); Sleep(verdes);
	
	system("cls"); system("color E0"); Sleep(amarillo);
		
	system("cls"); system("color 40"); Sleep(rojos);

	pthread_t pthread_rojo, pthread_naranja, pthread_verde;
	
	return 0;
}
