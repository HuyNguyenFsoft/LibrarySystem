#pragma once
#include <iostream>
#include <vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
class book
{
private:
	vector<int> m_list_user_id;
	string m_name;
	unsigned int m_quantity;
	int m_id;
public:
	string getName();
	int getId();
	unsigned int getQuantity();
	void enterBookInfo();
	void changeQuantity(int number);
	void setName(string name);
	void setId(int id);

};

