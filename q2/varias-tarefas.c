#include <stdio.h>

void tarefaA() {
    printf("Tarefa A: Esta parte depende da primeira parte de D\n");

    printf("Tarefa A: Esta parte é independente\n");
}

void tarefaB() {
    printf("Tarefa B: eu sou independente\n");

    printf("Tarefa B: dependo da segunda parte de C!\n");

    printf("Tarefa B: Eu só posso aparecer depois que D terminar\n");
}

void tarefaC() {
    printf("Tarefa C: Esta parte é independente\n");

    printf("Tarefa C: Esta parte depende da primeira parte de A\n");
}

void tarefaD() {
    printf("Tarefa D: Esta parte depende da primeira parte de C\n");

    printf("Tarefa D: Eu só posso aparecer depois do fim de A.\n");
}

int main() {
    /* TODO: criar threads aqui */
    /* TODO: criar semáforos/mutexes aqui */
    /* TODO: esperar threads aqui */

    return 0;
}
