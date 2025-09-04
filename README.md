# Simulador de Movimento de Peças de Xadrez em C
## 📖 Sobre o Projeto
Este projeto foi desenvolvido como parte da disciplina de Introdução à Programação de Computadores do curso de Análise e Desenvolvimento de Sistemas. O objetivo é aplicar e demonstrar o entendimento de estruturas de repetição e recursividade na linguagem C, simulando os movimentos básicos de diferentes peças de um jogo de xadrez.

O cenário proposto foi o desenvolvimento de um jogo para a empresa fictícia "MateCheck", onde os movimentos das peças são controlados por código, como uma forma de ensinar programação de maneira prática e interativa.

## ✨ Funcionalidades
O programa xadrez.c simula e imprime no console os seguintes movimentos:

Torre: Move-se 5 casas em linha reta (para a direita), implementado com recursividade.

Rainha: Move-se 8 casas em linha reta (para a esquerda), implementado com recursividade.

Bispo: Move-se 5 casas na diagonal, implementado com recursividade.

Cavalo: Realiza o movimento em "L" (2 casas para cima e 1 para a direita), implementado com um loop complexo.

## 💡 Conceitos Aplicados
Este projeto foi uma oportunidade para praticar conceitos fundamentais e avançados de controle de fluxo em C, incluindo:

Estruturas de Repetição (Loops):

for

while

do-while

Loops Aninhados: Utilizados para resolver problemas com múltiplas camadas de iteração.

Loops Complexos: Implementação de for com múltiplas variáveis e condições.

Recursividade: Criação de funções que chamam a si mesmas para resolver problemas de forma repetitiva, com a definição de um "caso-base" para garantir o término da execução.

Estruturação de Código em C: Uso de múltiplas funções, a função main(), e a biblioteca padrão stdio.h para entrada e saída de dados.

## Saída Esperada
Ao executar o programa, a saída no console deverá ser a seguinte:

```Movimento da Torre
Direita
Direita
Direita
Direita
Direita

Movimento da Rainha
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Bispo
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento do Cavalo (2 casas para cima, 1 para a direita)
Cima
Cima
Direita