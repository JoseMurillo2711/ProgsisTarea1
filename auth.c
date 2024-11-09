// auth.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "auth.h"

#define MAX_USERNAME_LENGTH 50
#define MAX_PASSWORD_LENGTH 50

int autenticarUsuario(char *usuario, char *clave) {
    FILE *archivo = fopen("usuarios.txt", "r");
    char linea[MAX_USERNAME_LENGTH + MAX_PASSWORD_LENGTH + 2];
    char usuarioArchivo[MAX_USERNAME_LENGTH], claveArchivo[MAX_PASSWORD_LENGTH];

    if (archivo == NULL) {
        printf("Error al abrir el archivo de usuarios.\n");
        return 0;
    }

    while (fgets(linea, sizeof(linea), archivo)) {
        sscanf(linea, "%s %s", usuarioArchivo, claveArchivo);
        if (strcmp(usuario, usuarioArchivo) == 0 && strcmp(clave, claveArchivo) == 0) {
            fclose(archivo);
            return 1;
        }
    }

    fclose(archivo);
    return 0;
}

void obtenerFechaActual(char *fecha, int size) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    snprintf(fecha, size, "%04d/%02d/%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
}

void registrarBitacora(const char *usuario, const char *accion) {
    FILE *bitacora = fopen("bitacora.txt", "a");
    char fecha[20];

    if (bitacora == NULL) {
        printf("Error al abrir el archivo de bitácora.\n");
        return;
    }

    obtenerFechaActual(fecha, sizeof(fecha));
    fprintf(bitacora, "%s: %s - %s\n", fecha, usuario, accion);
    fclose(bitacora);
}



