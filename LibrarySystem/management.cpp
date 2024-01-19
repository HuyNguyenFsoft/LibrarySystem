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
		
		newBook.changeQuantity(number_of_new_book, ADD);
		newBook.setId(new_id);
		newBook.setName(new_name);
		m_list_books_by_id[new_id] = newBook;
		m_list_books_by_name[new_name] = newBook;
	}
}

void management::listingBook()
{
	int choice = -1;
	while (choice != 1 && choice != 2)
	{
		cout << "1. Listing all books by name" << endl;
		cout << "2. Listing all books by id" << endl;
		cout<<"Enter your choice (1 or 2): "<<endl;
		cin >> choice;
	}
	if (choice == 1)
	{
		cout << "\n";
		cout << "List all books by name: \n";
		for (auto it = m_list_books_by_name.begin(); it != m_list_books_by_name.end(); it++)
		{
			cout << it->first << " "<<it->second.getQuantity();
		}
	}
	else if (choice == 2)
	{
		cout << "\n";
		cout << "List all books by id: \n";
		for (auto it = m_list_books_by_id.begin(); it != m_list_books_by_id.end(); it++)
		{
			cout << it->first << " " << it->second.getQuantity();
		}
	}
}

void management::addUser()
{
	user newUser;
	int new_id;
	cout << "Enter id of the user: ";
	cin >> new_id;
	if (m_list_users.find(new_id) != m_list_users.end())
	{
		cout << "This user is already existed.\n";
		return;
	}
	else
	{
		string new_name;
		cout << "Enter name of the new user: ";
		cin >> new_name;
		newUser.setId(new_id);
		newUser.setName(new_name);
		cout << endl;
		m_list_users[new_id] = newUser;
	}
}

void management::borrowBook()
{
	int new_id;
	cout << "Enter id of the user: ";
	cin >> new_id;
	if (m_list_users.find(new_id) != m_list_users.end())
	{
		int book_id;
		int quantity;
		cout << "Enter id of the book: ";
		cin >> book_id;
		cout << endl;
		if (m_list_books_by_id.find(book_id) == m_list_books_by_id.end())
		{
			cout << "This book id is not exist in library\n";
			return;
		}
		cout << "Enter quantity: ";
		cin >> quantity;
		while (quantity > m_list_books_by_id[new_id].getQuantity())
		{
			cout << "The remain number of this book is not enough. Please re-enter the quantity: ";
			cin >> quantity;
			cout << endl;
		}
		if (quantity <= m_list_books_by_id[new_id].getQuantity())
		{
			m_list_books_by_id[new_id].changeQuantity(quantity, BORROW);
			cout << "User " << m_list_users[new_id].getName() << " has borrow " << quantity << " books of " << m_list_books_by_id[new_id].getName() << endl;
		}
	}
	else
	{

	}


}
