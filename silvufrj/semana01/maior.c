#include<stdio.h>

int main (void) {

    // Dicionario de dados
    int a, b, c;
    int maior;

    // Obtem os tres numeros
    printf("Digite os tres numeros separados por espaco: \n");
    scanf("%d %d %d", &a, &b, &c);

    // Enontra maior Numero
    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    //Exibe resultado
    printf("O maior numero eh: %d\n", maior);

    
    return 0;
}
