#include <iostream>
using namespace std;
class CLL
{
  public:
    struct node
    {
        string title, author;
        double isbn_no;
        bool status;
        struct node *next;
    };

  private:
    node *head;

  public:
    CLL()
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
        cout << "\nHow many Books list you want to create :";
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
                cout << "Book details for " << i + 1 << " Node \n";
                cout << "# Book Title :";
                cin >> New->title;
                cout << "# Book Author :";
                cin >> New->author;
                cout << "# ISBN no. :";
                cin >> New->isbn_no;
                cout << "# Availability (1 for Yes / 0 for No) :";
                cin >> New->status;
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
        cout << " list of " << size << " Books is created SUCCESSFULLY !\n";
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
        cout << "Enter Book details\n";
        cout << "# Book Title :";
        cin >> New->title;
        cout << "# Book Author :";
        cin >> New->author;
        cout << "# ISBN no. :";
        cin >> New->isbn_no;
        cout << "# Availability (1 for Yes / 0 for No) :";
        cin >> New->status;
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
        cout << "Book details Inserted at First\n";
        cout << "---------------------------------------------------\n";
        return head;
    }
    void Insert_at_last()
    {
        node *New;
        node *temp;
        New = get_node();
        cout << "---------------------------------------------------\n";
        cout << "Enter Book details\n";
        cout << "# Book Title :";
        cin >> New->title;
        cout << "# Book Author :";
        cin >> New->author;
        cout << "# ISBN no. :";
        cin >> New->isbn_no;
        cout << "# Availability (1 for Yes / 0 for No) :";
        cin >> New->status;
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
        }
        cout << "Book details Inserted at last\n";
        cout << "---------------------------------------------------\n";
    }
    void Insert_at_pos()
{
    node *New;
    node *temp;
    string title_key;
    double isbn_key;
    New = get_node();
    cout << "---------------------------------------------------\n";
    cout << "Enter Book details\n";
    cout << "# Book Title :";
    cin >> New->title;
    cout << "# Book Author :";
    cin >> New->author;
    cout << "# ISBN no. :";
    cin >> New->isbn_no;
    cout << "# Availability (1 for Yes / 0 for No) :";
    cin >> New->status;
    cout << "---------------------------------------------------\n";
    if (head == NULL)
    {
        head = New;
        New->next = head;
    }
    else
    {
        cout << "Enter After which book, the new Book is to be inserted :\n# Title :";
        cin >> title_key;
        cout << "# ISBN no. :";
        cin >> isbn_key;
        temp = head;
        do
        {
            if (temp->isbn_no == isbn_key)
            {
                New->next = temp->next; 
                temp->next = New;      
                break;                  
            }
            temp = temp->next;           
        } while (temp != head);   
    }
    cout << "---------------------------------------------------\n";
    cout << "Book details Inserted after book with ISBN: " << isbn_key << "\n";
    cout << "---------------------------------------------------\n";
}
    node *delete_at_first()
    {
         cout << "---------------------------------------------------\n";
        node *temp;
        if (head == NULL)
        {
            cout << "Book list is Empty\n";
        }
        else
        {
            if (head->next == head)
            {
                temp = head;
                head = NULL;
                free(temp);
            }
            else
            {
                temp = head;
                while (temp->next == head)
                {
                    head = head->next;
                    temp->next = head;
                }
                free(temp);
            }
            cout << "Book details at 1st is Deleted\n";
            cout << "---------------------------------------------------\n";
        }
        return head;
    }
    void delete_at_last()
    {
        cout << "---------------------------------------------------\n";

        node *temp;
        node *prev = nullptr;
        if (head == NULL)
        {
            cout << "Book list is Empty\n";
        }
        else
        {
            if (head->next == head)
            {
                temp = head;
                head = NULL;
                delete temp;
            }
            else
            {
                temp = head;
                while (temp->next != head)
                {
                    prev = temp;
                    temp = temp->next;
                }
                prev->next = head;
                delete temp;
            }
            cout << "Book details at last is Deleted\n";
            cout << "---------------------------------------------------\n";
        }
    }
    void delete_at_pos()
    {
        cout << "---------------------------------------------------\n";

        node *temp;
        node *prev;
        double isbn_key;
        string title_key;
        if (head == NULL)
        {
            cout << "Book list is Empty\n";
        }
        else if (head = head->next)
        {
            temp = head;
            head = nullptr;
        }
        else
        {
            temp = head;
            cout << "Enter Book title & ISBN no, is to be Deleted :";
            cin >> title_key >> isbn_key;
            if (temp->isbn_no != isbn_key)
            {
                prev = temp;
                temp = temp->next;
            }
            prev = temp->next;
            free(temp);
            cout << "Book " << title_key << " is Deleted\n";
        }
        cout << "---------------------------------------------------\n";
    }
    void search()
    {
        cout << "---------------------------------------------------\n";

        node *temp;
        int flag = 0;
        double isbn_key;
        if (head == NULL)
        {
            cout << "Book list is Empty\n";
        }
        else
        {
            cout << "Enter ISBN no. of Book  You want to search :";
            cout << "---------------------------------------------------\n";
            cin >> isbn_key;
            temp = head;
            do
            {
                if (temp->isbn_no == isbn_key)
                {
                    cout << "Book of " << isbn_key << "ISBN no. is Present\n";
                    flag = 1;
                }
                temp = temp->next;
            } while (temp != head);
            if (flag == 0)
            {
                cout << "Book of " << isbn_key << "ISBN no. Not is Present\n";
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
        cout << "                    Book Library                   \n";
        cout << "---------------------------------------------------\n";
        do
        {
            cout << "\nBook No." << i + 1;
            cout << "\n# Title : " << temp->title;
            cout << "\n# Author :" << temp->author;
            cout << "\n# ISBN no. :" << temp->isbn_no;
            cout << "\n# Availability :" << temp->status;
            temp = temp->next;
            i++;
            cout << "\n---------------------------------------------------\n";
        } while (temp != head);
        cout << "\n";
    }
};
int main()
{
    CLL obj;
    int choice, size;
    do
    {
        cout << "\n----------------BOOK LIBRARY SYSTEM--------------\n";
        cout << "1.Create Book List\n2.Book Insertion\n3.Book Deletion\n4.Search a Book\n5.Display Book Info\nEnter your choice: ";
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
                cout << "\n1.Insert Book at First\n2.Insert Book at last\n3.Insert Book in between\nEnter choice :";
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
                cout << "\n1.Delete Book at First\n2.Delete Book at last\n3.Delete Book in between\nEnter choice :";
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

        case 4:
            obj.search();
            break;

        case 5:
            obj.display();
            break;

        case 6:
            cout << "Exiting from Book Library System....\n";
            exit(0);
            break;

        default:
            cout << "Invalid choice \n";
        }
    } while (1);
    return 0;
}
