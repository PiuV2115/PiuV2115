#include<iostream>
using namespace std;
class complex
{   
    public:
    int real,img;
    static int multreal,multimg;
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
        cout<<"\n----------Result------------\n";
        cout<<"Addition : "<<real<<" + "<<img<<"i\n";
    }
    void multdisplay()
    {
       cout<<"Multiplication : "<<real<<" + "<<img<<"i\n";
    }
    void operator +(complex &x);
    friend void operator *(complex &x,complex &y);
};
   void complex::operator +(complex &x)
   {
       real=real+x.real;
       img=img+x.img;
   }
   void operator *(complex &x, complex &y)
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
    cout<<"Complex Numbers Are : \n";
    cout<<"1) "<<r1<<" + "<<i1<<"i\n";
    cout<<"2) "<<r2<<" + "<<i2<<"i\n";
    complex obj1(r1,i1);
    complex obj2(r2,i2);
    obj1+obj2;
    complex obj3(r1,i1);
    obj3+obj2;
    obj1.display();
    obj3.multdisplay();
    return 0;
}