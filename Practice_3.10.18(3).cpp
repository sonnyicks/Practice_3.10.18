#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char symbol;
	ifstream fin;
	char next;
	
	fin.open("example.dat");
	
	cout << "Enter a line of input and I will echo it:\n";
	do{
		cin.get(symbol);
		cout << symbol;
	}while (symbol!='G');
	cout << "That is all for our demonstration." << endl;
	
	fin.get(next);
	while(next != '5'){
		cout.put(next);
		fin.get(next);
	}
	fin.putback(next);
	cout << next;
	return 0;
}