#include <stdio.h>

int main() {
    char operador;
    double numero1, numero2, resultado;

    // Solicita ao usuário que insira a operação desejada
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operador);

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);

    // Realiza a operação e exibe o resultado
    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                printf("Erro: Divisao por zero nao permitida.\n");
                return 1;  // Saída com erro
            }
            break;
        default:
            printf("Operacao invalida. Por favor, use +, -, *, ou /.\n");
            return 1;  // Saída com erro
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;  // Saída bem-sucedida
}
