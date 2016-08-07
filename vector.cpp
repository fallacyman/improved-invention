#include <iostream>
// #include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
	int num;
	// cin>>num;
	// cout<<num<<endl;

	cout<<"Input number of elements: "<<endl;
	cin>>num;
	vector <int> myVector;
	int tmp;
	while(num--)
	{
		cin>>tmp;
		myVector.push_back(tmp);
		cout<<"Size= "<<myVector.size()<<endl;
		cout<<"Capacity= "<<myVector.capacity()<<endl;
	}

	for (int i=0;i<myVector.size();++i)
	{
		cout<<myVector.at(i)<<" ";
	}
	cout<<endl;
	
	// // Create a vector, initialized by an array
	// int cArray[] = {9,3,7,8,8,6,8,2,2,5};
	// int vecLen = sizeof(cArray)/sizeof(int);
	// PRINT(vecLen);
	// vector<int> vec1(cArray, cArray+vecLen);
	// vecPrint(vec1, "vec1");
	// // Add more element
	// vec1.push_back(10);
	// vec1.push_back(20);
	// vecPrint(vec1, "vec1");
	// // Delete some elements
	// vec1.resize(3);			// Keep the first 3 elements
	// vecPrint(vec1, "vec1");

	// vector<double> vec2;
	// vec2.push_back(1.25);
	// vec2.push_back(3.1415);
	// vec2.push_back(2.718281828);
	// vecPrint(vec2, "vec2");
	// vec2.resize(6, 1.4);	// Expand to 5 elements, with the added elements being 1.4
	// vecPrint(vec2, "vec2");
	return 0;
}