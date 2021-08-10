//
// Created by emilianotca on 10-Aug-21.
//

#include "Testcases.h"
#include <cassert>

#include "Person.h"
#include "Utils.h"

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

    // Testing custom person
    assert(new_person_1->get_name() == "Charles Xavier");
    assert(new_person_1->get_conscience() == 10101010);

    delete new_person_0;
    delete new_person_1;
}

void test_quicksort()
{
    // Test subjects
    Person Marcos {"MARCOS",    01010101};
    Person Chaimowicz {"CHAIMOWICZ", 01011011};
    Person Luiz_0 {"LUIZ", 00001111};
    Person Raquel_0 {"RAQUEL", 10110101};
    Person Luiz_1 {"LUIZ", 11001100};
    Person Meira {"MEIRA", 01111001};
    Person Prates_0 {"PRATES", 01010001};
    Person Chaimo {"CHAIMO", 10101010};
    Person Luiz_2 {"LUIZ", 11010011};
    Person Prates_1 {"PRATES", 11110000};
    Person Manuel {"MANUEL", 01101001};
    Person Luiz_3 {"LUIZ", 00110011};
    Person Raquel_1 {"RAQUEL", 00001111};

    // Person vector
    Person A[] = {Marcos, Chaimowicz, Luiz_0,
                   Raquel_0, Luiz_1, Meira, Prates_0,
                   Chaimo, Luiz_2, Prates_1, Manuel,
                   Luiz_3, Raquel_1};

    Person name_sorted[] = {Marcos, Chaimowicz, Luiz_0,
                            Raquel_0, Luiz_1, Meira, Prates_0,
                            Chaimo, Luiz_2, Prates_1, Manuel,
                            Luiz_3, Raquel_1};

    Person conscience_sorted[] = {Marcos, Chaimowicz, Luiz_0,
                                  Raquel_0, Luiz_1, Meira, Prates_0,
                                  Chaimo, Luiz_2, Prates_1, Manuel,
                                  Luiz_3, Raquel_1};

    assert(A[0].get_name() == "MARCOS");
    assert(A[5].get_name() == "MEIRA");
    assert(A[12].get_name() == "RAQUEL");

    // Sorting by name
    Quicksort(name_sorted, 13, true);

    assert(name_sorted[0].get_name() == "CHAIMO");
    assert(name_sorted[1].get_name() == "CHAIMOWICZ");
    assert(name_sorted[4].get_name() == "LUIZ");
    assert(name_sorted[7].get_name() == "MARCOS");
    assert(name_sorted[10].get_name() == "PRATES");
    assert(name_sorted[12].get_name() == "RAQUEL");

   // Sorting by conscience number

}