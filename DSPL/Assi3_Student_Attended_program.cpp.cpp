#include<iostream>

#include<string>

#include<iomanip>

using namespace std;

class set

{

     public:

     int rollno;

     float per;

     string clas,name;

 

 

   void insert()

{

     cout<<"> NAME : ";

     cin>>name;

     cout<<"> ROLL NO. : ";

     cin>>rollno;

     cout<<"> CLASS : ";

     cin>>clas;

   }

static void display(set stud[10],int i,int size)

{

    cout<<"\n\t_________________________________________________";

    cout<<"\n\t|----------------STUDENT DETAILS----------------|";

    cout<<"\n\t_________________________________________________";

    cout<<"\n\t|    _NAMES_    |   _ROLL NO._   |    _CLASS_   |";

   

  for(i=0;i<size;i++)

{

    cout<<"\n\t|\t"<<stud[i].name<<"\t|\t"<<stud[i].rollno<<"\t|\t"<<stud[i].clas<<"\t|";

 }

    cout<<"\n\t_________________________________________________";

}

 static void linear(set stud[10],int size)

{

            int i,flag=0,key;

            string keyclass;

            cout<<"\nEnter Roll no & class of student : ";

            cin>>key>>keyclass;

 

            for(i=0;i<size;i++)

           {

             if(key==stud[i].rollno && keyclass==stud[i].clas)

           {

                       cout<<"\n";

                cout<<"Roll No. "<<stud[i].rollno<<" of Name "<<stud[i].name<<" from class "<<stud[i].clas<<" is attended program";

                flag=1;

           break;

        }

        }

   

        if(flag==0)

           {

           cout<<"Roll no. "<<key<<" is not attended program";

         }

}  

 

static void binary(set stud[10],int size)

{

     int flag=0,key,i,j;

     int low=0;

     int mid=0;

     int high=size-1;

    string keyclass;

     cout<<"\n\t\t___Your Sorted Student list___";

     for(i=1;i<size;i++)

           {

                for(j=0;j<i;j++)

                      {

                                 if(stud[j].rollno>stud[i].rollno)

                                 {

                                            int temprollno=stud[j].rollno;

                                            string tempclass=stud[j].clas;

                                            string tempname=stud[j].name;

                                            stud[j].rollno=stud[i].rollno;

                                            stud[j].clas=stud[i].clas;

                                            stud[j].name=stud[i].name;

                                            stud[i].rollno=temprollno;

                                            stud[i].clas=tempclass;

                                            stud[i].name=tempname;

                                           

                                 }

                     }

             }
             
    cout<<"\n\t_________________________________________________";

    cout<<"\n\t|----------------STUDENT DETAILS----------------|";

    cout<<"\n\t_________________________________________________";

    cout<<"\n\t|    _NAMES_    |   _ROLL NO._   |    _CLASS_   |";

   

  for(i=0;i<size;i++)

{

    cout<<"\n\t|\t"<<stud[i].name<<"\t|\t"<<stud[i].rollno<<"\t|\t"<<stud[i].clas<<"\t|";

 }

    cout<<"\n\t_________________________________________________";


 

             

         cout<<"\n\nEnter Roll no & class you want to search : ";

         cin>>key>>keyclass;

           while(low<=high)

     {

             mid=(low+high)/2;

             if(key==stud[mid].rollno && keyclass==stud[mid].clas)

          {

            cout<<"\nstudent "<<stud[i].name<<" of Roll no. "<<key<<" is Attended program";

            flag=1;

            break;

          }

           else if(key<stud[mid].rollno)

          {

           

            high=mid-1;

          }

           else

          {

            low=mid+1;

          }

          

     }

           if(flag==0)

    {

        cout<<"student of Roll no. "<<key<<" NOT Attended Program";

    }  


}
 

static void feedback(set stud[10],int size)

{

           int j,i=0,a[10],store=0;

           float tempper=0;

           cout<<"\n\t\t__HERE'S FEEDBACK FOR PROGRAM__\n";
           for(j=0;j<size;j++)
           {
           cout<<setfill('-')<<setw(65)<<""<<setfill(' ')<<endl;

           cout<<"FEEDBACK OF "<<j+1<<" STUDENT\n";

           cout<<"1.Did you understand the purpose of Training program at the start of the event?\n1.Yes\t2.No : ";

           cin>>a[0];

           cout<<"2.Did the training meet your expectations?\n1.Yes\t2.No : ";

           cin>>a[1];

           cout<<"3.Overall, how would you rate the training instructor?\n1.Yes\t2.No : ";

           cin>>a[2];

           cout<<"4.Was the training program well organized and easy to follow?\n1.Yes\t2.No : ";

           cin>>a[3];

           cout<<"5.Do you feel you were given enough time and resources to complete the training?\n1.Yes\t2.No : ";

           cin>>a[4];
              store=0;
              for(i=0;i<5;i++)
              {
              store+=a[i];
              }
            float store1=0;
            store1=store;
            stud[j].per=( store1*0.2)*100;
            
            }
            cout<<"\n";
           cout<<"------------------------Student Detailss ------------------------\n"; 

           cout<<setw(15)<<left<<"Name"

               <<setw(15)<<left<<"Roll No."

               <<setw(15)<<left<<"Class"

               <<setw(15)<<left<<"Percentage"<<endl;

               cout<<setfill('-')<<setw(65)<<""<<setfill(' ')<<endl;

               for(i=0;i<size;i++)

               {

                 cout<<setw(15)<<left<<stud[i].name
                     <<setw(15)<<left<<stud[i].rollno
                     <<setw(15)<<left<<stud[i].clas
                     <<setw(15)<<left<<stud[i].per<<endl;

                 tempper+=stud[i].per;

               }
               cout<<setfill('-')<<setw(65)<<""<<setfill(' ')<<endl;
               cout<<"\n";
               if((tempper/size)>=80)

               {

                   cout<<"Students Want more Such Training program !!!!";

               }

               else

               {

                   cout<<"Students did not need Such Training program !!!!";

               }
}



};

 

int main()

{

   set stud[10];

   int i,size,choice=0;  

   do{

   cout<<"\n\n";

   cout<<"1.Insert Student Details\n";

   cout<<"2.Display Student Details\n";

   cout<<"3.Search through Linear Search\n";

   cout<<"4.Search through Binary Search\n";

   cout<<"5.Feedback\n";

   cout<<"6.Result & Display\n";

   cout<<"Enter your choice : ";

   cin>>choice;

   switch(choice)

   {

          case 1:

             cout<<"Enter No. of Students : ";

             cin>>size;

             cout<<"\n_______ENTER STUDENT DETAILS_______\n";

                 for(i=0;i<size;i++)

             {

             cout<<"Book details of "<<i+1<<" student\n";

             stud[i].insert();

             }

         break;

  

         case 2: set::display(stud,i,size);

         break;

  

         case 3: set::linear(stud,size);

         break;

        

         case 4: set::binary(stud,size);

         break;

        

         case 5: set::feedback(stud,size);

         break;

        

         case 6: exit(0);
         break;

  

         default: cout<<"Wrong Choice\n";

   }

   }while(1);
   
    return 0;

}
