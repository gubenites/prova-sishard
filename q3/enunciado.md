% Sistemas Hardware-Software
% Igor Montagner

## Questão 3 (2,0)

Nesta questão iremos criar um programa **provash** que funcionará como um shell. Ele terá as seguintes funcionalidades:

### Uso básico (1,5)

```
provash> ls
(saída do comando ls aqui)
ls terminated with status 0 #
provash> touch aa.md
touch terminated with status 0 #
provash> este_comando_nao_existe
Not found!
provash> exit
```

Ao digitar um comando ele é executado. Quando esse comando terminar é mostrado seu código de erro na saída. Se ele foi terminado com erro é mostrado o erro. As linhas terminadas em `#` devem ser mostradas pelo *provash*. 

Ao digitar um comando inexistente aparece *Not found!* na tela. Ao digitar `exit` o *provash* termina. 

### Preferência pelo diretório atual (0,5)

Em geral precisamos digitar `./` na frente dos nomes dos nossos programas (pois precisamos indicar que queremos executar o programa que está no diretório atual, não em outro lugar). Essa funcionalidade envolve implementar o seguinte algoritmo. 

1. Usuário entra o nome do programa `prog`.
1. Se `prog` existe na pasta atual, execute-o
1. Senão, execute `prog`

