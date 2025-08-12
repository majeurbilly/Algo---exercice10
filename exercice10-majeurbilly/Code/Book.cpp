#include "stdafx.h"
#include <iostream>
#include "Book.h"


Book::Book()
  : Book(0, "Unknown", 0)
{
}

Book::Book(const Book& src)
	: id(src.id), title(src.title), year(src.year)
{
}

Book::Book(unsigned int _id, string _title, unsigned int _year)
	: id(_id), title(_title), year(_year)
{

}


Book::~Book()
{
}

void Book::display() const
{
		cout << "\t{ ";
		cout << "\tId : " << this->id << ",";
		cout << "\tTitle : " << this->title << ",";
		cout << "\tYear : " << this->year;
		cout << "\t}" << endl;
}

bool Book::operator==(const Book& book) const
{
  return (this->id == book.id);// && (title==book.title) && (year == book.year);
}