//Linear Search

#include <iostream>
using namespace std;
class linear
{
    public:
    int i,j,a[10],pos,pos1,count=0,temp=0,flag=0,size,key,press;
    
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
        cout<<"\n\t************************************************\n";
        cout<<"\t\tSORTED ELEMENTS : ";
       
        for(i=0;i<size;i++)
        {
            cout<<""<<a[i]<<"\t";
        }
         cout<<"\n\t************************************************\n";
        }
    
    void search()
    {
      do{  
        cout<<"\nEnter Key Element you want search:  ";
        cin>>key;
        for(i=0;i<size;i++)
        {
            if(key==a[i])
            {
                pos=i;
                break;
            }
         
        }
        for(i=0;i<size;i++)
        {
            if(key==a[i])
            {
                pos1=i;
                count++;
                flag=1;
                continue;
            }
        }
        if(flag==0)
        {
           
            cout<<"\n\t************************************************\n";
            cout<<"\t______________________RESULT____________________\n";
            cout<<"\n\t************************************************\n";
            cout<<"\t\t# Element "<<key<<" is NOT Found " ;  
             cout<<"\n\t************************************************\n";
        }
        else
        {
            cout<<"\n\t************************************************\n";
            cout<<"\t______________________RESULT____________________\n";
            cout<<"\n\t************************************************\n";
            cout<<"\t\t# Element "<<key<<" is FOUND\n";
            cout<<"\t\t# First Position of Element "<<key<<" is  : "<<pos;
            cout<<"\n\t\t# Last Position of Element "<<key<<" is : "<<pos1;
            cout<<"\n\t\t# count of Element "<<key<<" is : "<<count;
             cout<<"\n\t************************************************\n";
            
        }
        cout<<"\n\nDo You want to search Again , Press 1 : ";
        cin>>press;
    }while(press==1);
        
    }
};
int main()
{ 
    int press;
   linear p1;
   p1.sort();
   p1.search();

    return 0;
}
