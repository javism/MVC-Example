/*
 * StudentController.cpp
 *
 *  Created on: 24/11/2014
 *      Author: javi
 */

#include <string>

#include "StudentController.h"

using namespace std;

namespace ejemplo_mvc {

StudentController::StudentController(Student model, StudentView view) {
	// TODO Auto-generated constructor stub
	this->model = model;
	this->view = view;

}

StudentController::~StudentController() {
	// TODO Auto-generated destructor stub
}

void StudentController::setStudentName(string name) {
	model.setName(name);
}

string StudentController::getStudentName() {
	return model.getName();
}

void StudentController::setStudentRollNo(string r) {
	model.setNollNo(r);
}

string StudentController::getStudentRollNo() {
	return model.getNollNo();
}

void StudentController::updateView() {
	view.printStudentDetails(model.getName(), model.getNollNo());
}

} /* namespace ejemplo_mvc */

