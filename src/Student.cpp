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

/*
 * TODO: Arreglar comprobación existencia. Al no poder usar std::find con std::function la solución no es directa *
 */
void Student::connect(const Listener & listener) {
#if 0
	//auto iter = std::find(listeners_.begin(), listeners_.end(), listener);
	std::list<Listener>::iterator iter = std::find(listeners_.begin(), listeners_.end(), listener);
	if (iter == listener)
		throw std::runtime_error("Double connection");
#endif
	listeners_.push_back(listener);
}


/*
 * TODO: Arreglar. Al no poder usar std::find con std::function la solución no es directa *
 */
void Student::disconnect(const Listener & listener) {
	// http://en.cppreference.com/w/cpp/algorithm/find
#if 0
    auto iter = std::find(listeners_.begin(), listeners_.end(), listener);

	if (iter == listeners_.end())
		throw std::runtime_error("Listener not connected");
	listeners_.erase(listener);
	listeners_.remove(listener);
#endif

}

void Student::notify() const {
  for (const auto& listener : listeners_)
    listener(*this);
}

} /* namespace ejemplo_mvc */

