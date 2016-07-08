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
#ifndef NAME_H
#define NAME_H

#include <iostream>

#include <WCS_String.h>

using namespace std;

class Name
{
	public:
									Name			();
									Name			(const Name &);
									Name			(const WCS_String &, const WCS_String &, const WCS_String &);
									Name			(const char[], const char[], const char[]);
									~Name			();
		int							Compare			(const Name &) const;
				Name &				Copy			(const Name &);
				istream &			Read			(istream & = cin);

				ostream &			Display			(ostream & = cout) const;
		const	WCS_String &		GetFirst		() const;
		const	WCS_String &		GetLast			() const;
		const	WCS_String &		GetMiddle		() const;
		bool						SetFirst		(const WCS_String &);
		bool						SetLast			(const WCS_String &);
		bool						SetMiddle		(const WCS_String &);
				Name &				operator =		(const Name &);
		bool						operator !=		(const Name &) const;
		bool						operator ==		(const Name &) const;
		bool						operator <		(const Name &) const;
		bool						operator <=		(const Name &) const;
		bool						operator >		(const Name &) const;
		bool						operator >=		(const Name &) const;


	private:
		WCS_String		First;
		WCS_String      Middle;
		WCS_String      Last;
};

inline ostream & operator << (ostream & out, const Name & N)
{
	return N.Display(out);
}

inline istream & operator >> (istream & in, Name & N)
{
	return N.Read(in);
}

inline Name & Name::Copy(const Name & N)
{
	return *this = N;
}

inline const WCS_String & Name::GetFirst() const
{
	return First;
}

inline const WCS_String & Name::GetMiddle() const
{
	return Middle;
}

inline const WCS_String & Name::GetLast() const
{
	return Last;
}
inline bool Name::operator == (const Name & N) const
{
	return Compare(N) == 0;
}
inline bool Name::operator != (const Name & N) const
{
	return Compare(N) != 0;
}
inline bool Name::operator <= (const Name & N) const
{
	return Compare(N) <= 0;
}
inline bool Name::operator < (const Name & N) const
{
	return Compare(N) < 0;
}
inline bool Name::operator >= (const Name & N) const
{
	return Compare(N) >= 0;
}
inline bool Name::operator > (const Name & N) const
{
	return Compare(N) > 0;
}
#endif