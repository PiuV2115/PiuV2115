#include<iostream>
using namespace std;
class person
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
class docter:public person
{
public:
	string speci,exper,room_no;
	virtual void accept()
	{
		cout<<"# Specialization :";
		cin>>speci;
		cout<<"# Experience. :";
		cin>>exper;
	    cout<<"# Room No. :";
	    cin>>room_no;
	}
};
class nurse:public person
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
class reception:public nurse,public docter
{
public:
 class reception obj;
    int choice;
    string tempname,tempid;
	cout<<"Enter your Choice :\n1.Docter \n2.Nurse";
	cin>>choice;
	switch(choice)
	{
	    case 1: cout<<"Enter Docter Name and ID :";
	    cin>>tempname>>tempid;
	    if(tempname==obj.name&&tempid==obj.id)
	    {
	        cout<<"Docter Is Available !!!";
	        cout<<"\nName\tSpecialization\tRoom no.\n";
	        cout<<obj.name<<"\t"<<obj.speci<<"\t"<<obj.room_no;
	    }
	    break;
	    
	    case 2:
	    cout<<"Enter Nurse Name & ID :";
	    cin>>tempname>>tempid;
	    if(tempname==obj.name&&tempid==obj.id)
	    {
	        cout<<"Nurse is Available ";
	        cout<<"\nName\tDepartment\tWard\n";
	        cout<<obj.name<<"\t"<<obj.dept<<"\t"<<obj.ward;
	    }
	    break;
	    
	    default:cout<<"Invalid Choice :";
	}
};
int main()
{
   int ch;
   cout<<"1.Insert Docter Info \n2. Fill Nurse Info\n3.Reception\n4.Exit\nEnter your choice :";
   cin>>ch;
   switch(ch)
   {
       case 1:
       int size;
       cout<<"Enter No of Docter's info is to be Fill :";
       cin>>size;
       for(int i=0;i<size;i++)
       {
        obj.accept();   
       }
       
   }
    
}
