/*
 * MVCPatternDemo.cpp
 *
 *  Created on: 24/11/2014
 *      Author: javi
 *      Copyright: GPLv3
 *      Version: 0.1
 *      Description: C++ version of http://www.tutorialspoint.com/design_pattern/mvc_pattern.htm
 */

#include "src/StudentController.h"
#include "src/StudentView.h"
#include "src/Student.h"

using namespace ejemplo_mvc;

Student retriveStudentFromDatabase() {
	Student s;
	s.setName("Pepito");
	s.setNollNo("10");
	return s;
}

int main() {
	// Recover student from database, actually the Controller should do this
	Student model = retriveStudentFromDatabase();

	// Create the view to print student details
	StudentView view = StudentView();

	StudentController controller = StudentController(model);

	// Update data
	controller.setStudentName("Juanito");

	// TODO: Eliminar porque el modelo actualizará la vista automáticamente
	controller.updateView();

	controller.setStudentName("Pepito");

	// TODO: Eliminar porque el modelo actualizará la vista automáticamente
	controller.updateView();

	return 0;
}

