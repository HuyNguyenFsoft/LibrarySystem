#pragma once
#include <iostream>
#include <vector>
using std::string;
using std::vector;

struct listBookBorrow{
	int id;
	int quantity;
};

class user
{
private:
	vector<listBookBorrow> m_list_books_borrow;
	string m_name;
	int m_id;
public:
	void setId(int new_id);
	void setName(string new_name);
	int getId();
	string getName();
};

