//
// Created by emilianotca on 10-Aug-21.
//

/**
 * Os algoritmos de ordenação implementados aqui foram obtidos das fontes identificadas ao fim desta seção de
 * comentários. O autor deste trabalho prático não detém autoria sobre nenhum dos algoritmos de ordenação nele
 * utilizados, exceto pela adaptação para a linguagem C++11 quando necessária e os detalhes de implementaçao pertinentes
 * apenas à este trabalho.
 * Quicksort: Fonte 0
 * Heapsort: Fonte 1
 * Mergesort e Radixsort: Fonte 2
 *
 * Fonte 0: Projeto de Algoritmos com Implementações em Pascal e C
 *          Nívio Ziviani, PhD
 *          Editora Pioneira, 4a Edição
 * Fonte 1: Slides da disciplina DCC205: Estruturas De Dados, da Universidade Federal de Minas Gerais
 *          Professores: Luiz Chaimowicz e Raquel Prates
 * Fonte 2: Website Geeks for GeekS
 *          Acesso em 12-08-2021
 *          Endereço eletrônico: https://www.geeksforgeeks.org/radix-sort/ e https://www.geeksforgeeks.org/merge-sort/
 */

#ifndef ORDENACAO_INTERPLANETARIA_UTILS_H
#define ORDENACAO_INTERPLANETARIA_UTILS_H

#include "Person.h"

/**
 * Função de partição para o Quicksort
 *
 * @param A Vetor de pessoas a ser ordenado
 * @param Esq Índice da esquerda do vetor
 * @param Dir Índice da direita do vetor
 * @param i Auxiliar para ordenação
 * @param j Auxiliar para ordenação
 */
void Particao(Person* A, int Esq, int Dir, int* i, int* j);

/**
 * Funçao de ordenação para o Quicksort
 *
 * @param A Vetor de pessoas a ser ordenado
 * @param Esq Índice da esquerda do vetor
 * @param Dir Índice da direita do vetor
 */
void Ordena(Person *A, int Esq, int Dir);

/**
 * Quicksort
 *
 * @param A Vetor de pessoas a ser rearranjado para Heap
 * @param vec_size Tamanho do vetor
 */
void Quicksort(Person* A,int vector_size);

/**
 * Função 'Refaz' para o Heapsort
 *
 * @param Esq Índice da esquerda
 * @param Dir Índice da direita
 * @param A Vetor de pessoas a ser ordenado
 */
void Refaz(int Esq, int Dir, Person* A);

/**
 * Função 'Constroi' para o Heapsort
 *
 * @param A Vetor de pessoas a ser convertido em Heap
 * @param n Tamanho do vetor
 */
void Constroi(Person* A, int n);

/**
 * Heapsort
 *
 * @param A Vetor de pessoas a ser ordenado
 * @param n Tamanho do vetor
 */
void Heapsort(Person* A, int n);

/**
 *
 * @param array
 * @param left
 * @param mid
 * @param right
 */
void merge(Person* array, int left, int mid, int right);

/**
 *
 * @param array
 * @param begin
 * @param end
 */
void mergeSort(Person* array, int begin, int end);

void exch(Person* A, int subj0, int subj1);

void quicksortB(Person* A, int l, int r, int w);

char digit(const Person& A, int position);

void Radixsort(Person* A, int l, int r);

#endif //ORDENACAO_INTERPLANETARIA_UTILS_H
