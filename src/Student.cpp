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

#include "Student.h"

using namespace std;

namespace ejemplo_mvc {

Student::Student() {
	// TODO Auto-generated constructor stub

}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

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

void Student::connect(Listener listener) {
	if (listeners_.find(listener) != listeners_.end())
	  throw std::runtime_error("Double connection");
	listeners_.push_back(listener);
}

void Student::disconnect(Listener listener) {
	auto iter = listeners_.find(listener);
	if (iter == listeners_.end())
		throw std::runtime_error("Listener not connected");
	listeners_.erase(listener);
}

void Student::notify() const {
  for (const auto& listener : listeners_)
    listener(*this);
}

} /* namespace ejemplo_mvc */

