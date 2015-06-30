/*
 * Contact.h
 *
 *  Created on: Aug 8, 2013
 *      Author: Ankit
 */

#ifndef CONTACT_H_
#define CONTACT_H_

#include<iostream>
#include<string>

using namespace std;


class Contact{

public:

	friend ostream& operator <<( ostream& os,const Contact& c);
	friend class ContactList;
	Contact(string name= "none");

private:
	string name;
	Contact* next;

};


#endif /* CONTACT_H_ */
