#include "book.h"

void book::enterBookInfo()
{
	int id;
	cout << "Enter id of the book: ";
	cin >> id;
	m_id = id;
	string name;
	unsigned int quantity;
	cout << "Enter name of the book: ";
	cin >> name;
	m_name = name;
	cout << endl;
	cout << "Enter quantity: ";
	cin >> quantity;
	m_quantity = quantity;
	cout << endl;
}

void book::setName(string name)
{
	m_name = name;
}

void book::setId(int id)
{
	m_id = id;
}

void book::changeQuantity(int number)
{
	m_quantity += number;
}

int book::getId()
{
	return m_id;
}

string book::getName()
{
	return m_name;
}

unsigned int book::getQuantity()
{
	return m_quantity;
}
