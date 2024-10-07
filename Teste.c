#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para verificar se o número pertence à sequência de Fibonacci
/*

    int a = 0, b = 1, c = 0;

    if (n == 0 || n == 1) {
        return 1;
    }

    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (pertence_fibonacci(numero)) {
        printf("O número %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}
*/

/*
int main() {
    char texto[100];
    int count_a_minuscula = 0;
    int count_a_maiuscula = 0;
    int i;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    for (i = 0; i < strlen(texto); i++) {
        if (texto[i] == 'a') {
            count_a_minuscula++;
        } else if (texto[i] == 'A') {
            count_a_maiuscula++;
        }
    }

    if (count_a_minuscula > 0 || count_a_maiuscula > 0) {
        printf("A letra 'a' aparece %d vez(es) na string.\n", count_a_minuscula);
        printf("A letra 'A' aparece %d vez(es) na string.\n", count_a_maiuscula);
    } else {
        printf("A letra 'a' não aparece na string.\n");
    }

    return 0;
}
*/


/*
int main() {
    int INDICE = 12, SOMA = 0, K = 1;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("%d\n", SOMA);

    return 0;
}
*/
/*
a) 9
b) 128
c) 49
d) 100
e) 13
f) 20
*/


/*
Primeiro, eu rotulo os interruptores como A, B e C, e as lâmpadas como 1, 2 e 3.
Eu ligo o interruptor A e deixo ligado por 5 a 10 minutos.
Depois desse tempo, eu desligo o interruptor A e ligo o interruptor B.
O interruptor C permanece desligado durante todo esse tempo.
Agora, vou até a sala onde estão as lâmpadas e observo o que encontrei:
Se eu vejo uma lâmpada acesa, sei que ela é controlada pelo interruptor B (pois eu a liguei por último).
Se vejo uma lâmpada apagada, mas quente, essa é a que estava conectada ao interruptor A (ela estava ligada por um tempo e ainda mantém calor).
Se encontro uma lâmpada apagada e fria, essa é a que está conectada ao interruptor C (que permaneceu desligado).
Se, após a primeira ida, ainda não tiver certeza, volto para os interruptores.
Desligo o interruptor B e ligo o interruptor C.
Espero mais alguns minutos.
Novamente, vou até a sala e observo:
Agora, se a lâmpada que estiver acesa, ela é controlada pelo interruptor C.
A lâmpada que estiver apagada e quente é a que estava conectada ao interruptor B (que estava ligado na primeira ida).
E a lâmpada que estiver apagada e fria é a que está conectada ao interruptor A.
*/
