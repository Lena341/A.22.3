#include <iostream>
#include <string>
#include <vector>
using namespace std;
#pragma once
class Book
{
private:
	int code;
	float price;
public:
	Book(int c, int prc) { code = c; price = prc; } //Copy constructor
	void show() const;
};

class CD
{
private:
	string title;
public:
	CD(const string& t) { title = t; }
	void show() const;
};

template <typename T> class Shop
{
private:
	vector <T> v;
public:
	void show() const;
	void add(T t) { v.push_back(t); } //With push_back the elements are inserted in the vector.

};

