#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

using namespace std;

class Item{
private:
	string cor;
	string local;
public:
	Item();
	Item(string cor, string local);
	string getCor();
	string getLocal();
	void setCor(string cor);
	void setLocal(string local);
};

#endif
