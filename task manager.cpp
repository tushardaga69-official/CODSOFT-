#include <iostream>
#include <string>
using namespace std;

int main(){

	string task[100];
	bool complete[100];
	int count = 0, choice, taskNo;

	do{
		cout<<"----- TO-DO LIST MANAGER -----"<<endl;
		cout<<"1. Add Task"<<endl;
		cout<<"2. View Tasks"<<endl;
		cout<<"3. Mark Task as Completed"<<endl;
		cout<<"4. Remove Task"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		cin.ignore();

		if(choice==1){
			if(count<100){
				cout<<"Enter Task: ";
				getline(cin, task[count]);
				complete[count]=false;
				count++;
				cout<<"Task added successfully!"<<endl;
			}
			else{
				cout<<"Task list is full!"<<endl;
			}
		}
		else if(choice==2){
			if(count==0){
				cout<<"No tasks available."<<endl;
			}
			else{
				cout<<"----- Task List -----"<<endl;

				for(int i=0; i<count; i++){
					cout<<i+1<<". "<<task[i]<<" - ";

					if(complete[i]){
						cout<<"Completed";
					}
					else{
						cout<<"Pending";
					}

					cout<<endl;
				}
			}
		}
		else if(choice==3){
			if(count==0){
				cout<<"No tasks available."<<endl;
			}
			else{
				cout<<"Enter task number: ";
				cin>>taskNo;

				if(taskNo>=1 && taskNo<=count){
					complete[taskNo-1]=true;
					cout<<"Task marked as completed."<<endl;
				}
				else{
					cout<<"Invalid task number!"<<endl;
				}
			}
		}
		else if(choice==4){
			if(count==0){
				cout<<"No tasks available."<<endl;
			}
			else{
				cout<<"Enter task number: ";
				cin>>taskNo;
				if(taskNo>=1 && taskNo<=count){

					for(int i=taskNo-1; i<count-1; i++){
						task[i]=task[i+1];
						complete[i]=complete[i+1];
					}

					count--;
					cout<<"Task removed successfully!"<<endl;
				}
				else{
					cout<<"Invalid task number!"<<endl;
				}
			}
		}
		else if(choice==5){
			cout<<"Exiting program..."<<endl;
		}
		else{
			cout<<"Invalid choice!"<<endl;
		}

	}while(choice!=5);

	return 0;
}
