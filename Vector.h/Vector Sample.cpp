#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,i,k;
	cout<<"Enter the size: ";
	cin>>size;
	// Decleration of vector
	vector<int> num;
	//Insertion of element into array
	cout<<"Enter the elements of vector: ";
	for(i=0;i<size;i++)
	{
		cin>>k;
		num.push_back(k);
	}
	
	//Displaying size of vector
	cout<<"The size of vector is: "<<num.size()<<endl;
	
	//Displaying elements of vector
	cout<<"The elements of vector are: ";
	for(i=0;i<num.size();i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<endl;
	
	//Deletion of element from back
	num.pop_back();
	
	//Displaying elements of vector after deletion
	cout<<"The elements of vector after deletion are: ";
	for(i=0;i<num.size();i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<endl;
	
}
