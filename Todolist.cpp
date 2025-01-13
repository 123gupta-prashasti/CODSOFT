#include<iostream>
 #include<windows.h>
  using namespace std;
   void print_tasks(string tasks[],int task_count){
    cout<<"Tasks to do: "<<endl;
	 for(int i=0;i<task_count;i++){
	  cout<<"Tasks "<<i<<" : "<<tasks[i]<<endl;
	   }
	    }
 int main(){ 
 string tasks[10] = {""};
  int task_count = 0;
  int option = -1; 
  while(option != 0){
   cout<<"--To Do List--"<<endl;
    cout<<"1- To add new task"<<endl; 
	cout<<"2- To view new tasks"<<endl; 
	cout<<"3- Delete the tasks"<<endl;
	 cout<<"0- Terminate the program"<<endl; 
	 cin>>option; switch(option){
  case 1: { if(task_count > 9){
          cout<<"Task list is Full"<<endl;
	    }
		 else{
		  cout<<"Enter a new task"<<endl;
		   cin.ignore();
		    getline(cin,tasks[task_count]); 
			task_count++; } break;
			 }
  case 2: {
   print_tasks(tasks,task_count);
    break;
	 }
  case 3: {
   int del_task = 0;
    cout<<"Enter A Task to delete: ";
	 cin>>del_task; if(del_task<0 || del_task>9){ 
	 cout<<"You Entered Invalid Task NO.";
	  break; 
	  }
	   for(int i=del_task;i<task_count;i++){
	    tasks[i] = tasks[i+1];
		 } 
		 task_count = task_count - 1; 
		 break;
		 }
		} 
	}
	 return 0; 
	 }
