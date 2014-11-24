/*
 * StudentView.cpp
 *
 *  Created on: 24/11/2014
 *      Author: javi
 */

#include <string>
#include <iostream>

#include "StudentView.h"

using namespace std;

namespace ejemplo_mvc {

StudentView::StudentView() {
	// TODO Auto-generated constructor stub

}

StudentView::~StudentView() {
	// TODO Auto-generated destructor stub
}

/* Podríamos pasarle un tipo Student directamente */

void StudentView::printStudentDetails(string studentName, string studentRollNo) {
	cout << "Student:" << endl;
	cout << "Name: " << studentName << endl;
	cout << "Roll No: " << studentRollNo << endl;

}

} /* namespace ejemplo_mvc */
