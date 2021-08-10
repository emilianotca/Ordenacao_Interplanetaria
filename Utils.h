//
// Created by emilianotca on 10-Aug-21.
//

/**
 * Todos os algoritmos de ordenação foram reproduzidos na íntegra da mesma fonte, a ser citada abaixo. O autor deste
 * trabalho prático não detém autoria sobre nenhum dos algoritmos de ordenação nele utilizados, exceto pela adaptação
 * para a linguagem C++11 e os detalhes de implementaçao pertinentes apenas à este trabalho.
 * Fonte: Projeto de Algoritmos com Implementações em Pascal e C
 *        Nívio Ziviani, PhD
 *        Editora Pioneira, 4a Edição
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
 * @param A Vetor de pessoas a ser ordenado
 * @param vec_size Tamanho do vetor
 * @param name Parâmetro booleano para definir alvo da ordenação: se falso, ordena com base na consciência
 */
void Quicksort(Person* A,int vector_size, bool name);

#endif //ORDENACAO_INTERPLANETARIA_UTILS_H
