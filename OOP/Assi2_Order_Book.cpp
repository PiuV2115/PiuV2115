// Online C++ compiler to run C++ program online
#include<iostream>

#include<string>

#include<iomanip>

using namespace std;

class library

{
    public:

      string author,title,publisher;

      int price,stock_pos;
     
      library()
      {
       string *title=new string;
       string *author=new string;
       string *publisher=new string;
       int *price=new int;
       int *stock_pos=new int;
      }
       
       static void insert(library obj[10],int size)

      {
          cout<<setfill('-')<<setw(45)<<""<<setfill(' ')<<endl; 
          cout<<"\n\t\t_Enter Book Details_\n";
          
          for(int i=0;i<size;i++)

          {
          cout<<setfill('-')<<setw(45)<<""<<setfill(' ')<<endl; 
          cout<<"Book no.:"<<i+1<<"\n";

          cout<<"> Author : ";

          cin>>obj[i].author;

          cout<<"> Title : ";

          cin>>obj[i].title;

          cout<<"> Publisher : ";

          cin>>obj[i].publisher;

          cout<<"> Price : ";

          cin>>obj[i].price;

          cout<<"> Stock Position : ";

          cin>>obj[i].stock_pos;
          }
        cout<<setfill('-')<<setw(45)<<""<<setfill(' ')<<endl; 
      }
      
      static void Display(library obj[10],int size)
      {
          cout<<setw(15)<<left<<"Title"
              <<setw(15)<<left<<"Author"
              <<setw(15)<<left<<"Publisher"
              <<setw(15)<<right<<"Price"
              <<setw(15)<<right<<"Stock Position"<<"\n";
          cout<<setfill('-')<<setw(65)<<""<<setfill(' ')<<endl;
          for(int i=0;i<size;i++)
          {
          cout<<setw(15)<<left<<obj[i].title
              <<setw(15)<<left<<obj[i].author
              <<setw(15)<<left<<obj[i].publisher
              <<setw(15)<<right<<obj[i].price
              <<setw(15)<<right<<obj[i].stock_pos<<"\n";
          }
      }
    
      static void book(library obj[10],int size)

      {
           string title1,author1;
           int copies,pos=0;
           cout<<"\n_# Author Name_: ";

           cin>>author1;

           cout<<"_# Title Name_: ";

           cin>>title1;
           
          int flag=0;

          for(int i=0;i<size;i++)

          {

          if(obj[i].author==author1&&obj[i].title==title1)

          {

              flag=1;
              pos=i;
              break;

          }

          }

          if(flag==1)

          {

             cout<<"HERE'S BOOK DETAILS..........!!!\n";

       

         for(int i=0;i<size;i++)

         {

          cout<<"***Book Details of "<<i+1<<" book***\n";

          cout<<"> Author : "<<obj[i].author;

          cout<<"\n> Title : "<<obj[i].title;

          cout<<"\n> Publisher : "<<obj[i].publisher;

          cout<<"\n> Price : "<<obj[i].price;

          cout<<"\n> Stock Position : "<<obj[i].stock_pos;

      }

             cout<<"\nEnter No. of copies you Needed : ";

             cin>>copies;

             if(obj[pos].stock_pos>=copies)

             {

                 cout<<"\n"<<copies<<" copies are Available of book "<<title1;

                 cout<<"\n Total cost for "<<copies<<" copies is : "<<obj[pos].price*copies;

                 size-=copies;

             }

             else

             {

                 cout<<"\n"<<copies<<" copies are Not Availabe in stock of book "<<title1;

             }

          }

          else

          {

              cout<<"Book with title "<<title1<<" of Author "<<author1<<" is Not Available";

          }

      }

};

int main()

{
  library obj[10];
  int choice;
   static int size;
  do
  {
  cout<<"\n1.Insert Book List\n2.Display Book List\n3.Order Books\n4.Exit\nEnter Your Choice : ";
  cin>>choice;
  switch(choice)
  {
      case 1:
      
           cout<<"Enter No of Books : ";
      cin>>size;
       
      library::insert(obj,size);
      break;
      case 2:library::Display(obj,size);
      break;
      case 3:library::book(obj,size);
      break;
      case 4:exit(0);
      break;
      default: cout<<"\nInvalid Choice";
  }
 }while(1);
}
