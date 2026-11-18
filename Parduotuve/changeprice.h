#include <iostream>
#include <vector>
using namespace std;
void changePrice (std::vector<Product>& products) {
    int i, j;
    double newprice;
    cout << endl << "Produkto numeris: ";
    cin >> i;
    cout << "Nauja produkto kaina: ";
    cin >> newprice;
    products[i-1].price = newprice;
}