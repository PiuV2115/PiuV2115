#include<iostream>
using namespace std;
class Bank
{
 public:
   
   char name[20];
   long acc_no,dep_amount,current_balance,with_amount;
   void acc_basic()
   {
    cout<<"Enter Account holder name : ";
    cin>>name;
    cout<<"Enter Account no. : ";
    cin>>acc_no;
    cout<<"Enter Current Balance Amount :\t";
    cin>>current_balance;
   }
   void deposit()
   {
    cout<<"Enter amount You want to deposit:\t";
    cin>>dep_amount;
    current_balance+=dep_amount;
    cout<<"\n\nAmount "<<dep_amount<<" is Deposited\nCurrent Balance : " <<current_balance;
   }
   void withdrawal()
   {
   cout<<"Your Current Balance is "<<current_balance;
  
    cout<<"\nEnter Withdrawal amount:\t";
    cin>>with_amount;
    if(current_balance<with_amount)
    {
    cout<<"\nYour Account Balance is NOT ENOUGH For withdrawal !!!\n";
    }
    else
    {
    current_balance-=with_amount;
    cout<<"\n\nWithdrawal of Amount "<<with_amount<<" is Done!!!\nCurrent Balance : "<<current_balance;
    }
   }
   void display()
   {
   
    cout<<"\n\t\tAccount Holder\tAccount no.\tTotal Amount\n\t\t"<<name<<"\t\t"<<acc_no<<"\t\t"<<current_balance;
   }
};
int main()
{
 Bank s1[10];
 int ch,choice,pos,i,flag=0,num,size;
 cout<<"Enter number of Account to Insert Data : ";
 cin>>size;
 do
 {
 cout<<"\n1.Insert Data\n2.Withdraw an Amount\n3.Deposit an Amount\n4.Display Account's Information\n5.Exit\nEnter Your Choices :";
 cin>>ch;
 
 switch(ch)
 {
 case 1:
 for(i=0;i<size;i++)
 {
 s1[i].acc_basic();
 }
 break;
 case 2:
cout<<"Enter Account no. of Account Holder : ";
 cin>>num;
 for(i=0;i<size;i++)
 {
  if(num==s1[i].acc_no)
  {
   pos=i;
   flag=1;
   break;
  }
 }
 if(flag==1)
 {
  s1[pos].withdrawal();
 }
else
{
  cout<<"Account no. "<<num<<" is INVALID";
}
 break;
 case 3:
 cout<<"Enter Account no. of Account Holder : ";
 cin>>num;
 for(i=0;i<size;i++)
 {
  if(num==s1[i].acc_no)
  {
   pos=i;
   flag=1;
   break;
  }
 }
 if(flag==1)
 {
  s1[pos].deposit();
 }
else
{
  cout<<"Account no. "<<num<<" is INVALID";
}
 break;
 case 4:
  cout<<"\t\t______YOUR ACCOUNT DETAILS ARE______\n";
for(i=0;i<size;i++)
{
s1[i].display();
}
 break;
 case 5:
 exit(0);
 break;
 default:cout<<"\nWrong Choice !!!";
 }
 cout<<"\n1.YES\n2.NO\nDo You Want to Continue:";
 cin>>choice;
 }while(choice==1);
 return 0;

}

