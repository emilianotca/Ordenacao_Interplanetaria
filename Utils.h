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
 * Função 'Merge', que faz a união de dois subvetores
 *
 * @param array Vetor de pessoas a ser unido
 * @param left Índice da esquerda do vetor a ser unido
 * @param mid Meio do vetor a ser unido
 * @param right Índice da direita do vetor a ser unido
 */
void merge(Person* array, int left, int mid, int right);

/**
 * Mergesort
 *
 * @param array Vetor de pessoas a ser ordenado
 * @param begin Índice de íncio do vetor a ser ordenado
 * @param end Índice de final do vetor a ser ordenado
 */
void mergeSort(Person* array, int begin, int end);

/**
 * Função 'exch', para fazer o swap de dois elementos de um vetor
 *
 * @param A Vetor a ter seus elementos trocados
 * @param subj0 Índice do elemento a ser trocado
 * @param subj1  Índice do elemento a ser trocado
 */
void exch(Person* A, int subj0, int subj1);

/**
 * Função quicksortB, que faz a ordenação com base nos bits
 *
 * @param A Vetor de pessoas a ser ordenado
 * @param l Índice da esquerda do vetor de pessoas
 * @param r Índice da direita do vetor de pessoas
 * @param w Índice para o controle de bit analisado
 */
void quicksortB(Person* A, int l, int r, int w);

/**
 * Função auxiliar para retornar o bit de interesse de uma determinada palavra binária na forma de uma string
 *
 * @param A Objeto do tipo 'Person' que contém a palavra de interesse
 * @param position Posição do bit de interesse
 * @return Bit de interesse a ser retornado na forma de um char
 */
char digit(const Person& A, int position);

/**
 * Radixsort
 *
 * @param A Vetor de pessoas a ser ordenado
 * @param l Índice da esquerda do vetor
 * @param r Índice da direita do vetor
 */
void Radixsort(Person* A, int l, int r);

#endif //ORDENACAO_INTERPLANETARIA_UTILS_H
