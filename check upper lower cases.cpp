#include<iostream>
using namespace  std;
int main()
{int marks_in_cpp;
int marks_in_FE;
int marks_in_EE;
int a=300;
int  total_of_all_sub=marks_in_cpp + marks_in_FE + marks_in_EE*100;
int percentage=total_of_all_sub/a*100;

cout<<"Enter the marks you obtained in cpp: "<<endl;
cin>>marks_in_cpp;

cout<<"Enter the marks you obtained in FE: "<<endl;
cin>>marks_in_FE;

cout<<"Enter the marks you obtained in EE: "<<endl;
cin>>marks_in_EE;

cout<<"your total marks of all sub = "<<marks_in_cpp + marks_in_FE + marks_in_EE<<endl;
cout<<"your % = "<<percentage;

if(percentage>90)
cout<<"you secured GRADE: A"<<endl;

if(percentage<90 || percentage>80)
cout<<"you secured GRADE: B"<<endl;

if(percentage<79 || percentage>70 )
cout<<"you secured GRADE: C"<<endl;

if(percentage<69 || percentage>60 )
cout<<"you secured GRADE: D"<<endl;

if(percentage<60)
cout<<"you failed";



return 0;
}
