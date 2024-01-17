#pragma once
#include <iostream>
#include "book.h"
#include "user.h"
#include <vector>
#include <map>
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::map;

class management {
private:
	map<int, book> m_list_books_by_id;
	map<string, book> m_list_books_by_name;
	map<int, user> m_list_users;
public:
	void addBook();
	void searching();
	void listingBook();
	void listingUsers();
	void borrowBook();
	void returnBook();
};

