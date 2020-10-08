//
// Created by santi on 10/7/2020.
//

#include "Persons_V.h"

#include <utility>

void Persons_V::addPerson(Person * person1){ Persons.emplace_back(person1); }

string Persons_V::toString(){
    ostringstream output;
    for(auto & Person : Persons)
        output<<Person->toString() << endl;
    return output.str();
}

int Persons_V::size() { return Persons.size(); }

Persons_V::~Persons_V(){ Persons.clear(); }

vector<Person *> Persons_V::getPersons() {return Persons; }

void Persons_V::setPersons(vector<Person *> persons) { this->Persons = std::move(persons); }

Person* Persons_V::getPerson(int position) {
    return Persons[position];
}