#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
	int count=0;
	double sum=0;
	double sung;
	string textline;
	ifstream score("W:\\111111\\lab9-2562-2-vaczeen\\score.txt");
	while(getline(score,textline)){
		sum+=atof(textline.c_str());
		count++;
		
		sung=sung + pow(atof(textline.c_str()),2);
		
	}
	
	cout<<"Number of data= "<<count<<"\n";
	cout<<"Mean= "<<sum/count<<"\n";
	cout<<"Standard deviation= "<<sqrt((sung/count)-(pow((sum/count),2)));
	score.close();
	return 0;
	
}
