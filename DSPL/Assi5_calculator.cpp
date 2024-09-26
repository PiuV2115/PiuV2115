#include<iostream>
#include<string>
#define max 50
using namespace std;
 string postfix,infix;
 class stackk
 {
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

// friend bool isoperator(char op);
 //friend int precedance(char y);
 friend string infixtopostfix(string infix);
 }obj;
 
 int precedance(char op)
 {
 	if(op=='+'||op=='-')
 	{
 		return 1;
 	}
 	else if(op=='*'||op=='/')
 	{
 		return 2;
 	}
 	else if(op=='^')
 	{
 		return 3;
 	}
 		return 0;
 }
 
 bool isoperator(char x)
 {
 	return (x=='+'||x=='-'||x=='*'||x=='/');
 }
 
 string infixtopostfix(string infix)
 {
   postfix="";
   for(int i=0;i<infix.length();i++)
   {
   	char c=infix[i];
   	if(isalnum(c))
   	{
   	
 	  	postfix+=c;
 
   	}
   	else if(c=='(')
   	{
   		obj.push(c);
   	}
   	else if(c==')')
   	{
   		while(!obj.isEmpty()&&obj.top=='(')
   		{
   			postfix+=obj.top;
   			obj.pop();
   		}
   		obj.pop();
   	}
   	else if(isoperator(c))
   	{
   		while(!obj.isEmpty()&&precedance(obj.top)>=precedance(c))
   		{
   			postfix+=obj.top;
   			obj.pop();	
   		}
   			obj.push(c);
   	}
   }
 while(!obj.isEmpty())
 {
 	postfix+=obj.top;
 	obj.pop();
 }
 
 		return postfix;
 }
 int main()
 {
 	 cout<<"Enter Infix Expression :";
 	 cin>>infix;
 	 postfix=infixtopostfix(infix);
 	 cout<<"\nPostfix Expression is "<<postfix;
 	 cout<<"\n";
 	 return 0;
 }
 
