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
#include "Address.h"

Address::Address()	//This method will automatically call the default constructors for 
{				    //any members that are class objects 
}

Address::Address(const Address & A) : Street(A.Street), City(A.City), State(A.State)
{				//Setting the 3 objects of N to be objects of Street, City, & State
}

Address::Address(const WCS_String & St, const WCS_String & C, const WCS_String & S, const WCS_String & Z) : Street(St), City(C), State(S), Zip(Z)
{																			// Order doesn't matter here
}

Address::Address(const char St[], const char C[], const char s[], const char Z[]) : Street(St), City(C), State(s), Zip(Z)
{
}

Address::~Address()	//This method will automatically call the destructors
{				    //for any members that are class objects
}

int Address::Compare(const Address & A) const
{
	int Result;
	Result = Street.Compare(A.Street);

	if (Result != 0)
		return Result;
	else
	{
		Result = City.Compare(A.City);
		if (Result != 0)
			return Result;
		else
		{
			return State.Compare(A.State);
			if (Result != 0)
				return Result;
			else
				return Zip.Compare(A.Zip);
		}
	}
}

ostream & Address::Display(ostream & out) const
{
	out <<  Street << ", " << City << ", " << State << " " << Zip;	
	return out;										
}

istream & Address::Read(istream & in)
{
	Street.Read(in);
	City.Read(in);
	State.Read(in);
	Zip.Read(in);
	return in;
}

bool Address::SetStreet(const WCS_String & S)
{
	Street = S;
	return true;
}

bool Address::SetCity(const WCS_String & C)
{
	City = C;
	return true;
}

bool Address::SetState(const WCS_String & St)
{
	State = St;
	return true;
}

bool Address::SetZip(const WCS_String & Z)
{
	Zip = Z;
	return true;
}

Address & Address::operator = (const Address & A)
{
	Street = A.Street;
	City = A.City;
	State = A.State;
	Zip = A.Zip;
	return *this;
}