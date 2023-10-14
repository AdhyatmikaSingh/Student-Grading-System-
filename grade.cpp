#include<iostream>
using namespace std;
int main() {
    string name;
    cout<<"enter name of student : ";
    cin>>name;
    int maths,hindi,english,science,sst;
    cout<<"enter marks in maths : ";
     cin>>maths;
    cout<<"enter marks in hindi : ";
     cin>>hindi;
    cout<<"enter marks in english : ";
     cin>>english;
    cout<<"enter marks in science : ";
     cin>>science;
    cout<<"enter marks in sst : ";
     cin>>sst;
     int grade;
     int marks;
     marks = maths+hindi+english+sst+science;
     grade = marks/5;
     cout<<marks<<endl;
     cout<<grade<<"%"<<endl;
     if( grade>= 90 )
    {
    	cout<<"A";	
	}
	else if(grade>= 80)
    {
    	cout<<"B";	
	}
	else if(grade>= 70)
    {
    	cout<<"C";	
	}
	else if(grade>= 60)
    {
    	cout<<"D";	
	}
	else if(grade>= 50)
    {
    	cout<<"E";	
	}
	
	else {
		cout<<"fail";
	}
  
    return 0;
}
