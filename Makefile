# Definicion de variables
CC = gcc                # Compilador
CFLAGS = -Wall -g       # Opciones de compilacion
ASMFLAGS = -S           # Opcion para generar codigo ensamblador
TARGET = program        # Nombre del ejecutable final

# Archivos fuente y encabezado
SRC = main.c calculos.c datos.c
OBJT = $(SRC:.c=.o)      # Archivos objeto (.o) generados a partir de los .c
ASMB = $(SRC:.c=.s)      # Archivos ensamblador (.s) generados a partir de los .c

# Regla por defecto: compilar el ejecutable
all: $(TARGET)

# Compilar y enlazar el ejecutable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Regla para generar archivos objeto (.o) y ensamblador (.s) de cada archivo fuente
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@   # Compilar a .o
	$(CC) $(ASMFLAGS) $< -o $(@:.o=.s) # Generar .s a partir del mismo archivo .c

# Regla para verificar dependencias de los encabezados
-include $(SRC:.c=.d)

# Generacion de archivos de dependencia (.d) para encabezados
%.d: %.c
	$(CC) -MM $< > $@               # Crear el archivo de dependencias .d

# Limpiar archivos compilados
clean:
	rm -f $(OBJ) $(ASM) $(TARGET) $(SRC:.c=.d)

# Limpiar todos los archivos generados
mrproper: clean
	rm -f $(TARGET)
