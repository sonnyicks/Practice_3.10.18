#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
	ifstream fin;
	ofstream fout;
	void add_plus_plus (ifstream& in_stream, ofstream& out_stream);
	
	cout << "Begin with editing files. \n";
	fin.open("cad.dat");
	if (fin.fail()){
		cout << "File cannot be found.";
		exit (1);
	}
	fout.open("cplusad.dat");
	if (fout.fail()){
		cout << "File could not be opened. \n";
		exit (1);
	}
	add_plus_plus(fin, fout);
	fin.close();
	fout.close();
	cout << "End of editing files. \n";
	return 0;
}

void add_plus_plus (ifstream& in_stream, ofstream& out_stream){
	char next;
	in_stream.get(next);
	while (! in_stream.eof()){
		if (next=='C')
			out_stream << "C++";
		else
			out_stream << next;
		in_stream.get(next);
	}
}