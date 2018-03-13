/*
 * NortheasternU.cpp
 *
 *  Created on: Feb 2, 2018
 *      Author: zhaos
 */
/**
 * UniversityBase base class
 *  1. Derive a NortheasternU class from this UniversityBase class.
 * 	A. Implement a demo() method:
 * 		1. add Employee objects.
 * 		2. add Student objects.
 * 		3. show the state.
 * 		4. demonstrating polymorphism
 * 			a. Employee object IS-A AbstractPersonAPI
 * 			a. Student object IS-A AbstractPersonAPI
 * 		B.
 *  2.
 */

#include "NortheasternU.h"
#include "Student.h"
#include <algorithm>
namespace edu {
namespace neu {
namespace csye6205 {

NortheasternU::NortheasternU() {
	// TODO Auto-generated constructor stub

}
NortheasternU::NortheasternU(int _id, std::string _name) :UniversityBase(_id, _name) {
}
NortheasternU::~NortheasternU() {
	// TODO Auto-generated destructor stub
}

void NortheasternU::sortStudentByAge() {
	std::cout<<"Sort Student By Age" <<std::endl;
	std::sort(students.begin(),students.end(),Student::sortByAge);
	showStudents();
}

void NortheasternU::sortStudentByGpa() {
	std::cout<<"Sort Student By Gpa" <<std::endl;
	std::sort(students.begin(),students.end(),Student::sortByGPA);
	showStudents();
}
void NortheasternU::sortEmployeeByWage() {
	std::cout<<"Sort Employee By Wage" <<std::endl;
	std::sort(employees.begin(),employees.end(),Employee::sortByWage);
	showEmployees();
}
void NortheasternU::demo() {

		NortheasternU obj(1,"NEU");
		std::vector<AbstractSchoolAPI *> schools;
		schools.push_back(&obj);
		UniversityBase *upty = &obj;

		Employee e1("EfirstName1","ElastName1",37,8700);
		Employee e2("EfirstName2","ElastName2",40,10000);
		std::vector<Employee *> employees;
		employees.push_back(&e1);
		employees.push_back(&e2);


		Student s1("Sfirst1","Slast1",18,3.8);
		Student s2("Sfirst2","Slast2",20,3.9);
		Student s3("Sfirst3","Slast3",19,4.0);
		std::vector<Student *> students;
		students.push_back(&s1);
		students.push_back(&s2);
		students.push_back(&s3);

		for (Employee *e_Ptr : employees) {
			upty->addEmployee(e_Ptr);
		}

		for (Student *s_Ptr : students) {
			upty->addStudent(s_Ptr);
		}

		//show
		std::cout<<std::endl << "Before sort" << std::endl;

		for (AbstractSchoolAPI *abs_Ptr : schools) {
			abs_Ptr->show();
		}
		std::cout<<std::endl << "After sort" << std::endl;
		obj.sortStudentByAge();
		obj.sortStudentByGpa();
		obj.sortEmployeeByWage();

}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
