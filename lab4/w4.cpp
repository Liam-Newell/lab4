// Workshop 4 - Templates
// w4.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include "KVList.h"
template <typename K, typename V, int N>
void display(const std::string& msg, const KVList<K, V, N>& list, int w) {
	std::cout << msg;
	for (int i = 0; i < list.size(); i++)
		std::cout << std::setw(w) << list.key(i)
		<< " : " << list.value(i) << std::endl;
}
int main(int argc, char** argv) {
	if (argc != 1) {
		std::cerr << argv[0] << ": too many arguments\n";
		return 1;
	}
	int width;
	bool keepreading;
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\nInventory\n=========\n";
	KVList <std::string, double, 5> inventory;
	std::string str;
	double price;
	keepreading = true;
	do {
		std::cout << "Product : ";