// stock20.cpp -- augmented version
#include <iostream>
#include "stock20.h"

// constructors 构造函数
Stock::Stock() {
	company = "no name";
	shares = 0;
	share_val = 0.0;
	totle_val = 0.0;
}

// 非默认构造函数
Stock::Stock(const std::string & co, long n, double pr) {
	company = co;

	if (n < 0) {
		std::cout << "number of shares can't be negative;" << company << " shares set to 0";
		shares = 0;
	}
	else
	{
		shares = n;
	}

	share_val = pr;
	set_tot();
}

// 析构函数
Stock:: ~Stock()	// do_nothing destructor
{

}

// other methods
void Stock::buy(long num, double price) {
	if (num < 0) {
		std::cout << "con't be negative";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num, double price) {
	using std::cout;
	if (num < 0) {
		cout << "con't be negative";
	}
	else if (num > shares)
	{
		cout << "you can't sell more than you have";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price) {
	share_val = price;
	set_tot();
}
void Stock::show() const {
	using std::cout;
	using std::ios_base;
	// 输出设为三位小数

	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "company: " << company << " shares: " << shares << '\n';
	cout << " shares price: $" << share_val;
	cout.precision(2);
	cout << "total worth:$ " << totle_val << '\n';
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);

}
const Stock & Stock::topval(const Stock & s) const  //比较两只股票总量大小
{
	if (s.totle_val > totle_val) {
		return s;
	}
	else
	{
		return *this;
	}
}

