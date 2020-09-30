#include <iostream>
#include "Headers.h"
#include <string>


//Person
int Person::getAge()
{
	return personAge;
}
void Person::setAge(int ageValue)
{
	personAge = ageValue;
}

std::string Person::getName()
{
	return name;
}
void Person::setName(std::string nameValue) {
	name = nameValue;
}

//Student
int Student::getStudentAge()
{
	return studentAge;
}
void Student::setStudentAge(int ageValue)
{
	studentAge = ageValue;
}

int Student::getStudentEC() {
	return studentEC;
}
void Student::setStudentEC(int ecValue)
{
	studentEC = ecValue;
}

//Teacher
std::string Teacher::getTeacherSkills()
{
	return skills;
}
void Teacher::setTeacherSkills(std::string skillValue)
{
	skills = skillValue;
}

int Teacher::getTeacherSalary()
{
	return teacherSalary;
}
void Teacher::setTeacherSalary(int salaryValue)
{
	teacherSalary = salaryValue;
}