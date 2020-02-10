#pragma once
#pragma once
#include "Product.h"
#include<fstream>
#include<string>
#include<list>
#include<iostream>
using namespace std;

class Customer
{
	int cust_id;
	string cust_name;

public:
	list<Product> ProdList;
	void DisplayProductList();
	void AddToCart();
	void setCustId(int);
	void setCustName(string);
	int getCustId();
	string getCustName();
};

