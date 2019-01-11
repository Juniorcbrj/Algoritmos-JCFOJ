#include "../AlgoritmoProject/projeto.h"
TEST(Testebinario, buscabinariaInicio) {
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	int vet[5] = { 1,2,3,4,5 };
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	for (int i = 0; i < 5; i++) {
		insereFim(LISTA, fim, vet[i]);
	}
	bubbleSort(vet, 5);
	resposta = binario(LISTA, fim, 1);
	EXPECT_EQ(1, resposta->pos);
}

TEST(Testebinario, buscabinariaMeio) {
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	int vet[5] = { 1,2,3,4,5 };
	bubbleSort(vet, 5);
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	for (int i = 0; i < 5; i++) {
		insereFim(LISTA, fim, vet[i]);
	}
	resposta = binario(LISTA, fim, 2);
	EXPECT_EQ(2, resposta->pos);
}

TEST(Testebinario, buscabinariaFim) {
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	int vet[5] = { 1,2,3,4,5 };
	bubbleSort(vet, 5);
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	for (int i = 0; i < 5; i++) {
		insereFim(LISTA, fim, vet[i]);
	}
	resposta = binario(LISTA, fim, 5);
	EXPECT_EQ(5, resposta->pos);
}

TEST(Testebinario, buscabinariaFalha1) {
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	int vet[5] = { 1,2,3,4,5 };
	bubbleSort(vet, 5);
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	for (int i = 0; i < 5; i++) {
		insereFim(LISTA, fim, vet[i]);
	}
	resposta = binario(LISTA, fim, 6);
	EXPECT_EQ(NULL, resposta);
}

TEST(Testebinario, buscabinariaFalha2) {
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	int vet[5] = { 1,2,3,4,5 };
	bubbleSort(vet, 5);
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	for (int i = 0; i < 5; i++) {
		insereFim(LISTA, fim, vet[i]);
	}
	resposta = binario(LISTA, fim, 20);
	EXPECT_EQ(NULL, resposta);
}

TEST(Testeingenua, buscaingenuaInicio) {
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	int vet[5] = { 1,2,3,4,5 };
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	for (int i = 0; i < 5; i++) {
		insereFim(LISTA, fim, vet[i]);
	}
	resposta = ingenua(LISTA, fim, 1);
	EXPECT_EQ(1, resposta->pos);
}

TEST(Testeingenua, buscaingenuaMeio) {
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	int vet[5] = { 1,2,3,4,5 };
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	for (int i = 0; i < 5; i++) {
		insereFim(LISTA, fim, vet[i]);
	}
	resposta = ingenua(LISTA, fim, 2);
	EXPECT_EQ(2, resposta->pos);
}

TEST(Testeingenua, buscaingenuaFim) {
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	int vet[5] = { 1,2,3,4,5 };
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	for (int i = 0; i < 5; i++) {
		insereFim(LISTA, fim, vet[i]);
	}
	resposta = ingenua(LISTA, fim, 5);
	EXPECT_EQ(5, resposta->pos);
}

TEST(Testeingenua, buscaingenuaFalha1) {
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	int vet[5] = { 1,2,3,4,5 };
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	for (int i = 0; i < 5; i++) {
		insereFim(LISTA, fim, vet[i]);
	}
	resposta = ingenua(LISTA, fim, 6);
	EXPECT_EQ(NULL, resposta);
}

TEST(Testeingenua, buscaingenuaFalha2) {
	node *LISTA = (node *)malloc(sizeof(node));
	node *fim = (node *)malloc(sizeof(node));
	int vet[5] = { 1,2,3,4,5 };
	node *resposta = (node *)malloc(sizeof(node));
	inicia(LISTA);
	inicia(fim);
	for (int i = 0; i < 5; i++) {
		insereFim(LISTA, fim, vet[i]);
	}
	resposta = ingenua(LISTA, fim, 20);
	EXPECT_EQ(NULL, resposta);
}
