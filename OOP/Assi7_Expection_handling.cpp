#include <iostream>
using namespace std;
class tele
{
  public:
  double model_no,scr_size,prc;
  void reset()
  {
      model_no=0;
      scr_size=0;
      prc=0;
  }
  friend istream& operator>>(istream& in,tele &tv)
  {
  try{
  cout<<"Enter Model No.:";
  in>>model_no;
  if(model_no>9999)
  {
      throw error("Exception:Model no. shoould be less that 9999");
  }
  cout<<"Enter Screeen size .:";
  in>>scr_size;
  if(scr_size<12||scr_size>70)
  {
      throw error("Exception : Screen size is in range of 12 and 70");
  }
  cout<<"Enter Price :";
  in>>prc;
  if(prc>55000)
  {
      throw error("Exception : Price is should be less than 55000");
  }
  }
  catch(error& err)
  {
      cout<<err;
      reset();
      return in;
  }
  }
   friend ostream& operator<<(ostream& out,tele& tv)
  {
      out<<"\nModel no.\tPrice\tScreen size\n";
      out<<model_no<<"\t"<<prc<<"\t"<<scr_size<<"\n";
      return out;
  }
};
int main()
{
   tele tv;
   cin>>tv;
   cout<<tv;
   return 0;
}
