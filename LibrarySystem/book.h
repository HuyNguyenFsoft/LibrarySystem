#pragma once
#include <iostream>
#include <vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

#define ADD 0
#define BORROW 1
#define RETURN 2

struct listUserBorrow {
	int id;
	string name;
	int quantity;
};

class book
{
private:
	vector<listUserBorrow> m_list_user_borrow;
	string m_name;
	unsigned int m_quantity;
	int m_id;
public:
	string getName();
	int getId();
	unsigned int getQuantity();
	void enterBookInfo();
	void changeQuantity(int number, int mode);
	void setName(string name);
	void setId(int id);

};

