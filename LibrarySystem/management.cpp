#include "management.h"

void management::addBook()
{
	book newBook;
	int new_id;
	cout << "Enter id of the book: ";
	cin >> new_id;
	if (m_list_books_by_id.find(new_id) != m_list_books_by_id.end())
	{
		cout << "This type of book is already in stock.\n";
		auto it = m_list_books_by_id.find(new_id);
		int number_of_new_book = -1;
		while (number_of_new_book <= 0)
		{
			cout << "Please enter number of new book (positive value): ";
			cin >> number_of_new_book;
			cout << endl;
		}
		it->second.changeQuantity(number_of_new_book);
	}
	else
	{
		string new_name;
		cout << "Enter name of the book: ";
		cin >> new_name;
		while (m_list_books_by_name.find(new_name) != m_list_books_by_name.end())
		{
			cout << "This name is already existed. Please re-enter the name: ";
			cin >> new_name;
			cout << endl;
		}

		int number_of_new_book = -1;
		while (number_of_new_book <= 0)
		{
			cout << "Please enter number of new book (positive value): ";
			cin >> number_of_new_book;
		}
		newBook.changeQuantity(number_of_new_book);
		newBook.setId(new_id);
		newBook.setName(new_name);
		m_list_books_by_id[new_id] = newBook;
		m_list_books_by_name[new_name] = newBook;
	}
}