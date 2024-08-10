#include <iostream>
#define TAMPOLINOMIO 10

int main()
{
    int grau, i, x, tam;
    float pol[TAMPOLINOMIO], r;
    
    printf("Digite o grau do polinomio:");
    scanf("%d", &grau);
    tam = grau;

    if (grau < TAMPOLINOMIO) {
        for (i = grau; i > 0; i--) {
            printf("Digite o valor coeficientes:");
            scanf("%f", &pol[i]);
        }
        for (x = grau; x > 0; x = x--) {
                r = pol[grau] * grau;
                tam = tam-1;
                if (tam >1 ) {
                    printf("%.0fx^%d ", r, tam);
                }
                else if (tam==1) {
                    printf("%.0fx ", r);
                }
                else {
                    printf("%.0f ", r);
                }
                grau--; 
        }
       return 0;
    }
}
