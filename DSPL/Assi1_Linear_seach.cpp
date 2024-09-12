

//Linear Search

#include <iostream>
using namespace std;
class linear
{
    public:
    int count=0,i,j,a[10],temp=0,flag=0,size,key,press,pos[10];

    void sort()
    {
        cout<<"Enter Your Size of Array:  ";
        cin>>size;
        cout<<"\nEnter Array Elements:  ";
        for(i=0;i<size;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<size;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[j]>a[i])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        cout<<"\nSorted Element are : ";
        for(i=0;i<size;i++)
        {
            cout<<""<<a[i]<<"\t";
        }
    }

    void search()
    {
        do{
        cout<<"\n\nEnter Key Element you want search:  ";
        cin>>key;
        for(i=0;i<size;i++)
        {
            if(key==a[i])
            {
                pos=i; //pos[count-1]
                flag=1;
               count++;
               
               continue;
            }

        }
        if(flag!=1)
        {
         cout<<"\n\nElement "<<key<<" is NOT Found " ;   
        }
        else
        {
            cout<<"\n\nElement "<<key<<" is Found at "<<i<<" Position\n\n"<<key<<" Element is Occured for "<<count<<" time in Array" ; 
        }
        cout<<"\n\nDo You want to search Again , Press 1 : ";
        cin>>press;
        }while(press==1);
    }
};
int main()
{
   linear p1;
   p1.sort();
   p1.search();

    return 0;
}
