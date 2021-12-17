#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	string passage;
	bool read;
	read = getline(source, passage);
	while(read){
	    cout << "-------------------- BOOM ---------------------"<< "\n";
	    cout << passage << "\n";
	    cout << "-------------------- HA!! ---------------------";
	    read = getline(source, passage);
	}

    source.close();
    dest.close();
	return 0;
}
