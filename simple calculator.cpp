#include <iostream>
using namespace std;

int main(){
	float a,b, result; 
	char op;
	
	cout<<"-----Simple Calculator-----"<<endl;
	cout<<"Enter the First number: ";
	cin>>a;
	cout<<"Enter an operator(+, -, *, /): ";
	cin>>op;
	cout<<"Enter the Second number: ";
	cin>>b;
	
	if(op=='+'){
		result = a+b;
        cout<< "Result = "<< result;
    }
    else if(op=='-'){
    	result = a-b;
    	cout<< "Result = "<< result;
	}
	else if(op=='*'){
		result= a*b;
		cout<< "Result = "<< result;
	}
	else if(op=='/'){
		if(b != 0){
			result = a/b;
			cout<<"Result="<< result;
		}
		else{
			cout<<"Error! Division by zero is not allowed.";
		}
	}
	else{
		cout<<"Invalid operator!";
	}
	return 0;
}
