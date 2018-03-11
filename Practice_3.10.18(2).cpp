#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
	double next, sum=0;
	int count = 0;
	ifstream in_stream;
	
	in_stream.open("example.dat");
	if (in_stream.fail()){
		cout << "file did not open.";
		exit(1);
	}
	
	while (in_stream >> next){
		in_stream >> next;
		sum = sum + next;
		count++;
	}
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << "the average of the numbers is " << sum/count;
	in_stream.close();
	return 0;
}