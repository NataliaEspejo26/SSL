# Ejecuto desde el GitBash, no me corre con Powershell
SHELL := C:/Program\ Files/Git/usr/bin/bash.exe 

# Desde acá se entrega el tp
BIN = TablasDeConversion.exe
TEST_BIN = ConversionTest.exe

OBJ = TablasDeConversion.o Conversion.o
TEST_OBJ = ConversionTest.o Conversion.o

CC = gcc
CFLAGS = -std=c11 -Wall -pedantic-errors -D __DEBUG__ -g3 $(INCS)
# LDFLAGS = -static-libgcc
INCS = -I"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include"
LDLIBS = -L"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib32"
RM = rm -f

# Ejecutable principal
$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

# Ejecutable pruebas
$(TEST_BIN): $(TEST_OBJ)
	$(CC) $(TEST_OBJ) -o $(TEST_BIN) $(CFLAGS) $(LDLIBS)

# Objetos
TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) -c TablasDeConversion.c -o TablasDeConversion.o $(CFLAGS)

Conversion.o: Conversion.c Conversion.h
	$(CC) -c Conversion.c -o Conversion.o $(CFLAGS)

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) -c ConversionTest.c -o ConversionTest.o $(CFLAGS)

.PHONY: clean test run

clean:
	$(RM) *.o
	$(RM) TablasDeConversion.exe TablasDeConversion
	$(RM) ConversionTest.exe ConversionTest

run: $(BIN)
	./$(BIN)

test: $(TEST_BIN)
	./$(TEST_BIN)
