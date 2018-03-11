#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

ifstream doc;
char filename[16];
int number;
int high;
int low;
void find(ifstream& in_stream);

int main(){
	cout << "What file would you like to examine? :";
	cin >> filename;
	doc.open(filename);
	if (doc.fail()){
		cout << "Cannot open file.";
		exit (1);
	}
	find(doc);
	cout << "Your highest number is " << high
	<< " and your lowest number is " << low;
	doc.close();
	return 0;
}

void find (ifstream& in_stream){
	in_stream >> number;
	high=number;
	low=number;
	while (in_stream >> number){
		in_stream >> number;
		if(high<number){high=number;}
		if(low>number){low=number;}
	}
}