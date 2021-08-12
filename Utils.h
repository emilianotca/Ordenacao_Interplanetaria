//
// Created by emilianotca on 10-Aug-21.
//

/**
 * O algoritmo do Quicksort foi reproduzido da fonte 0, ao passo que os outros foram reproduzidos da fonte 1; ambas
 * serão citadas abaixo separadamente. O autor deste trabalho prático não detém autoria sobre nenhum dos algoritmos de
 * ordenação nele utilizados, exceto pela adaptação para a linguagem C++11 quando necessária e os detalhes de
 * implementaçao pertinentes apenas à este trabalho.
 * Fonte 0: Projeto de Algoritmos com Implementações em Pascal e C
 *        Nívio Ziviani, PhD
 *        Editora Pioneira, 4a Edição
 * Fonte 1: Slides da disciplina DCC205: Estruturas De Dados, da Universidade Federal de Minas Gerais
 *          Professores: Luiz Chaimowicz e Raquel Prates
 */

#ifndef ORDENACAO_INTERPLANETARIA_UTILS_H
#define ORDENACAO_INTERPLANETARIA_UTILS_H

#include "Person.h"

/**
 * Função de partiçao para o Quicksort
 *
 * @param A Vetor de pessoas a ser ordenado
 * @param Esq Índice da esquerda do vetor
 * @param Dir Índice da direita do vetor
 * @param i Auxiliar para ordenação
 * @param j Auxiliar para ordenação
 * @param name Parâmetro booleano para definir alvo da ordenação: se falso, ordena com base na consciência
 */
void Particao(Person* A, int Esq, int Dir, int* i, int* j, bool name = false);

/**
 * Funçao de ordenação para o Quicksort
 *
 * @param A Vetor de pessoas a ser ordenado
 * @param Esq Índice da esquerda do vetor
 * @param Dir Índice da direita do vetor
 * @param name Parâmetro booleano para definir alvo da ordenação: se falso, ordena com base na consciência
 */
void Ordena(Person *A, int Esq, int Dir, bool name = false);

/**
 * Quicksort
 *
 * @param A Vetor de pessoas a ser rearranjado para Heap
 * @param vec_size Tamanho do vetor
 * @param name Parâmetro booleano para definir alvo da ordenação: se falso, ordena com base na consciência
 */
void Quicksort(Person* A,int vector_size, bool name = false);

/**
 * Função 'Refaz' para o Heapsort
 *
 * @param Esq Índice da esquerda
 * @param Dir Índice da direita
 * @param A Vetor de pessoas a ser ordenado
 * @param name Parâmetro booleano para definir alvo da ordenação: se falso, ordena com base na consciência
 */
void Refaz(int Esq, int Dir, Person* A, bool name = false);

/**
 * Função 'Constroi' para o Heapsort
 *
 * @param A Vetor de pessoas a ser convertido em Heap
 * @param n Tamanho do vetor
 * @param name Parâmetro booleano para definir alvo da ordenação: se falso, ordena com base na consciência
 */
void Constroi(Person* A, int n, bool name = false);

/**
 * Heapsort
 *
 * @param A Vetor de pessoas a ser ordenado
 * @param n Tamanho do vetor
 * @param name Parâmetro booleano para definir alvo da ordenação: se falso, ordena com base na consciência
 */
void Heapsort(Person* A, int n, bool name = false);

#endif //ORDENACAO_INTERPLANETARIA_UTILS_H
