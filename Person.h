/**
 * This header file contains the definition of a person. A person consists of their name and conscience in two separated
 * fields.
 * Created by emilianotca on 10-Aug-21
 */

#ifndef ORDENACAO_INTERPLANETARIA_PERSON_H
#define ORDENACAO_INTERPLANETARIA_PERSON_H

#include <string>

class Person
{
public:
    Person(std::string name = "New Person", int conscience = 00000000); // Construtor padrão
    ~Person(); // Destrutor
    std::string get_name() const; // Função para recuperar o nome de uma pessoa
    int get_conscience() const; // Função para recuperar a consciência de uma pessoa
    void set_name(std::string new_name); // Função para redefinir o nome de uma pessoa
    void set_conscience(int new_conscience); // Função para redefinir a consciência de uma pessoa

private:
    std::string name;
    int conscience;
};

#endif //ORDENACAO_INTERPLANETARIA_PERSON_H
