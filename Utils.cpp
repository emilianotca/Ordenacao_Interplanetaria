//
// Created by emilianotca on 10-Aug-21.
//

#include "Utils.h"

void Particao(Person* A, int Esq, int Dir, int* i, int* j)
{
    Person x, w;
    *i = Esq;
    *j = Dir;

    x = A[(*i + *j)/2]; /* Obtém o pivô x */

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

void Ordena(Person *A, int Esq, int Dir)
{
    int i, j;

    Particao(A, Esq, Dir, &i, &j);

    if(Esq < j)
    {
        Ordena(A, Esq, j);
    } /* Ordena */
    if(i < Dir)
    {
        Ordena(A, i, Dir);
    } /* Ordena */
}

void Quicksort(Person* A,int vector_size)
{
    int temp = vector_size - 1;

    Ordena(A, 0, temp);
}

void Refaz(int Esq, int Dir, Person* A)
{
    int i, j;
    Person x;

    i = Esq;
    j = i * 2;
    x = A[i];

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

void Constroi(Person* A, int n)
{
    int Esq;

    Esq = n / 2 + 1;

    while(Esq > 0)
    {
        Esq--;
        Refaz(Esq, n, A);
    }
}

void Heapsort(Person* A, int n)
{
    int Esq, Dir;
    int temp = n-1;
    Person x;

    Constroi(A, temp);

    Esq = 0;
    Dir = temp;

    while(Dir > 0)
    {
        x = A[0];
        A[0] = A[Dir];
        A[Dir] = x;

        Dir--;

        Refaz(Esq, Dir, A);
    }
}

void merge(Person* array, int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
    auto *leftArray = new Person[subArrayOne],
    *rightArray = new Person[subArrayTwo];

    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne = 0,
    indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;

    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne].get_name() <= rightArray[indexOfSubArrayTwo].get_name()) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}

void mergeSort(Person* array, int const begin, int const end)
{
    if (begin >= end)
        return;

    auto mid = begin + (end - begin) / 2;

    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

void exch(Person* A, int subj0, int subj1)
{
    Person temp = A[subj0];

    // Swapping subj and subj1
    A[subj0] = A[subj1];
    A[subj1] = temp;
}

char digit(const Person& A, int position)
{
    return A.get_conscience().at(position);
}

void quicksortB(Person* A, int l, int r, int w)
{
    int i {l};
    int j {r};

    if(r <= l)
    {
        return;
    }

    while(j != i)
    {
        while(digit(A[i], w) == '0' && (i < j))
        {
            i++;
        }

        while(digit(A[j], w) == '1' && (j > i))
        {
            j--;
        }

        exch(A, i, j);
    }

    if(digit(A[r], w) == 0)
    {
        j++;
    }

    quicksortB(A, l, j-1, w-1);
    quicksortB(A, j, r, w-1);
}

void Radixsort(Person* A, int l, int r)
{
    int con_length = static_cast<int>(A->get_conscience().length()) - 1;

    quicksortB(A, l, r-1, con_length);
}