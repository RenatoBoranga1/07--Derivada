#include <iostream>

void der(double* vet, int grau);

int main()
{    int grau, i, x;
    scanf("%d", &grau);
    x=grau;
    double vet[x+1];
    for (i=0; i<=grau; i++){
        scanf("%lf", &vet[i]);}
    der(vet, grau);

   for (i=0; i<=grau; i++){
        x--;
        printf("%.0lf", vet[i]);
        if(x!=0 && x!=1){
            printf("x^%d+", (x));}
        else if(x==1){
            printf("x+");}
        else {
            break;}
    }
    return 0;
}
void der(double* vet2, int grau)
{
    int i, x;
    x=grau;
    for (i=0; i<=grau; i++){
        vet2[i]=vet2[i]*x;
        x--;
    }
    return;
}
