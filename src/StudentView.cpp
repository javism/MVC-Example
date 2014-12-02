/*
 * StudentView.cpp
 *
 *  Created on: 24/11/2014
 *      Author: javi
 */

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

void StudentView::printStudentDetails(Student s) {
	cout << "Student:" << endl;
	cout << "Name: " << s.getName() << endl;
	cout << "Roll No: " << s.getName() << endl;

}

} /* namespace ejemplo_mvc */
