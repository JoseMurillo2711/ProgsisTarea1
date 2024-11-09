TARGET = programa

SRCS = main.c auth.c calculos.c datos.c

HEADERS = auth.h formula.h

CC = gcc
CFLAGS = -Wall -Wextra -g

OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

cleanall: clean
	rm -f bitacora.txt
