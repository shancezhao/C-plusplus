/*
 * UniversityBase.h
 *
 *  Created on: Jan 31, 2018
 *      Author: danielgmp
 */

#ifndef UNIVERSITYBASE_H_
#define UNIVERSITYBASE_H_

#include <iostream>
#include <string> 	// std::string
#include <vector>	// std::vector
#include "Employee.h"
#include "Student.h"
#include "AbstractSchoolAPI.h"
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {


class UniversityBase: public AbstractSchoolAPI{
protected:
	int id;				// University ID
	std::string name;	// University Name
	std::vector<Employee *> employees;	// pointers to employee objects
	std::vector<Student *> students;	// pointers to student objects
public:
	UniversityBase();
	UniversityBase(int _id, std::string _name);
	virtual ~UniversityBase();
	int getId() const;
	void setId(int id);
	const std::string& getName() const;
	void setName(const std::string& name);

	/**
	 * Virtual methods:
	 * 1. Must be defined (implemented) in declaring class (AbstractSchoolAPI)
	 * 2. May be (optionally) overridden in deriving class (NortheasternU)
	 */
	virtual void addEmployee(Employee *employeePtr);
	virtual void addStudent(Student *studentPt);
	virtual std::string showStudents();
	virtual std::string showEmployees();

	virtual std::string info();	// return state string
	virtual std::string show();	// show state

	static void demo();

	const std::vector<Employee*>& getEmployees() const {
		return employees;
	}

	void setEmployees(const std::vector<Employee*>& employees) {
		this->employees = employees;
	}

	const std::vector<Student*>& getStudents() const {
		return students;
	}

	void setStudents(const std::vector<Student*>& students) {
		this->students = students;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* UNIVERSITYBASE_H_ */
