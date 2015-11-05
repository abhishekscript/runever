#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main() {
	char s[200];
	int choice;
	
	cout<< "Name of the process with ABS path ?\n";
	cin.getline(s,sizeof(s));
	cout<<"(1) Deploy \n(2) Test ";
	cin>>choice;
	if(choice==1)
	{	
		// $gte : &>> , $lte : 
		strcat(s," >> deployLog.txt 2>&1");
		while(1)
		system(s);
		system(" ( echo '----- Break Point ---- \n' & date ) >> deployLog.txt ");
	}
	else {
		strcat(s," >> testLog.txt 2>&1");
		system(s);
		system(" ( echo '----- Break Point ---- \n' & date ) >> testLog.txt  ");
	}
return 0;	
}
