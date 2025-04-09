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
		cout<<"5. display all list\n";
		cout<<"6. exit\n";
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
			display();
			break;
		case 6:
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

}

void insert_end() {
	
}

void del_big() {

}

void del_end() {

}

void display() {

}