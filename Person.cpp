//
// Created by emilianotca on 10-Aug-21
//

#include "Person.h"

Person::Person(std::string name,
               int conscience) : name {name},
                                 conscience {conscience}
{}

Person::~Person() = default;

std::string Person::get_name() const
{
    return this->name;
}

int Person::get_conscience() const
{
    return this->conscience;
}

void Person::set_name(std::string new_name)
{
    this->name = new_name;
}

void Person::set_conscience(int new_conscience)
{
    this->conscience = new_conscience;
}