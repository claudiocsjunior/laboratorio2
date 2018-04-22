#Makefile for "jogoDoDado" C++ application (Cont.)
#Created by Claudio da Cruz Silva Junior 03/04/2018 main.o :
PROG = executavel
CC = g++
CPPFLAGS = -Wall -pedantic -std=c++11 -I./include
LDFLAGS = -L./lib 
BUILD = ./build/
BIN = ./bin/
OBJS = ./build/main.o ./build/Circulo.o ./build/Cubo.o ./build/Esfera.o ./build/GeometriaEspacial.o ./build/GeometriaPlana.o ./build/Paralelepipedo.o ./build/Piramide.o ./build/Quadrado.o ./build/Retangulo.o ./build/Triangulo.o 
$(PROG):$(OBJS)
	$(CC) $(LDFLAGS) -o $(BIN)$(PROG) $(OBJS)
./build/main.o:
	$(CC) $(CPPFLAGS) -c src/main.cpp -o $(BUILD)main.o
./build/Circulo.o:./include/Circulo.h
	$(CC) $(CPPFLAGS) -c src/Circulo.cpp -o $(BUILD)Circulo.o
./build/Cubo.o:./include/Cubo.h
	$(CC) $(CPPFLAGS) -c src/Cubo.cpp -o $(BUILD)Cubo.o
./build/Esfera.o:./include/Esfera.h
	$(CC) $(CPPFLAGS) -c src/Esfera.cpp -o $(BUILD)Esfera.o
./build/GeometriaEspacial.o:./include/GeometriaEspacial.h
	$(CC) $(CPPFLAGS) -c src/GeometriaEspacial.cpp -o $(BUILD)GeometriaEspacial.o
./build/GeometriaPlana.o:./include/GeometriaPlana.h
	$(CC) $(CPPFLAGS) -c src/GeometriaPlana.cpp -o $(BUILD)GeometriaPlana.o
./build/Paralelepipedo.o:./include/Paralelepipedo.h
	$(CC) $(CPPFLAGS) -c src/Paralelepipedo.cpp -o $(BUILD)Paralelepipedo.o
./build/Piramide.o:./include/Piramide.h
	$(CC) $(CPPFLAGS) -c src/Piramide.cpp -o $(BUILD)Piramide.o
./build/Quadrado.o:./include/Quadrado.h
	$(CC) $(CPPFLAGS) -c src/Quadrado.cpp -o $(BUILD)Quadrado.o
./build/Retangulo.o:./include/Retangulo.h
	$(CC) $(CPPFLAGS) -c src/Retangulo.cpp -o $(BUILD)Retangulo.o	
./build/Triangulo.o:./include/Triangulo.h
	$(CC) $(CPPFLAGS) -c src/Triangulo.cpp -o $(BUILD)Triangulo.o		
clean:
	rm -f core $(BIN)$(PROG) $(OBJS) 