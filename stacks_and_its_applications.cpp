//reversing string in C++ with stack concept
/*#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int main(){
	char str[10] = "ABCDE";
	stack<char> s;
	int i;
	
	for (i = 0; i<strlen(str); i++){
		s.push(str[i]);
	}
	cout<<"Reversed String: ";
	
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	
	return 0;
}

*/

//Postfix Evaluation in C++
#include <iostream>
#include <stack>
using namespace std;

int main(){
	//Postfix expression 1,2,3,*, +, 4, -
	char postfix[] = {'1','2','3','*','+','4','-'},ch;
	stack <int> s;
	
	for (int i = 0; i<7; i++){
		ch = postfix[i];
		if (isdigit(ch)) {s.push(ch-'o');}
		else{
			int op1 = s.top(); s.pop();
			int op2 = s.top(); s.pop();
			
			switch(ch){
				case '*': (s.push(op2*op1)); break;
				case '/': (s.push(op2/op1)); break;
				case '+': (s.push(op2+op1)); break;
				case '-': (s.push(op2-op1)); break;
			}
		}
	}
	cout<<"\nEvaluation "<<s.top();
	
	return 0;
}


































