#include<iostream>
#include"Author.h"
using namespace std;
book::book(int authorid,string name,string bname,double no_bookpublish,double total_bookshell)
{
	this->authorid=authorid;
	this->name=name;
	this->bname=bname;
	this->no_bookpublish=no_bookpublish;
	this->total_bookshell=total_bookshell;
}

string book::getbname()
{
	return bname;
}

double book::bookpublish()
{
	return bookpublish;
}
