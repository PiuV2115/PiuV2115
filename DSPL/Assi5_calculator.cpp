#include<iostream>
#include<cctype>
#include<cstring>
#include<unordered_set>
#define max 50
using namespace std;
class infix_to_postfix
{
  public:
   char postfix[max];
   char stack[max],temp;
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
        temp=stack[top];
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
  int instack(char y)
  {
   if(y=='+'||'-')
    return 2;
   else if(y=='*'||'/')
    return 4;
   else if(y=='^')
    return 5;
   else if(y=='(')
    return 0;
   else
   {
   
   }
   
 
  }
  int incoming(char z)
  {
  
  if(z=='+'||'-')
    return 1;
   else if(z=='*'||'/')
    return 3;
   else if(z=='^')
    return 6;
   else if(z=='(')
    return 9;
   else
    return 0;
  
  }
   
 };


int main()
{
 infix_to_postfix obj;
 char infix[max],postfix[max];
 int count=0,flag=0;
 cout<<"Enter Infix Expression : ";
 cin.getline(infix,max);
 int len=strlen(infix);
 for(int i=0;i<len;i++)
 {
  /*for(char sam=a; sam<=z ; sam++ )
  {
    if(infix[i])
    {
    	postfix[count]=infix[i];
    	count++;
    
    }
  
  }*/
  flag=0;
 if(infix[i]=='*'||'+'||'/'||'^'||'-'||'('||')')
 {
  flag=1;
  if(obj.isEmpty())
  {
   obj.push(infix[i]);
  
  }
  else if(obj.instack(obj.top)>=obj.incoming(infix[i]))
  {
  obj.pop();
  postfix[count]=obj.temp;
  count++;
  obj.push(obj.incoming(infix[i]));
  }
  else if(obj.instack(obj.top)<obj.incoming(infix[i]))
  {
   obj.push(obj.incoming(infix[i]));
  }
  else
  {
  }
 }
 if(flag==0)
 {
 postfix[count]=infix[i];
 count++;
 }
 }
 int temptop=obj.top;
 for(int i=temptop;i>-1;i--)
 {
obj.pop();
 postfix[count]=obj.temp;
  count++;
 }
//postfix[count]='/0';
cout<<"Postfix Expression is "<<postfix;
return 0;
}
