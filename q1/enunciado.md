% Sistemas Hardware-Software
% Igor Montagner


## Questão 1 (2,0)

Implementamos uma fila no arquivo `queue.c` e gostaríamos de verificar se nossa implementação está bem feita. Vimos que isso pode ser feito usando o programa `valgrind`. 

### Parte 1

Rode seu programa com `valgrind` e responda:

* Quantos erros de acesso a memória são detectados?

* Para cada erro, escreva abaixo em qual linha ele ocorre e se o erro é de leitura ou escrita.

* O programa libera toda a memória que aloca? Se não, indique onde é feito o `malloc` que não houve `free`.

### Parte 2

Conserte o código de `queue.c`. Você **não** pode modificar a função `main`. Se a pilha ficar em um estado inválido seu programa deverá mostrar uma mensagem de erro e assumir que os elementos não existentes são 0.

Suas modificações deverão ser baseadas nas respostas acima. Para cada problema descrito na parte 1 escreva abaixo o que foi feito para consertá-lo.
