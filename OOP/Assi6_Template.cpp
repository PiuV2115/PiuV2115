// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int a1[10];
float f1[10];
class sort
{
    public:
    int size;
    void accept()
    {
        cout<<"Enter size for Integer & Float elements :";
        cin>>size;
         cout<<"Enter Int Array Elements\n";
        for(int i=0;i<size;i++)
        {
          cout<<"Element no."<<i+1<<" : ";
          cin>>a1[i];
        }
        cout<<"\nEnter Float Array Elements\n";
        for(int i=0;i<size;i++)
        {
          cout<<"Element no."<<i+1<<" : ";
          cin>>f1[i];
        }
        
    }
    template<class T>
    void swapselection(T arr[])
    { 
         T temp;
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]>arr[j])
               
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   
    void display()
    {
        cout<<"\nHere's Sorted Elements:\n";
        cout<<"Integer\t Float \n";
        for(int i=0;i<size;i++)
        {
           cout<<"|\t"<<a1[i]<<"\t|  "<<f1[i]<<"|\n";
        }
    }
};
int main() 
{
   sort obj;
   obj.accept();
   obj. swapselection(a1);
    obj.swapselection(f1);
   obj.display();
    return 0;
}
