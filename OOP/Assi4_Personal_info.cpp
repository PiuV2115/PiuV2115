#include<iostream>
using namespace std;
class base_person
{
public:
	string name,salary,mobile_no;
	int age,id;
 void accept()
 {
 cout<<"# Name :";
 cin>>name;                                      
 cout<<"# Age:";
 cin>>age;
 cout<<"# Mobile No. :";
 cin>>mobile_no;
 cout<<"# ID :";
 cin>>id;
 cout<<"# Salary :";
 cin>>salary;
 }
};
class derived_docter:public person
{
public:
	string speci,exper,quali,room_no;
	virtual void accept()
	{
		cout<<"# Specialization :";
		cin>>speci;
		cout<<"# Room No. :";
		cin>>exper;
		cout<<"# Qaulification :";
		cin>>qauli;
	}
};
class derived_nurse:public person
{
public:
	string shift,dept,ward;
	virtual void accept()
	{
		cout<<"# shift :";
		cin>>shift;
		cout<<"# Department :";
		cin>>dept;
		cout<<"# Ward :";
		cin>>ward;
	}
};
class derived_reception:public derived_nurse,public derieved_docter
{
public:
	cout<<"Enter your Choice :\n1.Docter \n2.Nurse";
};
