#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float peso = 0.0;
    float altura = 0.0;

    printf("Digite seu peso (Kg):\n");
    scanf("%f", &peso);

    printf("Digite sua altura(m):\n");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    printf("\nDe acordo com as informações fornecidas (altura: %.2fm e peso: %.2fKg), você está:\n\n", altura, peso);

    if (imc < 16) {
        printf("Magreza grave\n");
    } else if (imc >= 16 && imc < 17) {
        printf("Magreza moderada\n");
    } else if (imc >= 17 && imc < 18.5) {
        printf("Magreza leve\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Saudável\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Sobrepeso\n");
    } else if (imc >= 30 && imc < 35) {
        printf("Obesidade Grau I\n");
    } else if (imc >= 35 && imc < 40) {
        printf("Obesidade Grau II (severa)\n");
    } else {
        printf("Obesidade Grau III (mórbida)\n");
    }
        
}
