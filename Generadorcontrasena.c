//! Generador de contraseñas aleatorias con longitud variable
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//! Funcion para generar contrasenas aleatorias
void generarContrasena(int longitud)
{
    char caracteres[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!#$%^&?><";
    srand(time(NULL));
    for (int i = 0; i < longitud; i++)
    {
        int random = rand() % 72;
        printf("%c", caracteres[random]);
    }
    printf("\n");
}

int main()
{
    int longitud;
    printf("Ingrese la longitud de la contrasena: ");
    scanf("%d", &longitud);
    generarContrasena(longitud);
    sleep(10000000);
    return 0;
}
//? En este programa se genera una contraseña aleatoria con una longitud