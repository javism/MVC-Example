/*
 * Student.cpp
 *
 *  Created on: 24/11/2014
 *      Author: javi
 */

#include <string>

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
}

const string& Student::getNollNo() const {
	return nollNo;
}

void Student::setNollNo(const string& nollNo) {
	this->nollNo = nollNo;
}

} /* namespace ejemplo_mvc */

