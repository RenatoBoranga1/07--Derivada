#include <iostream>

void mostrarPolinomio(float p[6], int tam){
    int grau = tam - 1;
    int i;
    for (i=0; i<tam; i++){
        printf("%.2fx^%d ", p[i], grau);
        grau--;
    }
}

int main()
{
    float pol[6];
    int i;

    for(i=0; i<6; i++){
        printf("");
        scanf("%f", &pol[i]);
    }

    float d1[5];
    int grau1 = 5, p = 5;

    for (i=0; i < grau1; i++){
        d1[i] = pol[i] * p;
        p--;
    }
    
    mostrarPolinomio(d1,4);
    printf("");
   
}
