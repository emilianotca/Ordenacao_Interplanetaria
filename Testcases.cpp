//
// Created by emilianotca on 10-Aug-21.
//

#include "Testcases.h"
#include <cassert>

#include "Person.h"

void test_person()
{
    auto* new_person_0 = new Person(); // Default constructor
    auto* new_person_1 = new Person("Charles Xavier", 10101010); // Two args constructor

    // Testing default person
    assert(new_person_0->get_name() == "New Person");
    assert(new_person_0->get_conscience() == 00000000);

    new_person_0->set_name("Lionel Messi");
    new_person_0->set_conscience(10011010);

    assert(new_person_0->get_name() == "Lionel Messi");
    assert(new_person_0->get_conscience() == 10011010);
}