#include<iostream>
using namespace std;

void new_line();
void get_int(int& number);

int main (){
	int n;
	
	get_int(n);
	cout << "Final value read in = " << n << endl
		<< "End of Demonstration. \n";
		return 0;
}

//this function keeps the program from crashing if input is incorrect
void new_line(){
	char symbol;
	do{
		cin.get(symbol);
	} while (symbol != '\n');
}

void get_int(int& number){
	char ans;
	do{
		cout << "Enter input number: ";
		cin >> number;
		cout << "You entered " << number
		<< ". Is that correct? (yes/no): ";
		cin >> ans;
		new_line();
	}while ((ans != 'Y')&&(ans !='y'));
}