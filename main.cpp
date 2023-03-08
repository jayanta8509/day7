//Write a program to find Number of days in a given month of a given year
#include <iostream>
using namespace std;
void day(int month,int year){
  if((month==2) && ((year%400==0) ||((year%100 !=0) &&(year%4==0)))){
    cout<<"Day is : 29"<<endl;
  }
    else if(month==2){
      cout<<"Day is :28"<<endl;
      }
  else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
    cout<<"Day is : 31"<<endl;
  }
  else if(month==4||month==6||month==9||month==11){
    cout<<"Day is : 30"<<endl;
  }
  else{
    cout<<"Invalid month"<<endl;
  }
  
  
}

int main() {
  int month,year;
  cout<<"Enter the Month :"<<endl;
  cin>>month;
  cout<<"Enter the Year  :"<<endl;
  cin>>year;
  day(month,year);
  
}
