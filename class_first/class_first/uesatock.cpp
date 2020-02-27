// useatock2.cpp --using the stock class

#include <iostream>
#include "stock20.h"
#include <cstdlib>
const int stks = 4;
int main() {
	// 创建数组对象
	Stock stock[stks] = {
		Stock("aaaaaa",12,12.0),
		Stock("bbbbbb",200,2.0),
		Stock("cccccc",130,3.25),
		Stock("dddddd",60,6.5)
	};

	std::cout << "stock holdings:\n";
	int st;
	for (st = 0; st < stks; st++) {
		stock[st].show();
	}

	const Stock * top = &stock[0];
	for (st = 1; st < stks; st++) {
		top = &top->topval(stock[st]);
	}

	std::cout << "\nmost valuable holding:\n";
	top->show();
	system("pause");
	return 0;
}