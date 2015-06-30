/*
 * ContactListApp.cpp
 *
 *  Created on: Aug 8, 2013
 *      Author: Ankit
 */




#include "ContactList.h"

using namespace std;

int main(){

	ContactList* cl1 = new ContactList();
	string name;

	while(true){

		cout<<"Enter the name of the contact or q to quit."<<endl;
		cin>>name;
		if(name == "q")
		break;
		cl1->insert(name);

	}
	cl1->reversePrintList();
//	while(true){
//
//		cout<<"\nEnter the name of the contact to delete or q to quit."<<endl;
//		cin>>name;
//		if(name == "q")
//		break;
//		cl1->deleteNode(name);
//		cl1->printList();
//
//
//	}

}
