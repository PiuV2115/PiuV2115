#include<iostream>
using namespace std;
class complex
{   
    public:
    int real,img;
    complex()
    {
        real=0;
        img=0;
    }
    complex(int x,int y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<"Addition : "<<real<<" + "<<img<<"i";
        cout<<"Multiplication : "<<x.real<<" + "<<x.img<<"i";
    }
    void operator +(complex &x);
    friend void operator *(complex &x,&y);
};
   void complex::operator +(complex &x)
   {
       real=real+x.real;
       img=img+x.img;
   }
   void operator *(complex &x, &y)
   {
       x.real=(x.real*y.real)-(x.img*y.img);
       x.img=(x.real*y.img)+(y.real*x.real);
   }
int main()
{
    int r1,r2,i1,i2;
    cout<<"Enter Real parts of two no. : ";
    cin>>r1>>r2;
    cout<<"Enter Imaginary parts of two no. : ";
    cin>>i1>>i2;
    complex obj1(r1,i1);
    complex obj2(r2,i2);
    obj1+obj2;
    obj1.display();
    return 0;
}
