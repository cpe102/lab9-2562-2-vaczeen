#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<"\n";
	string grade;
	int i=1;
	
	do{
		cout << "Student [" <<i<< "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=="0"){
			
			break;
		}
		if(grade=="A"){ // if grade is A
			count[0]=count[0]+1;
			i++;
			//Do something 
		}else if(grade=="B"){
		    count[1]=count[1]+1;
			i++;
			// if grade is B
			//Do something
		}else if(grade=="C"){
			count[2]=count[2]+1;
			i++;
		}else if(grade=="D"){
			count[3]=count[3]+1;
			i++;
		}else if(grade=="F"){
			count[4]=count[4]+1;
			i++;
    	//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			//Do something
			cout<<"Wrong input. Please input again."<<"\n";
			
		} 
		
	}while(1);

	
	cout << "In total "<<i-1<<" students."<<"\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";	
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4] <<",";
	//	and so on ... for grade = C, D, F	
	

	return 0;
	}
