// stock20.h augmented version
# ifndef STOCK20_H_
#define STOC20K_H_
#include <string>
class Stock {
private:
	std::string company;
	int shares;
	double share_val;
	double totle_val;
	void set_tot() { totle_val = shares * share_val; }
public:
	Stock();  // default constructor
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock();	// do_nothing destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock & topval(const Stock & s) const;  //比较两只股票总量大小

};



#endif
