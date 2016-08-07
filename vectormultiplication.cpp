#include <iostream>
// #include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
	int num;
	cout<<"Input number of elements: "<<endl;
	cin >> num;
	int i,j;
	for (i=1;i<=num;i++){
		vector <int> row;
		for(j=1; j<=num; j++){
			row.push_back(i*j);
		}
		int rowsize=row.size();
		for(j=0; j<rowsize; j++){
			cout<<row[j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}