#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int target;
	int guess_number;
	int chances;
	
	srand(time(NULL));
	target = (rand()%100) +1;
	
	cout<<"Start the game"<<endl;
	
	do{
		cout<<"enter a guess_number between (1 - 100):"<<endl;
		cin>>guess_number;
		chances++;
		
		if(guess_number > target){
			cout<<"Too High"<<endl;
		}
		else if(guess_number < target){
			cout<<"Too Low"<<endl;
		}
		else{
			cout<<"Right answer # of chances: "<<chances<<endl;
		}
	}while(guess_number != target);
	
	cout<<"END"<<endl;
	
	return 0;
}
