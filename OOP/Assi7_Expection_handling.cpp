#include<iostream>
using namespce std;
class tele
{
public:
int model_no,size,price;
void accept()
{
int j=1;
cout<<"--Enter Television Details of "<<j<<" Element--\n";
cout<<"# Model no. :";
cin>>model_no;
try
{
  if(model_no>4)
  throw(model_no);
}
catch(int a)
{
cout<<"Model no. should be upto 4 digit only ";
}

cout<<"# Model size (in inches) :";
cin>>size;
try
{
 if(size<12||size>70)
 throw(size);
}
catch(int b)
{
cout<<"Model size should less than 70 & more than 12";
}

cout<<"# Model Price :";
cin>>price;
 try
{
 if(price<0||price>55000)
 throw(size);
}
catch(int c)
{
cout<<"Model price should less than 55000 & should be +ve";
}

j++;
}
};
int main()
{

}
