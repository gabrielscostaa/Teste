#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Fun��o para verificar se o n�mero pertence � sequ�ncia de Fibonacci
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
        printf("O n�mero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O n�mero %d n�o pertence a sequencia de Fibonacci.\n", numero);
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
        printf("A letra 'a' n�o aparece na string.\n");
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
Primeiro, eu rotulo os interruptores como A, B e C, e as l�mpadas como 1, 2 e 3.
Eu ligo o interruptor A e deixo ligado por 5 a 10 minutos.
Depois desse tempo, eu desligo o interruptor A e ligo o interruptor B.
O interruptor C permanece desligado durante todo esse tempo.
Agora, vou at� a sala onde est�o as l�mpadas e observo o que encontrei:
Se eu vejo uma l�mpada acesa, sei que ela � controlada pelo interruptor B (pois eu a liguei por �ltimo).
Se vejo uma l�mpada apagada, mas quente, essa � a que estava conectada ao interruptor A (ela estava ligada por um tempo e ainda mant�m calor).
Se encontro uma l�mpada apagada e fria, essa � a que est� conectada ao interruptor C (que permaneceu desligado).
Se, ap�s a primeira ida, ainda n�o tiver certeza, volto para os interruptores.
Desligo o interruptor B e ligo o interruptor C.
Espero mais alguns minutos.
Novamente, vou at� a sala e observo:
Agora, se a l�mpada que estiver acesa, ela � controlada pelo interruptor C.
A l�mpada que estiver apagada e quente � a que estava conectada ao interruptor B (que estava ligado na primeira ida).
E a l�mpada que estiver apagada e fria � a que est� conectada ao interruptor A.
*/
