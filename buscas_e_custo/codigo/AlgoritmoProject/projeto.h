#pragma once
#include <stdio.h>
#include <stdlib.h>
// criação da estutura Nó
struct Node {
	int num;
	int pos;
	struct Node *prox;
};
typedef struct Node node;

// declaração das funções. Com finalidade de poder ser utilizada antes de criada.
void inicia(node *LISTA);
node *criaNo();
int vazia(node *LISTA);
void insereFim(node *LISTA, node *fim, int num);
node *binario(node *inicio, node *fim, int valor);
node *ingenua(node *inicio, node *fim, int valor);
void bubbleSort(int arr[], int n);
void swap(int *xp, int *yp);

// função que instancia um dado tipo nó
void inicia(node *LISTA)
{
	LISTA->prox = NULL;
	LISTA->pos = 0;
}

// função que esvazia a variavel tipo nó
int vazia(node *LISTA)
{
	if (LISTA->prox == NULL)
		return 1;
	else
		return 0;
}

// insere no final da lista, sempre fazendo o elemento inserido apontar para vazio
void insereFim(node *LISTA, node *fim, int num)
{
	node *novo = (node *)malloc(sizeof(node));
	if (!novo) {
		printf("Sem memoria disponivel!\n");
		exit(1);
	}
	novo->num = num; novo->pos = LISTA->pos + 1;
	novo->prox = NULL;

	if (vazia(LISTA)) {
		LISTA->prox = novo;
		LISTA->pos = LISTA->pos + 1;
	}
	else {
		node *tmp = LISTA->prox;
		LISTA->pos = LISTA->pos + 1;
		while (tmp->prox != NULL)
			tmp = tmp->prox;

		tmp->prox = novo;
	}
	fim->num = novo->num;
	fim->pos = novo->pos;
}

// inicio da função busca binaria
node *binario(node *inicio, node *fim, int valor) {
	int tamanho = fim->pos;
	int contador = 0;
	node *meio = inicio;
	inicio = inicio->prox;
	for (int i = 0; i < tamanho / 2; i++) {
		meio = meio->prox;
	}
	// pergunta se o primeiro ou o ultimo elemento é o elemento a ser buscado
	if (inicio->num == valor) {
		contador++;
		printf("\nContador:%d", contador);
		printf("Achou");
		return inicio;
	}
	if (fim->num == valor) {
		contador++;
		printf("\nContador:%d", contador);
		printf("Achou");
		return fim;
	}
	while (inicio->pos != meio->pos && fim->pos != meio->pos) {
		contador++;
		printf("\nContador:%d", contador);
		printf("\nInicio:%d", inicio->pos);
		printf("Meio:%d", meio->pos);
		printf("Fim:%d", fim->pos);
		if (meio->num == valor) {
			printf("Achou");
			return meio;
		}
		else if (valor < meio->num) {
			fim = meio;
			meio = inicio;
			for (int i = inicio->pos; i < fim->pos / 2; i++) {
				meio = meio->prox;
			}
		}
		else {
			inicio = meio;
			for (int i = 0; i < (fim->pos - inicio->pos) / 2; i++) {
				meio = meio->prox;
			}

		}


	}

	node *ptr = nullptr;

	return ptr;
}
// busca linear simples
node *ingenua(node *inicio, node *fim, int valor) {
	int contador = 0;
	inicio = inicio->prox;


	while (inicio != NULL) {
		printf("inicio:%d", inicio->num);
		if (inicio->num == valor) {
			printf("Achou");
			return inicio;
		}
		else {
			inicio = inicio->prox;

		}
	}

	node *ptr = nullptr;

	return ptr;
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Bubble sort para ordenar o vetor
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)


		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}
