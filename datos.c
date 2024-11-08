#include <stdio.h>
#include "formula.h"

void mostrarOpciones() {
    printf("\nSeleccione una figura geométrica:\n");
    printf("Figuras 3D:\n");
    printf("1. Cubo\n2. Cuboide\n3. Cilindro\n4. Esfera\n5. Cono\n");
    printf("Figuras 2D:\n");
    printf("6. Triángulo\n7. Paralelogramo\n8. Cuadrado\n9. Rectángulo\n10. Rombo\n11. Trapecio\n12. Círculo\n13. Polígono Regular\n");
}

int solicitarFigura() {
    int figura;
    scanf("%d", &figura);
    return figura;
}

void mostrarResultadosFiguras(float superficie, float volumen) {
    printf("\nResultados:\n");
    printf("Superficie: %.2f\n", superficie);
    printf("Volumen: %.2f\n", volumen);
    printf("\n");
}

void mostrarResultadosFiguras2D(float area, float perimetro) {
    printf("\nResultados:\n");
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);
    printf("\n");
}
