#include<iostream>
#include<ctype>
#include<cstring>
#include<unordered_set>
#define max 50
using namespace std;
class infix_to_postfix
{
  public:
   char postfix[max];
   char stack[max];
   int top=-1;
   int isFull()
  {
    if(top>=max-1)
    	return 1;
    else
    	return 0;
  }
  
  int isEmpty()
  {
  	if(top==-1)
  		return 1;
  	else
  		return 0;
  }
  
  int pop()
  {
   if(isEmpty())
   	cout<<"STACK IS EMPTY!!!\n";
   else
{
     	return stack[top--];
}
return 0;
 
  }
  void push(char x)
  {
      if(isFull())
      {
          cout<<"STACK IS FULL!!!\n";
      }
      else
      {
    top++;
    stack[top]=x;
      }
  }
   
   
   }

}
int main()
{
 infix_to_postfix obj;
 
 char infix[max],postfix[max];
 int count=0;
 cout<<"Enter Infix Expression : ";
 cin>>infix;
 int len=strlen(infix);
 infix[len+1]='$';
 for(int i=0;i<'$';i++)
 {
  for(char c=a; c<=z ; c++ )
  {
    if(tolower(infix[i]))
    {
    	postfix[count]=infix[i];
    	count++;
    
    }
  
  }
 if(infix[i]==*||+||/||^||-)
 {
  if(isEmpty())
  {
   push(infix(i))
  }
  else if()
 
 }
 
 }
return 0;
}
