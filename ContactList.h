/*
 * ContactList.h
 *
 *  Created on: Aug 8, 2013
 *      Author: Ankit
 */

#ifndef CONTACTLIST_H_
#define CONTACTLIST_H_

#include"Contact.h"

class ContactList{

public:

	ContactList();
	void addtoHead(const string& name);
	void printList();
	void insert(const string&);
	//void deleteNode(const string&);
	void reversePrintList();

private:
	void reversePrinWorker(Contact*);
	Contact* head;
	int size;
};


#endif /* CONTACTLIST_H_ */
