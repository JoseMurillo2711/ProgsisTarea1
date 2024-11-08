#include "formula.h"
#include <math.h>

#define PI 3.14159265358979323846


float superficieCubo(float valor){
   return 6*pow(valor, 2);
}

float superficieEsfera(float valor){
   return 4*PI*pow(valor,2);
}

float superficieCuboide(float a, float b, float c){
   return 2*((a*b)+(b*c)+(a*c));
}

float superficieCilindro(float valor1, float valor2){
   return 2*PI*valor1*(valor2 + valor1);
}

float superficieCono(float valor1, float valor2){
   return PI*valor1*(valor1 + sqrt(pow(valor1,2)+pow(valor2,2)));
}

// Volumenes
float volumenCubo(float valor) {
    return pow(valor, 3);
}


float volumenEsfera(float valor) {
    return (4.0/3.0) * PI * pow(valor, 3);
}


float volumenCuboide(float a, float b, float c) {
    return a * b * c;
}


float volumenCilindro(float valor1, float valor2) {
    return PI * pow(valor1, 2) * valor2;
}

float volumenCono(float valor1, float valor2) {
    return (1.0/3.0) * PI * pow(valor1, 2) * valor2;
}

//figuras 2d

float areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

float perimetroTriangulo(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}

float areaParalelogramo(float base, float altura) {
    return base * altura;
}

float perimetroParalelogramo(float base, float lado) {
    return 2 * (base + lado);
}

float areaCuadrado(float lado) {
    return lado * lado;
}

float perimetroCuadrado(float lado) {
    return 4 * lado;
}

float areaRectangulo(float base, float altura) {
    return base * altura;
}

float perimetroRectangulo(float base, float altura) {
    return 2 * (base + altura);
}

float areaRombo(float diagonal1, float diagonal2) {
    return (diagonal1 * diagonal2) / 2;
}

float perimetroRombo(float lado) {
    return 4 * lado;
}

float areaTrapecio(float baseMayor, float baseMenor, float altura) {
    return ((baseMayor + baseMenor) * altura) / 2;
}

float perimetroTrapecio(float lado1, float lado2, float baseMayor, float baseMenor) {
    return lado1 + lado2 + baseMayor + baseMenor;
}

float areaCirculo(float radio) {
    return PI * radio * radio;
}

float perimetroCirculo(float radio) {
    return 2 * PI * radio;
}

float areaPoligonoRegular(float lado, int numeroLados, float apotema) {
    return (perimetroPoligonoRegular(lado, numeroLados) * apotema) / 2;
}

float perimetroPoligonoRegular(float lado, int numeroLados) {
    return lado * numeroLados;
}
