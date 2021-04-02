// array sum

#include <iostream>
#include <vector>
using namespace std;

#define MAX 5

int main(){
	vector<int> arr(MAX); //Define time-size
	cout<<"Enter the no. of elements: ";
	int count, j, sum = 0;
	cin>> count;
	
	for (int i=0; i<count; i++){
		arr[i] = i;
		sum += arr[i];
		
	}
	
	cout<<"Array sum: "<<sum<<endl;
	return 0;
}

// When size of array not mentioned the sum of array
#include <iostream>
#include <vector>
using namespace std;

int main(){
	cout<<"Enter the no. of Elements: ";
	int count, j, sum = 0;
	cin>>count;
	vector<int> arr; //default size
	arr.resize(count);  //set resize
	
	
	for (int i =0; i<arr.size(); i++){
		arr[i] = i;
		sum += arr[i];
		
	}
	
	cout<<"Array sum: "<<sum<<endl;
	return 0;
}




// Concatanation of strings in C++
#include <iostream>
#include <string>
using namespace std;

int main(void){
	string str1 = "Hello";
	string str2 = "World";
	
	string str3 = str1 + str2;
	
	cout<<str3;
	
	return 0;
}

