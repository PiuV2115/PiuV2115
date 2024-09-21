#include<iostream>
#include<cstring>
#include<cctype>
#define max 50
using namespace std;

class palindrome
{
  public:
  struct structure
  {
  char stack[max];
  int top=-1;
  }st;
  
  int isFull()
  {
    if(st.top>=max-1)
    	return 1;
    else
    	return 0;
  }
  
  int isEmpty()
  {
  	if(st.top==-1)
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
     	return st.stack[st.top--];
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
    st.top++;
    st.stack[st.top]=x;
      }
  }
};


int main()
{
palindrome obj;
char str[max],tempstr[max];
int count=0,flag=0,i;
cout<<"Enter string : ";
cin.getline(str,50);

int size=strlen(str);

for(i=0;i<size;i++)
{
     str[i]=tolower(str[i]);
     if(str[i]==' '||ispunct(str[i]))
     {
     
     }
     else
     {
      obj.push(str[i]);
      tempstr[count]=str[i];
     count++;
     }
}
tempstr[count]='\0';
obj.st.stack[(obj.st.top)+1]='\0';
cout<<"Stack Becomes : "<<obj.st.stack;
cout<<"\nTemporary Array Becomes :  "<<tempstr;

for(i=0;i<count;i++)
{
    
    
	if(obj.pop()==tempstr[i])
	{
	
	}
	else
	{
	  flag=1;
	  break;
	}
}

if(flag==1)
{
 cout<<"\nString is NOT PALINDROME";
}
else
{
 cout<<"\nString is PALINDROME";
}

cout<<"\n";

return 0;


}
                                                                                                                                                    
