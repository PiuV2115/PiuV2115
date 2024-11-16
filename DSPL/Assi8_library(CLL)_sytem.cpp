#include <iostream>
using namespace std;
struct node
{
  int data;
   struct node *next;
};
class CLL
{
private:
node *head;
public:
CLL()
{
    head=NULL;
}
node*get_node()
{
  node*temp;
  temp->next=NULL;
  return temp;
}
node*create()
{
  node*temp;
  node*New;
  char flag='T';
  temp=head;
  int size;
  cout<<"\nHow Many Nodes You want to create :";
  cin>>size;
   for(int i=0;i<size;i++)
   {
    New=get_node();
    if(New==NULL)
    {
      cout<<"Memory is Not Allocated to New";
    }
    cout<<"Enter Data : ";
    cin>>New->data;
    if(flag=='T')
    {
      head=New;
      New->next=head;
      temp=head;
      flag='F';
    }
    else
    {
      temp=head;
      while(temp->next!=head)
      {
        temp=temp->next;
      }
      temp->next=New;
      New->next=head;
    }
  }
  return head;
}
node*Insert_at_first()
{
  node*New;
  node*temp;
  temp=head;
  New=get_node();
  cout<<"Enter data fill : ";
  cin>>New->data;
  if(head==NULL)
  {
    head=New;
    New->next=head;
  }
  else
  {
    temp=head;
    New->next=temp;
    head=New;
  }
return head;
}
void Insert_at_last()
{
  node*New;
  node*temp;
  New=get_node();
  cout<<"Enter data fill : ";
  cin>>New->data;
  if(head==NULL)
  {
    head=New;
    New->next=head;
  }
  else
  {
    temp=head;
    while(temp->next!=head)
    {
      temp=temp->next;
    }
    temp->next=New;
    New->next=head;
  }
}
void  Insert_at_pos()
{
 node*New;
 node*temp;
 int key;
 New=get_node();
 cout<<"Enter data fill";
 cin>>New->data;
 if(head==NULL)
 {
   head=New;
   New->next=head;
 }
 else
 {
   cout<<"Enter After which data ,the new data is to be inserted :";
   cin>>key;
   temp=head;
   while(temp->data!=key)
   {
     temp=temp->next;
   }
   New->next=temp->next;
   temp=New;
 }
}
node*delete_at_first()
{
  node*temp;
  if(head==NULL)
  {
    cout<<"Circular Link is Empty\n";
  }
  else
  {
    if(head->next==head)
    {
    temp=head;
    head=NULL;
    free(temp);
    }
    else
    {
    temp=head;
    while(temp->next==head)
    {
    head=head->next;
    temp->next=head;
    }
    free(temp);
    }
     cout<<"Node at first is Deleted";
  }
  return head;
}
void delete_at_last()
{
  node*temp;
  node*prev;
  int key;
  if(head==NULL)
  {
    cout<<"Circular link List is Empty\n";
  }
  else
  {
    if(head->next==head)
    {
      temp=head;
      head=NULL;
      free(temp);
    }
    else
    {
      temp=head;
      while(temp->next!=head)
      {
        prev=temp;
        temp=temp->next;
      }
       prev->next=head;
       free(temp);
    }
     cout<<"Last Node is Deleted\n";
  }
}
void delete_at_pos()
{
  node*temp;
  node*prev;
  int key;
  cout<<"Enter The key element ,which node is to be Deleted :";
  cin>>key;
  if(head==NULL)
  {
    cout<<"Circular Link is Empty \n";
  }
  else
  {
    if(temp->data!=key)
    {
      prev=temp;
      temp=temp->next;
    }
    prev=temp->next;
    free(temp);
    cout<<"Node is Deleted at Position";
  }
}
void search()
{
  node*temp;
  int key,flag=0;
  if(head==NULL)
  {
    cout<<"Circular link list is Empty";
  }
  else
  {
    cout<<"Enter Data Fill You want to search :";
    cin>>key;
    temp=head;
    do
    {
      if(temp->data==key)
      {
        cout<<"Data Is Present";
         flag=1;
      }
      temp=temp->next;
    }while(temp!=head);
    if(flag==0)
    {
      cout<<"Data is not Present";
    }
  }
}
void display()
{
  node*temp;
  temp=head;
  do{
    cout<<"Here's our circular link list ";
    cout<<temp->data<<"->";
    temp=temp->next;
    }while(temp!=head);
}
};
int main()
{
  CLL obj;
  int choice,size;
  do{
  cout<<"-----CIRCULAR LINK LIST-----\n";
  cout<<"1.Create CLL\n2.Insertion\n3.Deletion\n4.Searching\n5.Display\nEnter your choice: ";
  cin>>choice;
  switch(choice)
  {
    case 1:
      obj.create();
    cout<<"Circular link list of "<<size<<" nodes is created SUCCESSFULLY !\n";
    break;
   
    case 2:
    int ch;
    cout<<"\n----INSERTION----";
    cout<<"\n1.Insert at First\n2.Insert at last\n3.Insert in between\nEnter choice";
    cin>>ch;
    switch(ch)
    {
      case 1: obj.Insert_at_first();
      cout<<"Node is Inserted At Head\n";
      break;
      case 2: obj.Insert_at_last();
      cout<<"Node is Inserted last";
      break;
      case 3: obj.Insert_at_pos();
      cout<<"Node is inserted";
      break;
      default:cout<<"\nInvalid Choice \n";
    }
    break;
   
    case 3:
     cout<<"\n----DELETION----";
    cout<<"\n1.Delete at First\n2.Delete at last\n3.Delete in between\nEnter choice";
    cin>>ch;
    switch(ch)
    {
      case 1: obj.delete_at_first();
      break;
      case 2: obj.delete_at_last();
      break;
      case 3: obj.delete_at_pos();
      break;
      default:cout<<"\nInvalid Choice \n";
    }
    break;
   
    case 4:
    obj.search();
    break;
   
    case 5: obj.display();
    break;
   
    case 6:
    cout<<"Exiting from CLL....\n";
    exit(0);
    break;
   
    default:cout<<"Invalid choice \n";
  }
  }while(1);
  return 0;
}
