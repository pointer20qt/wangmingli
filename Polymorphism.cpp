#include "Polymorphism.h"
#include<iostream>
#include<string>

using namespace std;

class student{
	string name;

public:
	student(string name){
		this->name = name;
	}
	~student(){
	}

};

class school{
private:
	string schoolName;
	string schollType;
	string address;
public:	school(string schoolName, string schoolType, string address){
		this->schoolName = schoolName;
		this->schollType = schollType;
		this->address = address;
		cout << "��ͨ���캯��" << endl;
	}
		school(){
			cout << "��ͨ����" << endl;
		}
	virtual void getschool(){
		cout << "ѧУ��ѧ��" << endl;
	}
	string getschoolName(){
		return schoolName;
	}
	virtual ~school(){
		cout << "��������ѧ" << endl;
	}
};
class highschool :public school{
public:
	student* s1;
	highschool():school("������ѧ", "����", "����"){
		cout << "���еĹ��캯��" << endl;
	}

	virtual void getschool(){
		cout << "�ڸ���У���Ĵ����£�" << getschoolName() << endl;
		s1 = new student("xx");
	}
	virtual ~highschool(){
		cout << "����������" << endl;
		delete s1;
	}
};


void printschool(school* school){
	school->getschool();
	delete school;
}
void printschool(school& school){
	school.getschool();
	delete &school;
}

int main(){
	highschool h1;
	school* a = &h1;
	a->getschool();
	school* s = new school("xxѧУ", "ѧУ", "xx��");
	highschool* hs = new highschool();
	printschool(s);
	printschool(hs);
	highschool s;
	s.getschool();
	
	
	

}
