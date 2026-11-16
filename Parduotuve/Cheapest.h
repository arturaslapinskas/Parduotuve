#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "Product.h"

inline void showCheapestProduct(const std::vector<Product>& products) {
    if (products.empty()) {
        std::cout << "Prekiu nera\n";
        return;
    }

    const Product* cheapest = &products[0];
    for (size_t i = 1; i < products.size(); i++) {
        if (products[i].price < cheapest->price) {
            cheapest = &products[i];
        }
    }

    std::cout << "Pigiausia preke: " << cheapest->name
        << " (" << std::fixed << std::setprecision(2) << cheapest->price << " EUR)\n";
}