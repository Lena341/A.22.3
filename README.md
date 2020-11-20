# A.22.3
C++ exercise

Set the class Book with private fields code and price of the book. Set the class CD with the private field title, the title  of the book. Each class should have the public function show() for showing the values of her fields. Set the template class Shop<T>, where T can be of type CD or Book. The class should have a private vector field in which the T objects are stored. For storing each object declare an add() function. Also, the class should have the function show() which calls the show() of the objects, which are included in the vector object, for showing their elements. Add to the classes the right functions so that the following program can work. 

int main()
{
	Shop<Book> s1;
	s1.add(Book(5, 10)); //The s1 is object is stored in s1.v
	s1.add(Book(20, 30)); 
	s1.show(); //The program should show the data of the objects, that is 5 10 and 20 30.

	Shop<CD> s2;
	s2.add(CD("Music_1")); //The s2 object is stored in s2.v
	s2.add(CD("Music_2"));
	s2.show(); //The program should show the data of the objects, that is Music_1 and Music_2.

	return 0;
}

Note:
The exercises are not mine, only the solution. They are part of the book "C++ from theory to practice" written by G. S. Tselikis.
