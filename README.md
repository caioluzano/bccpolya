# bccpolya

 Desenvolver uma função em C que calcule uma aproximação da raiz quadrada de um número real, porém sem usar outra função da biblioteca "math.h"

 Através do método de Heron, de aproximar a raiz quadrada de um numero inteiro não-quadrado-perfeito, o mesmo método que é utilizado com frequência por computadores e permite sucessivas aproximações.
 Dada a raiz quadrada de um número n, assumindo a0 como uma aproximação inicial, temos:

 a1 = ((a0 + (n/a0))/2)

 Após a escolha da aproximação inicial a0, podemos construir o algoritmo:

 ak = ((a(k-1) + (n/a(k-1)))/2)

 Devemos impor uma precisão ε = 1 . 10^(–n) e devemos, a cada iteração, fazer o teste da raiz aproximada para checar se satisfaz a precisão ε imposta inicialmente. O erro é dado por E = |(ak)2 - n|. Se o valor absoluto do quadrado da raiz aproximada ak, subtraída de n for menor que a precisão ε, então tome ak como raiz aproximada.

 algoritmo "raiz quadrada"

função md(a : real, b : real) : real
Inicio
	resultado : real;
	resultado = a - b;

	se(resultado < 0)
		resultado = resultado * -1;
	fim-se

	retorne resultado;
Fim

função rzqd(n : real)
Inicio
    precisao : real;
    precisao = 0.01;

    valor1 : real;
    valor 1 = 1.0;

    valor2 : real;
    valor2 = 1.0;

    faça
        valor2 = valor1;
        valor1 = (valor1 + (n/valor1))/2;     
    enquanto (md(valor1, valor2) > precisao);

    retorne valor1;
Fim

Inicio
	real : n;
	leia(n);

	escreva("", rzqd(n));
Fim

Utilizamos o nome de Polya por causa das quatro etapas essenciais para a resolução de problemas: 1ª etapa - Compreender o problema; 2ª etapa - Traçar um plano; 3ª etapa - Colocar o plano em prática; 4ª etapa - Comprovar os resultados. As quais foram executadas para a resolução deste problema.

