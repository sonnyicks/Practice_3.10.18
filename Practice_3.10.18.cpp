#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int number;
	ifstream in_stream;
	ofstream out_stream;
	int numone, numtwo, numthree, numfour;
	
	in_stream.open("example.dat");
	out_stream.open("outfile.dat");
	
	in_stream >> numone >> numtwo >> numthree >> numfour;
	
	cout << numone << " " << numtwo << " " << numthree;
	cout << " " << numfour;
	
	out_stream << "The first number is " << numone << endl;
	out_stream << "The second number is " << numtwo << endl;
	out_stream << "The third number is " << numthree << endl;
	out_stream << "The forth number is " << numfour << endl;
	
	in_stream.close();
	out_stream.close();
	
	return 0;
}