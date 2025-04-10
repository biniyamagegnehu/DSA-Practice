// Selection Sort for Full Names

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
using namespace std;

	struct Student
	{
		char name[10];
		int id;
		Student *next;
	};
	Student *start=NULL;
	
	void insert_big();
	void insert_end();
	void del_big();
	void del_end();
	void del_by_id();
	void display();
	
int main() {

	char ch='y';

	do {
		system("cls");
		int choice;
		cout<<"1. insert at the biggining\n";
		cout<<"2. insert at the end\n";
		cout<<"3. delete at the biggining\n";
		cout<<"4. delete at the end\n";
		cout<<"5. delete any data by id\n";
		cout<<"6. display all list\n";
		cout<<"7. exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		
		switch(choice)
		{
		case 1:
			insert_big();
			break;
		case 2:
			insert_end();
			break;
		case 3:
			del_big();
			break;
		case 4:
			del_end();
			break;
		case 5:
			del_by_id();
			break;
		case 6:
			display();
			break;
		case 7:
			ch='n';
			cout<<"good bye";
		default:
			cout<<"Please enter 1-5\n";
		if(ch!='y') 
		cout<<"continue press any key\n";
		}
	}while(ch=='y');
	
    return 0;
}

void insert_big() {
	Student *temp = new Student;
	cout<<"Please enter student id : ";
	cin>>temp->id;
	cout<<"Please enter the name : ";
	cin>>temp->name;
	
	temp->next = temp;
	if(start==NULL){
		start = temp;
	} else
	{
		Student *temp2 = start;
		while(temp2->next!=start)
		{
			temp2 = temp2->next;
		}
		temp->next = start;
		start = temp;
		temp2->next = temp;
	}
}

void insert_end() {
	Student *temp = new Student;
	cout<<"Please enter student id : ";
	cin>>temp->id;
	cout<<"Please enter the name : ";
	cin>>temp->name;
	
	temp->next = temp;
	if(start==NULL){
		start = temp;
	} else
	{
		Student *temp2 = start;
		while(temp2->next!=start)
		{
			temp2 = temp2->next;
		}
		temp->next = start;
		temp2->next = temp;
	}
}

void del_big() {
	Student *temp = start,*temp2 = start;
	if(start==NULL){
		cout<<"Empty\n";
	} else
	{
		while(temp2->next!=start)
		{
			temp2 = temp2->next;
		}
		temp2->next = start->next;
		start = start->next;
		delete temp;
	}
}

void del_end() {
	Student *temp = start,*temp2;
	if(start==NULL){
		cout<<"Empty\n";
		getch();
	} else
	{
		while(temp->next!=start)
		{
			temp2 = temp;
			temp = temp->next;
		}
		temp2->next = temp->next;
		delete temp;
	}
}

void del_by_id() {
	Student *temp = start,*temp2,*temp3;
	int id;
	cout<<"Enter the id you want to delete: ";
	cin>>id;
	if(start==NULL){
		cout<<"Empty\n";
	} else if(start->id==id) {
		temp2 = start;
		while(temp2->next!=start)
		{
			temp2 = temp2->next;
		}
		temp2->next = start->next;
		start = start->next;
		delete temp;
	} else
	{
		while(temp->id!=id)
		{
			temp3 = temp;
			temp = temp->next;
		}
		temp3->next = temp->next;
		delete temp;
		
	}
}

void display() {
    Student *temp = start;
	if(start==NULL){
		cout<<"the list is empty\n";
		getch();
	}
	else {
		cout<<"ID"<<" "<<"NAME"<<endl;
		while(temp->next!=start)
		{
			cout<<temp->id<<" "<<temp->name<<endl;
			temp = temp->next;
		}
		cout<<temp->id<<" "<<temp->name<<endl;
		getch();
	}	
}