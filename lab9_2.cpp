#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ofstream cheerbook("W:\\111111\\lab9-2562-2-vaczeen\\cheerbook_copy.txt");
	ifstream cheerbook_copy("W:\\111111\\lab9-2562-2-vaczeen\\cheerbook.txt");
	string textline;
	bool havetext;
		havetext=getline(cheerbook_copy,textline);
	cheerbook<<"------------SOTUS------------"<<"\n";
	while(havetext){
		cheerbook<<textline<<"\n";
		havetext=getline(cheerbook_copy,textline);
	}
	cheerbook<<"------------SOTUS------------"<<"\n";

	return 0;
}
