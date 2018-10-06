#include<iostream>
using namespace std;

class Rectangle{

private:
  int length;
  int width;

public:
  Rectangle(int len, int wid){

     length = len;
     width = wid;

  }
  int Area()
  {
    int area;
   area = length*width;
  }
  


};


int main()
{
  int len, wid;
  cout<<"Enter the length : ";
  cin>>len;
  cout<<endl;
  cout<<"Enter the width : ";
  cin>>wid;
  cout<<endl;

  Rectangle obj(len, wid);
  cout<<"Area of rectangle is : "<<obj.Area()<<endl;
}
