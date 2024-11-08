#include <stdio.h>

void mostrarOpciones();

int solicitarFigura();

void mostrarResultadosFiguras(float superficie, float volumen);

float superficieCubo(float valor);

float superficieEsfera(float valor);

float superficieCuboide(float a, float b, float c);

float superficieCilindro(float valor1, float valor2);

float superficieCono(float valor1, float valor2);

float volumenCubo(float valor);

float volumenEsfera(float valor);

float volumenCuboide(float a, float b, float c);

float volumenCilindro(float valor1, float valor2);

float volumenCono(float valor1, float valor2);

//figuras2d

float areaTriangulo(float base, float altura);

float perimetroTriangulo(float lado1, float lado2, float lado3);

float areaParalelogramo(float base, float altura);

float perimetroParalelogramo(float base, float lado);

float areaCuadrado(float lado);

float perimetroCuadrado(float lado);

float areaRectangulo(float base, float altura);

float perimetroRectangulo(float base, float altura);

float areaRombo(float diagonal1, float diagonal2);

float perimetroRombo(float lado);

float areaTrapecio(float baseMayor, float baseMenor, float altura);

float perimetroTrapecio(float lado1, float lado2, float baseMayor, float baseMenor);

float areaCirculo(float radio);

float perimetroCirculo(float radio);

float areaPoligonoRegular(float lado, int numeroLados, float apotema);

float perimetroPoligonoRegular(float lado, int numeroLados);

void mostrarResultadosFiguras2D(float area, float perimetro);

