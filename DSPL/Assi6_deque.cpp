 #include <iostream>
#define max 10
using namespace std;
class Que
{
public:
   int rear=-1,front=-1;
   int queue[max];
    void insert_rear()
    {
        if (rear==max-1)
        {
            cout << "Queue is Full !! " << endl;
        }
        else
        {
            rear++;
             cout<<"Enter Element : ";
        cin>>queue[rear];
        if ( rear==0) 
        {
            front = 0;
            queue[front]=queue[rear];
        }
        cout<<"\nElement is Inserted through Rear end !!"<<endl;
        }
    }

    void insert_front()
    {
        if (front <= 0) 
        {
            cout << "Cannot add Element at front end !!!" << endl;
       
        }
        else
        {
        front--;
        cout<<"Enter Element : ";
        cin>>queue[front];
        cout<<"\nElement is Inserted through Front end !!"<<endl;
        }
    }

    void delete_front() 
    {
        if (front==-1&&rear==-1) 
        {
            cout << "Queue is Empty !!!" << endl;
        }
        
        cout << "Deleted element is : " <<queue[front]<< endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        } else 
        {
            front ++;
        }
        
    }

    void delete_rear() 
    {
        if (front==-1&&rear==-1) 
        {
            cout << "Cannot delete Elemnt through rear end !!" << endl;
            return;
        }
       cout << "Deleted element is " << queue[rear] << endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            rear--;
        }
    }

    void display()
    {
       cout << "Deque : [ ";
       for( int i = front; i <= rear ; i++)
       {
          if(front==-1&&rear==-1)
          {
          	cout<<" ";
          }
          else
          {
           cout << queue[i] <<"  ";
           }
        }
       cout << "]\n";
       cout << "Index : [ ";
       for( int i = front; i <= rear ; i++)
       {
       	 if(front==-1&&rear==-1)
          {
          	cout<<" ";
          }
          else{
           cout << i <<"  ";
           }
        }
        cout << "]";
    }
};

int main() {
    Que obj;
    int choice;
    do {
        cout << "\n\nDoubly Ended Queue Menu:" << endl;
        cout << "1. Insert_at_Rear()" << endl;
        cout << "2. Insert_at_Front()" << endl;
        cout << "3. Delete_at_Front()" << endl;
        cout << "4. Delete_at_Rear()" << endl;
        cout << "5. Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: 
        {
            obj.insert_rear();
            obj.display();
            break;
        }
        case 2:
        {
            obj.insert_front();
            obj.display();
            break;
        }
        case 3:
        {
            obj.delete_front();
            obj.display();
            break;
        }
        case 4 : {
            obj.delete_rear();
            obj.display();
            break;
        }
        case 5:
            cout << "Exiting..." << endl;
            exit(0);
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (1);

    return 0;
}
