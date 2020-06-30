% Sistemas Hardware-Software
% Igor Montagner

## Questão 4 (4,0)


O programa *estado_hw* simula um programa que, a cada 1s, pega o estado de um sensor e envia para a saída padrão. O estado do sensor é composto por 5 inteiros. Por vezes o hardware faz leituras inválidas e é necessário reiniciá-lo. Uma leitura é inválida se o primeiro número impresso for 5. Nosso trabalho será criar um programa *detecta_erros.c* que 

* inicia um processo rodando *estado_hw* e captura sua saída
* sempre que o hardware retornar uma leitura inválida nosso programa deverá imprimir "Reiniciando HW!", terminar o programa *estado_hw* e iniciá-lo novamente.
* se nosso programa receber um sinal `SIGUSR1` ele deverá parar instantaneamente e matar o processo que roda *estado_hw*
* e o programa *estado_hw* terminar forçadamente com erro seu programa deverá mostrar o erro ocorrido e terminar também.

Neste exercício você não pode modificar o programa *estado_hw* e deverá usar as chamadas de sistema vistas em sala de aula.



**(1,0)**: *estado_hw* é criado e executado em um processo separado e quando ele termina forçadamente o programa original também termina.

**(1,0)**: ao receber *SIGUSR1* o programa pai mata o processo que roda *estado_hw* e termina com código 2

**(2,0)**: a saída de *estado_hw* é redirecionada para o processo pai. Verifica se a leitura é invalida e se for, mata *estado_hw* e reinicia ele. 


