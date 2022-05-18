#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Human {
public:
	Human();
	Human(std::string name,
		std::string status,
		std::tm birthDate
	);
	Human(std::string name,
		std::tm birthDate
	);
	Human::Human()
		:name_("Jane"),
		patronymic_(""),
		surename_("Doe"),
		birthDate_(birthDate);

Human::Human(string name, string surname) {
		name_ = name;
		patronymic_ = "";
		surname_ = surname:

	}

	// setters and getterrs
	void setName(string name) {
		name = name;
	}
	string getName() {
		return name_;
	}
	void setAge(int a) {
		age = a;
	}
	int getAge() {
		return age;
	}
	void setStatus(string b) {
		status = b;
	}
	string getStatus() {
		return status;
	}
	//predicate
	bool isAdoult();
	//operators and traits
	friend bool operator == (Human a, 
							Human b);
	bool olderThen(int age); // проверка свойства 



private:
	string name_;
	int age_;	
	string status_;
	string student_;
	
};

class Student {
public:
	Student();
	Student(Human person,
		double grades,
		string group,
		string direction
	);
	//getters setters
	void setName(string name) {
		person_.setName(name);
	}
	string Student::getName() const {
		return person_.getName();
	}

private:
	Human person_;
	double grades_;
	string group_;
	string direction_

};

int main(){
	setlocale(LC_ALL, "Ru");
	Human vasya("Vasiliy", "Pupcin");
	vasya.
	

	student.setName("Vasia");
	student.setAge(17);
	student.setStatus("Balbes");
	cout << student.getAge() << endl;
	cout << student.getName() << endl;
	cout << student.getStatus() << endl;


		return 0;

}