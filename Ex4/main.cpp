#include <bits/stdc++.h>

using namespace std;


int B(int a, int b, int c){
	return (a+b+c)/3;
}


void C(const string& input){
	cout<<"OUTPUT 2: "<<input<<endl;
}

void A(int a, int b){
	cout<<"OUTPUT 1: "<<a<<" - "<<b<<endl;
	
	int value = a+B(50, 20, 33);
	
	C("Hello World");
	
	cout<<"OUTPUT 3: value="<<value<<" b="<<b<<endl;
}


int main(){
    A(5, 2);
    return 0;
}



