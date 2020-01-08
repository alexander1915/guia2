#include <stdio.h> #include <stdlib.h>
#include <pthread.h> //crear funciones
#include <unistd.h> // libreria para sleep
#include <windows.h>
#include <string.h>

void *verde(void*); void *naranja(void*); void *rojo(void*);
void *verde(void *tid)
{
	int verdes;
	printf( "Introduzca el tiempo de color verde " );
	scanf( "%d", &verdes);
	system("cls"); //cls o clear es para limpiar la pantalla de comandos
	system("color 20");
	Sleep(verdes);
}
void *naranja(void *tid)
{
	int amarillo;
	printf( "Introduzca el tiempo de color naranja " );
	scanf( "%d", &amarillo);
	system("cls"); system("color E0"); Sleep(amarillo);
}
void *rojo(void *tid)
{
	int rojos;
	printf( "Introduzca el tiempo de color rojo " );
	scanf( "%d", &rojos);
	system("cls"); system("color 40"); Sleep(1000);
}
int main()
{
	int i = 1;
		
	pthread_t pthread_rojo, pthread_naranja, pthread_verde;
	pthread_create (&pthread_verde, NULL, verde, (void *)i); pthread_join(pthread_verde, NULL);
	pthread_create (&pthread_naranja,NULL, naranja, (void *)i); pthread_join(pthread_naranja, NULL);
	pthread_create (&pthread_rojo, NULL, rojo, (void *)i); pthread_join(pthread_rojo, NULL);
	pthread_exit(NULL);
	return 0;
}

