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
#include "Name.h"

Name::Name()	//This method will automatically call the default constructors for 
{				//any members that are class objects 
}

Name::Name(const Name & N) : Last(N.Last), First(N.First), Middle(N.Middle)
{				//Setting the 3 objects of N to be objects of First, Middle, & Last
}

Name::Name(const WCS_String & L, const WCS_String & F, const WCS_String & M) : Last(L), First(F), Middle(M)
{																			// Order doesn't matter here
}

Name::Name(const char L[], const char F[], const char M[]) : Last(L), First(F), Middle(M)
{
}

Name::~Name()	//This method will automatically call the destructors
{				//for any members that are class objects
}

int Name::Compare(const Name & N) const
{
	int Result;
	Result = Last.Compare(N.Last);

	if (Result != 0)
		return Result;
	else
	{
		Result = First.Compare(N.First);
		if (Result != 0)
			return Result;
		else
			return Middle.Compare(N.Middle);
	}
}

ostream & Name::Display(ostream & out) const
{
	out << Last << ", " << First << " " << Middle;	//First, Middle, & Last are called Getters
	return out;										//Meaning, they get a part of a class each
}

istream & Name::Read(istream & in)
{
	First.Read(in);
	Middle.Read(in);
	Last.Read(in);
	return in;
}

bool Name::SetFirst(const WCS_String & F)
{
	First = F;
	return true;
}

bool Name::SetMiddle(const WCS_String & M)
{
	Middle = M;
	return true;
}

bool Name::SetLast(const WCS_String & L)
{
	Last = L;
	return true;
}

Name & Name::operator = (const Name & N)
{
	First = N.First;
	Middle = N.Middle;
	Last = N.Last;
	return *this;
}