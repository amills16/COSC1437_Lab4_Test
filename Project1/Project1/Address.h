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
#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>

#include <WCS_String.h>

using namespace std;

class Address
{
	public:
								Address			();
								Address			(const Address &);
								Address			(const WCS_String &, const WCS_String &, const WCS_String &, const WCS_String &);
								Address			(const char[], const char[], const char[], const char[]);
								~Address();
		int						Compare			(const Address &) const;
		Address &				Copy			(const Address &);
		ostream &				Display			(ostream & = cout) const;
		istream &			    Read			(istream & = cin);
		const WCS_String &		GetStreet		() const;
		const WCS_String &		GetCity			() const;
		const WCS_String &		GetState		() const;
		const WCS_String &		GetZip			() const;
		bool					SetStreet		(const WCS_String &);
		bool					SetCity			(const WCS_String &);
		bool					SetState		(const WCS_String &);
		bool					SetZip			(const WCS_String &);
		Address &				operator =		(const Address &);
		bool					operator !=		(const Address &) const;
		bool					operator ==		(const Address &) const;

	private:
		WCS_String				Street;
		WCS_String				City;
		WCS_String				State;
		WCS_String				Zip;
};

inline ostream & operator << (ostream & out, const Address & A)
{
	return A.Display(out);
}

inline istream & operator >> (istream & in, Address & A)
{
	return A.Read(in);
}

inline Address & Address::Copy(const Address & N)
{
	return *this = N;			//The class being accessed is assigned with the Addresss in N
}

inline const WCS_String & Address::GetStreet() const
{
	return Street;
}

inline const WCS_String & Address::GetCity() const
{
	return City;
}

inline const WCS_String & Address::GetState() const
{
	return State;
}

inline const WCS_String & Address::GetZip() const
{
	return Zip;
}

inline bool Address::operator != (const Address & A) const
{
	return Compare(A) != 0;
}

inline bool Address::operator == (const Address & A) const
{
	return Compare(A) == 0;
}

#endif