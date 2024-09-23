#include<iostream>
using namespace std;
class info
{
 public:
 static int count;
 string dob,*name,*dl_no,*address;
 int ht,wt,ip_no,tele_no;
 char bgroup;
 info()
 {
  ht=0;
  wt=0;
  ip_no=0;
  tele_no=0;
  dob='\0';
  bgroup=0;
  name= new string;
  dl_no=new string;
  address=new string;
 }	
 info(int x,int y)
 {
 ht=x;
 wt=y;
 }
 ~info()
 {
 delete name;
 delete dl_no;
 delete address;
 }
 void accept()
 {
 cout<<"Enter Your Personal info:\n";
 cout<<"Name,Date of Birth,Driving licence No.,Address,Height,Weigth,Insurance policy No.,Telephone no.,blood group\n";
 cin>>name>>dob>>dl_no>>address>>ht>>wt>>ip_no>>tele_no>>bgroup;
 }
 static void discnt()
 {
 cout<<"\nNo of Enteries : "<<count;
 }
 void del();
 friend void update();
 inline void display()
 {
 cout<<"Here's Personal info\n";
 cout<<"\n"<<name<<"\t"<<dob<<"\t"<<dl_no<<"\t"<<address<<"\t"<<ht<<"\t"<<wt<<"\t"<<ip_no<<"\t"<<tele_no<<"\t"<<bgroup<<"\n";
 
 }


}
