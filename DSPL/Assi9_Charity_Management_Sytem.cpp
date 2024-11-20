#include <iostream>
using namespace std;
class SLL
{
  public:
    struct node
    {
        string name, phone_no ,donation_obj;
        double donation_entity,id;
        struct node *next;
    };

  private:
    node *head;

  public:
    SLL()
    {
        head = NULL;
    }
    node *get_node()
    {
        node *temp = new node();
        if (temp == nullptr)
        {
            cout << "Momory Allocation failed!\n";
        }
        temp->next = NULL;
        return temp;
    }
    node *create()
    {
        node *temp;
        node *New;
        char flag = 'T';
        temp = head;
        int size;
        cout << "\nHow many Donor's list you want to create :";
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            New = get_node();
            if (New == NULL)
            {
                cout << "Memory is Not Allocated to New node\n";
            }
            else
            {
                cout << "---------------------------------------------------\n";
                cout << "Donor No. " << i + 1 << "\n";
                cout << "# Donor Name :";
                cin >> New->name;
                cout<<"# Donor id : ";
                cin>> New->id;
                cout << "# Donor Phone no. :";
                getline(cin,New->phone_no);
                cout << "# Donated object :";
                cin >> New->donation_obj;
                cout << "# Donated Entity :";
                cin >> New->donation_entity;
                if (flag == 'T')
                {
                    head = New;
                    New->next = head;
                    temp = head;
                    flag = 'F';
                }
                else
                {
                    temp = head;
                    while (temp->next != head)
                    {
                        temp = temp->next;
                    }
                    temp->next = New;
                    New->next = head;
                }
            }
        }
        cout << "---------------------------------------------------\n";
        cout << "list of " << size << " Donor's is created SUCCESSFULLY !\n";
        cout << "---------------------------------------------------\n";
        return head;
    }
    node *Insert_at_first()
    {
        node *New;
        node *temp;
        temp = head;
        New = get_node();
        cout << "---------------------------------------------------\n";
        cout << "Enter Charity Donor's details\n";
        cout << "# Donor Name :";
        cin >> New->name;
        cout<<"# Donor id : ";
                cin>> New->id;
        cout << "# Donor Phone no. :";
        getline(cin,New->phone_no);
        cout << "# Donated object :";
        cin >> New->donation_obj;
        cout << "# Donated Entity :";
        cin >> New->donation_entity;
        cout << "---------------------------------------------------\n";
        if (head == NULL)
        {
            head = New;
            New->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = New;
            New->next = head;
            head = New;
        }
        cout << "Donor's details Inserted at First\n";
        cout << "---------------------------------------------------\n";
        return head;
    }
    void Insert_at_last()
    {
        node *New;
        node *temp;
        New = get_node();
        cout << "---------------------------------------------------\n";
        cout << "Enter Charity Donor's details\n";
        cout << "# Donor Name :";
        cin >> New->name;
        cout<<"# Donor id : ";
        cin>> New->id;
        cout << "# Donor Phone no. :";
        getline(cin,New->phone_no);
        cout << "# Donated object :";
        cin >> New->donation_obj;
        cout << "# Donated Entity :";
        cin >> New->donation_entity;
        cout << "---------------------------------------------------\n";
        if (head == NULL)
        {
            head = New;
            New->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = New;
            New->next = head;
        }
        cout << "Donor's details Inserted at last\n";
        cout << "---------------------------------------------------\n";
    }
    void Insert_at_pos()
{
    node *New;
    node *temp;
    int flag1=0;
    string name_key;
    double id_key;
    New = get_node();
    cout << "---------------------------------------------------\n";
   cout << "Enter Charity Donor's details\n";
        cout << "# Donor Name :";
        cin >> New->name;
        cout<<"# Donor id : ";
        cin>> New->id;
        cout << "# Donor Phone no. :";
        getline(cin,New->phone_no);
        cout << "# Donated object :";
        cin >> New->donation_obj;
        cout << "# Donated Entity :";
        cin >> New->donation_entity;
    cout << "---------------------------------------------------\n";
    if (head == NULL)
    {
        head = New;
        New->next = head;
    }
    else
    {
        cout << "Enter After which Donor, the new Donor's info is to be inserted :\n# Name :";
        cin >> name_key;
        cout << "# Donor Id :";
        cin >> id_key;
        temp = head;
        do
        {
            if (temp->id == id_key)
            {
                New->next = temp->next; 
                temp->next = New; 
                flag1=1;
                break;                  
            }
            temp = temp->next;           
        } while (temp->next!=nullptr );   
    }
    cout << "---------------------------------------------------\n";
    if(flag1==1)
    cout << "Donor  details is Inserted after Donor: " << name_key << "\n";
    else
      cout<<"Donor Not found";
  cout << "---------------------------------------------------\n";
}
    node *delete_at_first()
    {
        cout << "---------------------------------------------------\n";
        node *temp;
        if (head == NULL)
        {
            cout << "Donor's list is Empty\n";
        }
        else
        {
            if (head->next == nullptr)
            {
                temp = head;
                head = NULL;
            }
            else
            {
                temp = head;
                head=head->next;
            }
           delete temp;
           cout << "Donor details at 1st is Deleted\n";
        }
       cout << "---------------------------------------------------\n";
        return head;
    }
    void delete_at_last()
    {
        cout << "---------------------------------------------------\n";

        node *temp;
        node *prev = nullptr;
        if (head == NULL)
        {
            cout << "Donor's list is Empty\n";
        }
        else
        {
            if (head->next == nullptr)
            {
                temp = head;
                head = NULL;
                delete temp;
            }
            else
            {
                temp = head;
                while (temp->next != nullptr)
                {
                    prev = temp;
                    temp = temp->next;
                }
                prev->next = nullptr;
                delete temp;
            }
            cout << "Donor details at last is Deleted\n";
          
        }
        cout << "---------------------------------------------------\n";
    }
    void delete_at_pos()
    {
        cout << "---------------------------------------------------\n";

        node *temp;
        node *prev;
        double id_key;
        string name_key;
        if (head == NULL)
        {
            cout << "Donor's list is Empty\n";
        }
        else if (head = head->next)
        {
            temp = head;
            head = nullptr;
        }
        else
        {
            temp = head;
            cout << "Enter Donor Name & Id is to be Deleted :";
            cin >> name_key >> id_key;
          do{
            if (temp->id != id_key)
            {
                prev = temp;
                temp = temp->next;
            }
            else{
            prev->next = temp->next;
            free(temp);
            cout << "Donor " << name_key << " is Deleted\n";
              break;
        }
            }while(temp->next!=nullptr);
        cout << "---------------------------------------------------\n";
    }
    }
    
    void update()
    {
        cout << "---------------------------------------------------\n";
        node *temp;
        int flag = 0;
        double id_key;
        if (head == NULL)
        {
            cout << "Donor list is Empty\n";
        }
        else
        {
            cout << "Enter Id of Donor You want to update :";
            cout << "---------------------------------------------------\n";
            cin >> id_key;
            temp = head;
            do
            {
                if (temp->id == id_key)
                {
                    cout << "Donor of " << id_key << " ID is Present\n";
                    temp=head;
                        cout << "Update "<<id_key<<" Donor's details\n";
                        cout << "# Donor Name :";
                        cin >> temp->name;
                        cout<<"# Donor id : ";
                        cin>> temp->id;
                        cout << "# Donor Phone no. :";
                        getline(cin,temp->phone_no);
                        cout << "# Donated object :";
                        cin >> temp->donation_obj;
                        cout << "# Donated Entity :";
                        cin >> temp->donation_entity;
                    flag = 1;
                  break;
                }
              else{
                temp = temp->next;
              }
            } while (temp->next!= nullptr);
            if (flag == 0)
            {
                cout << "Donor of " << id_key << " ID Not is Present\n";
            }
        }
        cout << "---------------------------------------------------\n";  
    }
    
    void search()
    {
        cout << "---------------------------------------------------\n";
        node *temp;
        int flag = 0;
        double id_key;
        if (head == NULL)
        {
            cout << "Donor list is Empty\n";
        }
        else
        {
            cout << "Enter Id of Donor You want to search :";
            cout << "---------------------------------------------------\n";
            cin >> id_key;
            temp = head;
            do
            {
                if (temp->id == id_key)
                {
                    cout << "Donor of " << id_key << " ID is Present\n";
                    flag = 1;
                  break;
                }
              else{
                temp = temp->next;
              }
            } while (temp->next!= nullptr);
            if (flag == 0)
            {
                cout << "Donor of " << id_key << " ID Not is Present\n";
            }
        }
        cout << "---------------------------------------------------\n";
    }
    void display()
    {
        node *temp;
        temp = head;
        int i = 0;
        cout << "---------------------------------------------------\n";
        cout << "               CHARITY DONOR INFO                  \n";
        cout << "---------------------------------------------------\n";
        while(temp->next!=nullptr)
        {
            cout << "\nDonor No." << i + 1;
            cout << "\n# Donor Name : " << temp->name;
            cout << "\n# Donor ID :" << temp->id;
            cout << "\n# Donor Phone no. :" << temp->phone_no;
            cout << "\n# Donated Object :" << temp->donation_obj;
            cout<<"\n# Donated Entity :"<<temp->donation_entity;
            temp = temp->next;
            i++;
            cout << "\n---------------------------------------------------\n";
        }
        cout << "\n";
    }
};
int main()
{
    SLL obj;
    int choice, size;
    do
    {
        cout << "\n----------CHARITY DONOR MANAGEMENT SYSTEM-----------\n";
        cout << "1.Create Donor's List\n2.Donor's Insertion\n3.Donor's Deletion\n4.Update Donor info\n5.Search for Donor\n6.Display Donor Info\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj.create();

            break;

        case 2:
            int ch, ans;
            do
            {
                cout << "\n------------------BOOK INSERTION-------------------";
                cout << "\n1.Insert Donor at First\n2.Insert Donor at last\n3.Insert Donor in between\nEnter choice :";
                cin >> ch;
                switch (ch)
                {
                case 1:
                    obj.Insert_at_first();
                    break;
                case 2:
                    obj.Insert_at_last();
                    break;
                case 3:
                    obj.Insert_at_pos();
                    break;
                default:
                    cout << "\nInvalid Choice \n";
                }
                cout << "\nDo you want to continue Insertion\t1=Yes\t2=No\nYour choice :";
                cin >> ans;
            } while (ans == 1);

            break;

        case 3:
            int ans1, ch1;
            do
            {
                cout << "\n--------------------BOOK DELETION------------------";
                cout << "\n1.Delete Donor at First\n2.Delete Donor at last\n3.Delete Donor in between\nEnter choice :";
                cin >> ch1;
                switch (ch1)
                {
                case 1:
                    obj.delete_at_first();
                    break;
                case 2:
                    obj.delete_at_last();
                    break;
                case 3:
                    obj.delete_at_pos();
                    break;
                default:
                    cout << "\nInvalid Choice \n";
                }
                cout << "\nDo you want to continue Deletion ?\t1=Yes\t2=No\nYour choice :";
                cin >> ans1;
            } while (ans1 == 1);

            break;

        case 4: obj.update();
        break;

        case 5:
            obj.search();
            break;

        case 6:
            obj.display();
            break;

        case 7:
            cout << "Exiting from Donor Charity system....\n";
            exit(0);
            break;

        default:
            cout << "Invalid choice \n";
        }
    } while (1);
    return 0;
}
