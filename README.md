# Laboratório Fei Portas Abertas 2017

## Hardware

Esse é o esquema do circuito montado na Protoboard<br>
<img alt="Imagem do Circuito" width=75% src="https://raw.githubusercontent.com/IIoT-Fei/PortasAbertas2017/master/FeiPortasAbertasPrj2017.png">

## Sobre o Software

O código pode ser encontrado em:
https://raw.githubusercontent.com/IIoT-Fei/PortasAbertas2017/master/Piano.ino


## Explicação do Código-Fonte

### Variáveis
Variáveis podem ser vistas como caixinhas que guardam valores. As variáveis
têm nomes e podem ser especializadas para guardarem tipos específicos de
valores. Por exemplo:

`int Botao1 = 2;`

Essa linha cria uma variável chamada `Botao1` que só pode guardar números
inteiros (`int`) e já coloca o valor `2` dentro dela!

No código *Piano.ino* temos 8 variáveis declaradas.

### `void setup()`

Uma função é um bloco de código que possui um nome. Nesse caso, o nome da
função é `setup`. Esse é uma função especial e o Arduino entende ela como a
primeira coisa que deve ser executada. 

Aqui configuramos o nosso Arduino. Essa configuração apenas diz a ele que
temos botões plugados nos pinos e um buzzer como saída.

```C
  pinMode(Buzzer, OUTPUT);
  pinMode(Botao1, INPUT);
  pinMode(Botao2, INPUT);
  pinMode(Botao3, INPUT);
  ```


### `void loop()`

Essa é a principal função do código Arduino. Ela é executada em ciclos muito
rápidos; isto é, sempre que essa função termina, ela começa de novo!
![loop](https://genius.com/images/throbber.gif)

A primeira linha aqui é:
```C
EstadoBotao1 = digitalRead(Botao1);
```



A função `digitalRead` lê o valor de entrada do `Botao1` (que é uma variável
que está guardando o número da porta que este botão está conectado), e joga
dentro da variável `EstadoBotao1`. Se o botão estiver pressionado,
`EstadoBotao1` valerá 1. Caso contrário, 0.


**Agora vem a parte mais legal!**

```C
if(EstadoBotao1==1 && EstadoBotao2==0 && EstadoBotao3==0) {
    tone(Buzzer, 500);
}
```

Esse bloco de código faz duas coisas. A primeira linha faz uma pergunta e a
segunda linha é executada somente se a pergunta foi respondida com **SIM**.

**Como fazer perguntas?**

Fácil!

Nesse código fazemos 3 perguntas e jutamos elas com a palavra **e**. A pergunta é:
> O EstadoBotao1 vale 1; E o EstadoBotao2 vale 0; E o EstadoBotao3 vale 0?

Se isso for verdade, `tone(Buzzer, 500)` é executado! Essa função faz o
*Buzzer* vibrar a 500Hz.

Há outras formas de juntar perguntas. Outra muito comum é através do **OU**,
representado pelos caracteres `||`. Veja aí, está no canto do seu teclado.
Talvez você precise usar o SHIFT.

Exemplos de perguntas:

```C
if(a==1 && b==2 && a==c){
    // Bloco de código
}
```
> *a* é igual a 1; E *b* é igual a 2; E *a* é igual a *c*?




```C
if( (a==1 && b==2) || a==c){
    // Bloco de código
}
```
> (*a* é igual a 1; E *b* é igual a 2); OU *a* é igual a *c*?

Viu? É fácil!

Agora é a sua vez!
