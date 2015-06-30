/*
 * Contact.cpp
 *
 *  Created on: Aug 8, 2013
 *      Author: Ankit
 */


#include"Contact.h"

using namespace std;

Contact::Contact(string n):name(n), next(NULL){

}


ostream& operator <<(ostream& os, const Contact& c){

	return os<<"Name: "<<c.name;
}
