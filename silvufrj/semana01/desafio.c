/* Inmplementar o pseudo-codigo a seguir
Algoritimo: resolver a equacao de primeiro grau ax+b=0
Entrada: Coeficientes reais a e b da equacao ax + b = 0
Saida: resultado da equacao (valor de x)
Inicio:
    1- Obter coeficientes da equacao
    2- Verificar se o coeficente 'a' eh valido. Se nao for, avisar e terminar o programa.
    3- Calcular o valor de x
    4- Exibir valor de x na tela
Fim.

*/

#include <stdio.h>

int main (void) {
//Dicionario de dados
    int a, b, res;

//Coleta de dados do usuario
    printf("Este programa resolve equacoes do tipo ax + b = 0\n");
    printf("Entre os coeficientes 'a' e 'b', separados por espaços: \n");
    scanf("%d %d", &a, &b);

// Verificando o coeficiente a e calculando x
    if (a == 0) {
        printf("Coeficiente 'a' eh invalido. Entre um numero diferente de 0.\n");
        return 0;
    } else {
        res = (-b)/a;
        printf("A equacao %dx + %d = 0 tem como resultado\n", a, b);
        printf("x = %d\n", res);
        return 0;
    }

}
