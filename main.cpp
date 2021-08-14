#include <iostream>
#include "Testcases.h"
#include "Utils.h"
#include <string>
#include <fstream>

void print_person_array(Person*, int);

int main(int argc, char* argv[])
{
    // Abertura do arquivo de entrada
    std::ifstream input_file (argv[1]);

    // Variáveis de controle
    std::string current_line,
                person_name,
                person_conscience;

    int mode {0},
        lines_to_be_read {0},
        parsing_aux {0},
        current_vector_position {0};

    mode = std::stoi(argv[2]);
    lines_to_be_read = std::stoi(argv[3]);

    // Inicialização do vetor de pessoas(nome + consciência)
    auto* people = new Person[lines_to_be_read];

    if(input_file.is_open())
    {
        // Preenchimento do vetor de pessoas
        while(getline(input_file, current_line))
        {
            // Obtenção dos dados referentes a cada pessoa
            parsing_aux = current_line.find_first_of(' ');
            person_name = current_line.substr(0, parsing_aux);
            person_conscience = current_line.substr(parsing_aux+1, current_line.size());

            // Inserção da pessoa em questão no vetor de pessoas e subsequente atualização do campo atual
            people[current_vector_position].set_name(person_name);
            people[current_vector_position].set_conscience(person_conscience);

            if(current_vector_position == lines_to_be_read-1) // Última posição válida do vetor
            {
                break;
            }
            else
            {
                current_vector_position++;
            }
        }
    }
    else
    {
        return 1;
    }

    switch(mode) // Modo de operação
    {
        case 1: // Configuração 1 - Nome: Quicksort, Dados: Heapsort
            Heapsort(people, lines_to_be_read);
            Quicksort(people, lines_to_be_read);
            break;
        case 2: // Configuração 2 - Nome: Quicksort, Dados: Radixsort
            Radixsort(people, 0, lines_to_be_read);
            Quicksort(people, lines_to_be_read);
            break;
        case 3: // Configuração 3 - Nome: Mergesort, Dados: Heapsort
            Heapsort(people, lines_to_be_read);
            mergeSort(people, 0, lines_to_be_read-1);
        case 4: // Configuração 4 - Nome: Mergesort, Dados: Radixsort
            Radixsort(people, 0, lines_to_be_read);
            mergeSort(people, 0, lines_to_be_read-1);
            break;
        default:
            return 1;
    }

    // Imprimir resultado ordenado no STDOUT
    print_person_array(people, lines_to_be_read);

    delete [] people;
    input_file.close();

    return 0;
}

void print_person_array(Person* people, int size_of_array)
{
    for(auto control {0}; control < size_of_array; control++)
    {
        std::cout << people[control].get_name() << " " << people[control].get_conscience() << std::endl;
    }

}