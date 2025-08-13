#pragma once
#include <string>

using namespace std;


class Book
{
public:
  Book();
  Book(const Book& src);
  Book(unsigned int _id, std::string _title, unsigned int _year);
  ~Book();
  void display() const;
  bool operator==(const Book& book) const;

private:
  unsigned int id; /**< Identifiant du livre. */
  std::string title; /**< Titre du livre. */
  unsigned int year; /**< Ann�e de publication du livre. */
};


