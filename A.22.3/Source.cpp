#include <iostream>
#include <string>
#include <vector>
#include "Book.h"
using namespace std;

void Book::show() const
{
	cout << code << price << '\n';
}

void CD::show() const
{
	cout << title << '\n';
}

template<typename T> void Shop<T>::show() const
{
	for (int i = 0; i < v.size(); i++) 
		v[i].show();
}

int main()
{
	Shop<Book> s1;
	s1.add(Book(5, 10));
	s1.add(Book(20, 30));
	s1.show();

	Shop<CD> s2;
	s2.add(CD("Music_1"));
	s2.add(CD("Music_2"));
	s2.show();

	return 0;
}