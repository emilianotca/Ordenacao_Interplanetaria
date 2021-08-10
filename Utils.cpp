//
// Created by emilianotca on 10-Aug-21.
//

#include "Utils.h"

void Particao(Person* A, int Esq, int Dir, int* i, int* j, bool name)
{
    Person x, w;
    *i = Esq;
    *j = Dir;

    x = A[(*i + *j)/2]; /* Obtém o pivô x */

    if(name) // Considerar o campo 'nome' do tipo 'Person' para ordenação
    {
        do {
            while(A[*i].get_name() < x.get_name())
            {
                (*i)++;
            }
            while(A[*j].get_name() > x.get_name())
            {
                (*j)--;
            }

            if(*i <= *j)
            {
                w = A[*i];
                A[*i] = A[*j];
                A[*j] = w;
                (*i)++;
                (*j)--;
            }
        }while(*i <= *j); /* Partição */
    }
    else // Considerar o campo 'conscience' do tipo 'Person' para ordenação
    {
        do {
            while(A[*i].get_conscience() < x.get_conscience()) {(*i)++;}
            while(A[*j].get_conscience() > x.get_conscience()) {(*j)--;}

            if(*i <= *j)
            {
                w = A[*i];
                A[*i] = A[*j];
                A[*j] = w;
                (*i)++;
                (*j)--;
            }
        }while(*i <= *j); /* Partição */
    }
}

void Ordena(Person *A, int Esq, int Dir, bool name)
{
    int i, j;

    Particao(A, Esq, Dir, &i, &j, name);

    if(Esq < j)
    {
        Ordena(A, Esq, j, name);
    } /* Ordena */
    if(i < Dir)
    {
        Ordena(A, i, Dir, name);
    } /* Ordena */
}

void Quicksort(Person* A,int vector_size, bool name)
{
    int temp = vector_size - 1;

    Ordena(A, 0, temp, name);
}