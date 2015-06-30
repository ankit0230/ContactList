/*
 * ContactList.cpp
 *
 *  Created on: Aug 8, 2013
 *      Author: Ankit
 */




#include"ContactList.h"


using namespace std;


ContactList::ContactList(): head(NULL),size(0)
{

}

void ContactList::addtoHead(const string& name){

	Contact* newOne = new Contact(name);

	if(head == 0){

		head = newOne;
	}
	else
	{
		newOne->next = head;
		head = newOne;
	}
	size++;
}

void ContactList :: printList(){

	Contact *tp = head;

	while(tp != 0)
	{
		cout<<*tp<<endl;
	tp = tp->next;
}
}


void ContactList :: insert(const string& name){

	Contact* newNode = new Contact(name);

	if (head == 0){
		//case 1 : insertin	g into empty list.
		head = newNode;
	}
	else
	{
		Contact* curr = head;
		Contact* trail = 0;

		while(curr != 0){

			if(curr->name >= newNode->name){
				break;
			}
			else{

				trail = curr;
				curr = curr->next;

			}
		}

	//case 2 : insert at the head(not empty)
	if( curr == head){

		newNode -> next =head;
		head = newNode;
	}
	//case 3 :	insert after head (not empty)
	else{
		newNode -> next = curr;
		trail -> next = newNode;
	}
	}
	size++;
}

//void ContactList::deleteNode(const string& name){
//
//	//case 1 - empty list
//	if(head == 0){
//
//		cout<<"Contact cannot be deleted from an empty Linked List.\n";
//		}
//	else{
//
//		Contact* curr = head;
//		Contact* trail = 0;
//
//
//
//		while(curr == 0){
//
//			if(curr->name == name){
//
//				break ;
//
//			}
//			else{
//				trail = curr;
//				curr =  curr->next;
//
//
//			}
//		}
//
//		//case 2 : node with "name" not found
//		if(curr == 0)
//		{
//			cout<<"Contact with name"<<name<<"not found.\n";
//		}
//		else{
//		//case 3: delete from head
//		if(head == curr ){
//
//			head = head->next;
//			cout<<"head***************\n";
//
//			}
//		else{
//			//case 4 - delete beyond head
//			trail = curr->next;
//
//		}
//		delete curr;
//		size--;
//	}
//	}
//
//}

void ContactList :: reversePrintList(){

	reversePrinWorker(head);

}

void ContactList::reversePrinWorker(Contact* curr){

	if(curr !=0){

		cout<<*curr<<endl;
		reversePrinWorker(curr->next);

	}
}
