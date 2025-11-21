#include <cstdio>

float f_media(float nota1, float nota2, float nota3){
    return ((nota1 * 2 + nota2 * 3 + nota3 * 4) /9.0);
}

int main(){

    float nota1,nota2,nota3,media;

    printf("digite a nota 1: \n");
    scanf("%f",&nota1);
    
    printf("digite a nota 2: \n");
    scanf("%f",&nota2);
    
    printf("digite a nota 3: \n");
    scanf("%f",&nota3);

    media = f_media(nota1,nota2,nota3);

    printf("imprimir a media das tres prova: %.2f\n",media);
}