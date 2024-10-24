 #include <iostream>
#define max 10
using namespace std;
class Que
{
public:
   int rear=-1,front=-1;
   char queue[max];
    void insert_rear()
    {
        if (rear==max-1)
        {
            cout << "Order Limit is Full !! " << endl;
        }
        else
        {
            rear++;
             cout<<"# Pizza name : ";
        cin>>queue[rear];
        if ( rear==0) 
        {
            front = 0;
            queue[front]=queue[rear];
        }
        cout<<"\nYour "<<queue[rear]<<" pizza Order is Placed!!"<<endl;
        }
    }

 
    void delete_front() 
    {
        if (front==-1&&rear==-1) 
        {
            cout << "Their is No Order to Deliver !!!" << endl;
        }
        else
        {
        cout << "Delivered Order is : " <<queue[front]<< endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        } else 
        {
            front = front + 1;
        }
        }
    }


    void display()
    {
    if(front==-1&&rear==-1)
    {
    	cout<<"No Order Yet!!!]\n";
    }
       cout << "List of Pizza Order's :\n [ ";
       for( int i = front; i <= rear ; i++)
       {
           cout << queue[i] <<"  ";
        }
       cout << "]\n";
    }
};

int main() {
    Que obj;
    int choice;
    do {
        cout << "\nPizza Menu:" << endl;
        cout << "1.Order Pizza" << endl;
        cout << "2.Deliver Pizza" << endl;
         cout << "3.Display Pizza Orders" << endl;
        cout << "4.Exit from Pizza Menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: 
        
            obj.insert_rear();
           
            break;
        
        case 2 : 
            obj.delete_front();
           
            break;
        
        case 3:
         obj.display();
         break;
         
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (1);

    return 0;
}
