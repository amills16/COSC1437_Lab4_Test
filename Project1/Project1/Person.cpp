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
#include <iostream>
#include <WCS_String.h>
#include "Person.h"

using namespace std;

Person::Person()	
{				
}

Person::Person(const Person & P) : pName(P.pName), pAddress(P.pAddress)
{				
}

Person::Person(const Name & pN, const Address & pA) : pName(pN), pAddress(pA)
{																			
}

Person::~Person()	
{					
}

int	Person::Compare(const Person & P) const
{
	int Result;
	Result = pName.Compare(P.pName);
	if (Result != 0)
		return Result;
	else
		return pAddress.Compare(P.pAddress);
}

ostream & Person::Display(ostream & out) const
{
	out << pName << ", " << pAddress;
	return out;
}

istream & Person::Read(istream & in)
{
	pName.Read(in);
	pAddress.Read(in);
	return in;
}

bool Person::SetName(const Name & N)
{
	pName = N;
	return true;
}

bool Person::SetAddress(const Address & A)
{
	pAddress = A;
	return true;
}

Person & Person::operator = (const Person & P)
{
	pName = P.pName;
	pAddress = P.pAddress;
	return *this;
}