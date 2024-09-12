#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
class palindrome
{
  public:
  char stack[50],tempstr[50];
  int top=-1;
  void push(char x)
  {
   if(top==49)
   {
   	cout<<"String is Full\n";
   }
   else
   {
       top++;
   	stack[top]=x;
   }
  }
  char pop()
  {
   if(top==-1)
   {
   	cout<<"String Is Not Available !!!\n";
       
   }
   else
   {
   	return stack[top--];
   }
   return 0;
  }
  void display()
  {
   if(top==-1)
   {
   	cout<<"String is Not Available\n";
   }
   else{
   for(int i=0;i<'\0';i++)
   {
   	cout<<tempstr[i];
   }
   }
  }

};
int main()
{
palindrome obj;
char str[50];
int count=0,i;
cout<<"Enter string : ";
cin.getline(str,50);
int size=strlen(str);
for(int i=0;i<size;i++)
   {
     str[i]=tolower(str[i]);
     if(str[i]==' '||ispunct(str[i]))
     {
     
     }
     else
     {
      obj.push(str[i]);
      obj.tempstr[count]=str[i];
      count++;
     }
   }
  obj.tempstr[count]='\0';
  obj.display();
  int flag=1;
   for(i=0;i<count;i++)
   {
     if(obj.pop()==obj.tempstr[i])
     {
         
     }
     else
     {
       flag=0;
       break;
     }
   }
   if(flag==1)
   {
       cout<<"String is Palindrome";
   }
   else
   {
       cout<<"string is not palindrome";
   }

return 0;
}
