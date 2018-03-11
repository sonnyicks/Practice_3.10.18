#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(){
	int number;
	ifstream in_stream;
	ofstream out_stream;
	double numone, numtwo, numthree, numfour;
	char filename [16];
	
	cout << "input file name: ";
	cin >> filename;
	
	in_stream.open("example.dat");
	if (in_stream.fail()){
		cout << "The program exploded, Yo!";
		exit (1);
	}
	out_stream.open(filename);
	if (out_stream.fail()){
		cout << "Read only, Yo!";
		exit (1);
	}
	
	in_stream >> numone >> numtwo >> numthree >> numfour;
	
	cout.setf(ios::showpos);
	cout.setf(ios::showpoint);
	
	cout << numone << " " << numtwo << setw(5) << " " << numthree;
	cout << " " << setprecision(3) << numfour;
	
	out_stream << "The first number is " << numone << endl;
	out_stream << "The second number is " << numtwo << endl;
	out_stream << "The third number is " << numthree << endl;
	out_stream << "The forth number is " << numfour << endl;
	
	in_stream.close();
	out_stream.close();
	
	return 0;
}