/*
 * Student.cpp
 *
 *  Created on: 24/11/2014
 *      Author: javi
 */

#include <string>
#include <stdexcept>
#include <functional>
#include <vector>
#include <algorithm>

#include "Student.h"

using namespace std;

namespace ejemplo_mvc {


const string& Student::getName() const {
	return this->name;
}

void Student::setName(const string& name) {
	this->name = name;
	notify();
}

const string& Student::getNollNo() const {
	return nollNo;
}

void Student::setNollNo(const string& nollNo) {
	this->nollNo = nollNo;
	notify();
}

Connection Student::connect(Listener l) {
  return listeners_.insert(listeners_.end(), l);
}

// TODO: La conexión no se elimina de la lista.
void Student::disconnect(Connection c) {
	listeners_.erase(c);
}

void Student::notify() const {
  for (const auto& listener : listeners_)
    listener(*this);
}

} /* namespace ejemplo_mvc */

