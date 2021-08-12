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

void Refaz(int Esq, int Dir, Person* A, bool name)
{
    int i, j;
    Person x;

    i = Esq;
    j = i * 2;
    x = A[i];

    if(name) // Considera o campo 'name' do tipo 'Person' para a ordenação
    {
        while(j <= Dir)
        {
            if(j < Dir)
            {
                if(A[j].get_name() < A[j+1].get_name())
                {
                    j++;
                }
            }
            if(x.get_name() >= A[j].get_name())
            {
                break;
            }

            A[i] = A[j];
            i = j;
            j = i * 2;
        }
        A[i] = x;
    }
    else // Considera o campo 'conscience' do tipo 'Person' para a ordenação
    {
        while(j <= Dir)
        {
            if(j < Dir)
            {
                if(A[j].get_conscience() < A[j+1].get_conscience())
                {
                    j++;
                }
            }
            if(x.get_conscience() >= A[j].get_conscience())
            {
                break;
            }

            A[i] = A[j];
            i = j;
            j = i * 2;
        }
        A[i] = x;
    }
}

void Constroi(Person* A, int n, bool name)
{
    int Esq;

    Esq = n / 2 + 1;

    while(Esq > 0)
    {
        Esq--;
        Refaz(Esq, n, A, name);
    }
}

void Heapsort(Person* A, int n, bool name)
{
    int Esq, Dir;
    int temp = n-1;
    Person x;

    Constroi(A, temp, name);

    Esq = 0;
    Dir = temp;

    while(Dir > 0)
    {
        x = A[0];
        A[0] = A[Dir];
        A[Dir] = x;

        Dir--;

        Refaz(Esq, Dir, A, name);
    }
}