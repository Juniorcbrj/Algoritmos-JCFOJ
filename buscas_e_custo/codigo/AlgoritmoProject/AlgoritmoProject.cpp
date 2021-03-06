#include <stdio.h>
#include <stdlib.h>
#include "projeto.h"


// Incio da função main para testar as funções
int main(void)
{
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	// declaração de vetores testes para gerar a complexidade
	//	int vet1[5] = { 1,2,3,4,5 };
	//	int vet2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int vet3[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	//	int vet4[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int vet5[50] = { 2,1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50 };
	// O vetor existe para armazenar os valores, e depois ele é convertido numa lista de ponteiros.
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	// Inicio da criação usando um laço FOR
	for (int i = 0; i < 50; i++) {
		insereFim(LISTA, fim, vet5[i]);
	}
	// armazenamento da chamada da função ingenua(pode se alterar para binaria tambem)
	//  resposta = binario(LISTA, fim, 50);
	resposta = ingenua(LISTA, fim, 50);
	if (!resposta) {
		printf("Nao encontrou");
	}
	else {
		printf("Achou o elemento na posicao %d", resposta->pos);
	}
	free(LISTA);
	return 0;



}
