#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char operator; // variável que recebe o operador inserido pelo usuário
    double num1, num2; // variáveis que recebem os dois números inseridos pelo usuário
    wprintf(L"\nUniversidade La Salle | Tecnólogo em Análise e Desenvolvimento de Sistemas");
    wprintf(L"\nAluna: Maria Eduarda Kossatz Leal | Matrícula: 202220864 ");
    while (1) {//enquanto o paramentro do loop é (1), verdadeiro, o programa será executado
        wprintf(L"\nqual operacão você deseja realizar? (+,-,*,/,r,^), para sair do programa aperte X:");
        fflush(stdin);
        scanf("%c", &operator);
        if (operator == 'x') // se o operador inserido pelo usuário é 'x',  o programa é encerrado
            exit(0);
        wprintf(L"\ninsira o primeiro número:");
        fflush(stdin);
        scanf("%lf", &num1);
        if (operator != 'r') {
            wprintf(L"insira o segundo número:");
            scanf("%lf", &num2);
        }
        switch (operator) { //o parametro do switch é os diferentes operadores
            //adição
            case '+':
                printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
                break;
                //subtração
            case '-':
                printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
                break;
                //multiplicação
            case '*':
                printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
                break;
                //divisão
            case '/':
                if (num2 == 0) {
                    wprintf(L"\nnão é possível inserir um divisor igual a zero");
                } else {
                    printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                }
                break;
                //potenciação
            case '^':
                printf("\n%.2lf ^ %.2lf = %.2lf\n", num1, num2, pow(num1, num2));
                break;
                //raiz quadrada
            case 'r':
                wprintf(L"\na raiz quadrada de %lf é: %.2lf\n", num1, sqrt(num1));
                break;
                //se o caracter inserido pelo usuário não for compatível com nenhum operador
            default:
                wprintf(L"erro! operador inválido");
        }
    }
}