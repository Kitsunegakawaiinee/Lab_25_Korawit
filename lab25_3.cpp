#include<iostream>
#include<list>
#include<set>
using namespace std;

int count(int a[],int b){
	set<int> c;
	for(int i=0;i<b;i++){
		c.insert(a[i]);
	}
	int sum = 0;
	set<int>::iterator i;
	for(i = c.begin();i != c.end();i++){
		sum++;
	}
	return sum;
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";

	return 0;
}