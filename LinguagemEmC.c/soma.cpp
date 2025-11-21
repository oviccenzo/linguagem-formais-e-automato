#include <cstdio>
int main(){

    int soma, subtracao,a,d,f,r;

    printf("Calcular quatro numero: \n");
    scanf("%d %d %d %d",&a,&d,&f,&r);

    soma = a+d+f+r;
    subtracao = a-d-f-r;

    printf("O total da soma é: %d\n",soma);
    printf("O total da subtração é: %d\n",subtracao);

    return 0;
}
