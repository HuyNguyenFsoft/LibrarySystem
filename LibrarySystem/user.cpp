#include "user.h"

void user::setId(int new_id)
{
	m_id = new_id;
}

void user::setName(string new_name)
{
	m_name = new_name;
}

int user::getId()
{
	return m_id;
}

string user::getName()
{
	return m_name;
}