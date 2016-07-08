//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//
//																																											//
//																																											//
//														Andrew Mills																										//
//															Lab 4																											//
//														Bill Slater																											//
//														COSC 1437.3S7																										//
//																																											//
//																																											//
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//
#ifndef PERSON_H
#define PERSON_H

#include "Name.h"
#include "Address.h"
#include <wcs_string.h>

#include <iostream>

using namespace std;

class Person
{
	public:
									Person			();
									Person			(const Person &);
									Person			(const Name &, const Address &);
									~Person			();
			int						Compare			(const Person &) const;
			Person &				Copy			(const Person &);
			ostream &				Display			(ostream & = cout) const;
			istream &				Read			(istream & = cin);
			const Name &			GetpName		() const;
			const Address &			GetpAddress		() const;
			Person &				operator =		(const Person & P);
			bool					SetName			(const Name &);
			bool					SetAddress		(const Address &);
	
	private:
			Name pName;
			Address pAddress;
};

inline ostream & operator << (ostream & out, const Person & P)
{
	return P.Display(out);
}

inline istream & operator >> (istream & in, Person & P)
{
	return P.Read(in);
}

inline Person & Person::Copy(const Person & P)
{
	return *this = P;
}

inline const Name & Person::GetpName() const
{
	return pName;
}

inline const Address & Person::GetpAddress() const
{
	return pAddress;
}
#endif