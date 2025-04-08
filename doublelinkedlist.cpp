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
		Student *prev;
	};
	Student *start=NULL;
	
void add();
void display();
void searchanddisplay();
void del();
void update();
void sort();

int main()
{
	char ch='y';

	do {
		system("cls");
		int choice;
		cout<<"1. add\n";
		cout<<"2. display\n";
		cout<<"3. search and display\n";
		cout<<"4. delete\n";
		cout<<"5. update\n";
		cout<<"6. sort\n";
		cout<<"7. exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		
		switch(choice)
		{
		case 1:
			add();
			break;
		case 2:
			display();
			break;
		case 3:
			searchanddisplay();
			break;
		case 4:
			del();
			break;
		case 5:
			update();
			break;
		case 6:
			sort();
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

void add() {
	Student *temp = new Student;
	cout<<"Please enter student id: ";
	cin>>temp->id;
	cout<<"Please enter student name: ";
	cin>>temp->name;
	if(start==NULL) {
		start=temp;
		temp->next=NULL;
		temp->prev=NULL;
	} else if(start->next==NULL){
		start->next=temp;
		temp->prev=start;
		temp->next=NULL;
	} else
	{
		int Id;
		cout<<"Please enter your student id: ";
		cin>>Id;
		Student *curr = start;
		while(curr->id!=Id && curr->next!=NULL)
		{
			curr= curr->next;
		}
		if(curr->next==NULL){
			curr->next = temp;
			temp->prev = curr;
			temp->next = NULL;
		} else
		{
			curr->next->prev=temp;
			temp->next=curr->next;
			curr->next=temp;
			temp->prev=curr;
		}}
		}
		
void display() {
    Student *temp = start;
	if(start==NULL){
		cout<<"the list is empty\n";
		getch();
	}
	else {
		cout<<"ID"<<" "<<"NAME"<<endl;
		while(temp!=NULL)
		{
			cout<<temp->id<<" "<<temp->name<<endl;
			temp=temp->next;
		}
		getch();
	}
}

void searchanddisplay(){
	Student *curr = start;
	int id;
	if(start==NULL){
		cout<<"Empty\n";
	} else
	{
		cout<<"Enter you want to search : ";
		cin>>id;
		while(curr->id!=id && curr!=NULL)
		{
			curr=curr->next;
		}
		if(curr->id==id){
			cout<<curr->id<<" "<<curr->name;
			getch();
		} else
		{
			cout<<"Not found\n";
		}
	}
}
void del(){
	Student *temp = start,*temp2;
	int id;
	cout<<"Enter the id you want to delete : ";
	cin>>id;
	while(temp->id!=id)
	{
		temp2 = temp;
		temp = temp->next;
	}
	temp2->next = temp->next;
	temp->next->prev = temp2;
	delete temp;
}
void update(){
	
}
void sort(){
	
}