#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "product.h"

using namespace std;
void AddProduct(vector<Product>& products) {
	string new_product;
	int quantity_new_product;
	double cost_new_product;

	cout << "Add product: ";
	getline(cin, new_product);
	cin.ignore(4092, '\n');
	cout << "Quantity: ";
	while(!(cin >> quantity_new_product))
	{
		cout << "Neteisiga ivestis. Iveskite skaiciu: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	}
	cout << "Cost: ";
	while(!(cin >> cost_new_product))
	{
		cout << "Neteisiga ivestis. Iveskite skaiciu: ";
		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	}

	products.push_back({ new_product, cost_new_product, quantity_new_product });
}
