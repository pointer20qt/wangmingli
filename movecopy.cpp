#include "movecopy.h"
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
		cout << "�ж����������Ƿ�ִ��" << endl;
	}

};

class school{
public:
	string schoolName;
	string schollType;
	string address;
	student *stu;
	school(string schoolName, string schoolType, string address){
		this->schoolName = schoolName;
		this->schollType = schollType;
		this->address = address;
		this->stu = new student("111");
		cout << "��ͨ���캯��" << endl;
	}
	school(const school& a) :schollType(a.schollType), address(a.address), schoolName(a.schoolName){
		cout << "������캯��" << endl;
		cout << this->schoolName << "����������" << endl;
		stu = new student(*(a.stu));
	}
	school(school&& t) :schollType(t.schollType), address(t.address), schoolName(t.schoolName){
		stu = t.stu;
		t.stu = NULL;
		cout << "�ƶ����캯��" << endl;
	}
	~school(){
		delete stu;
	}

};

/*int main(){
	school s1("1", "1", "1");
	school s2(move(s1));
	return 0;


}*/