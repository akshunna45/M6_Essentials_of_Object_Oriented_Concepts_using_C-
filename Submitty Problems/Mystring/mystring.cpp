/*
    Implement you code in this file and upload only this file to submitty
*/
#include "mystring.h"

mystring::mystring(){
    m_str = 0;
    m_len = 0;
}

mystring::mystring(const char* m_str){
    this->m_str = new char[strlen(m_str) + 1];
	strcpy(this->m_str, m_str);
}

mystring::mystring(const mystring &m_str){
    if (m_str.m_str) {
		this->m_str = new char[mystring::get_len() + 1];
		strcpy(this->m_str, m_str.m_str);
	}
	else {
		this->m_str = NULL;
	}
}

char* mystring::get_str(){
    return mystring::m_str;
}

size_t mystring::get_len(){
    if (m_str)
		return strlen(m_str);
	else
		return 0;
}

mystring mystring::operator+(const mystring &m_str){
    if (this->m_str == NULL) {
		*this = m_str;
		return *this;
	}
	else {
		char *temp;
		temp = new char[strlen(this->m_str) + strlen(m_str.m_str) + 1];
		strcpy(temp, this->m_str);
		strcat(temp, m_str.m_str);
		mystring mystr(temp);
		delete temp;
		return mystr;
	}
}

mystring& mystring::operator=(const mystring &m_str){
    if (this->m_str) {
		delete this->m_str;
		this->m_str = NULL;
	}
	if (m_str.m_str) {
		this->m_str = new char[strlen(m_str.m_str) + 1];
		strcpy(this->m_str, m_str.m_str);
	}
	return *this;
}

int mystring::operator==(const mystring &m_str){
    return (strcmp(this->m_str, m_str.m_str));
}

bool mystring::operator<(const mystring &m_str){
    if (strcmp(this->m_str, m_str.m_str) < 0) {
		return true;
	}
	return false;
}

bool mystring::operator>(const mystring &m_str){
    if(strcmp( this->m_str, m_str.m_str ) > 0){
        return true;
    }
    return false;
}

mystring& mystring::operator+=(const mystring &m_str){
    *this = *this + m_str;
    return *this;
}

mystring& mystring::operator+=(const char* str){
    *this = *this + mystring(str);
    return *this;
}

mystring::~mystring(){
    delete[] m_str;
}
