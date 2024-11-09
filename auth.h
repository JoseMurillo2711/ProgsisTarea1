#ifndef AUTH_H
#define AUTH_H

#define MAX_USERNAME_LENGTH 50
#define MAX_PASSWORD_LENGTH 50

int autenticarUsuario(char *usuario, char *clave);
void registrarBitacora(const char *usuario, const char *accion);

#endif // AUTH_H
