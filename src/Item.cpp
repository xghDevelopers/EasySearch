#include "Item.hpp"

using namespace std;

Item::Item(){
	cor = "#000";
	local = "";
}

Item::Item(string cor, string local){
	this->cor = cor;
	this->local = local;
}

string Item::getCor(){
	return this->cor;
}

string Item::getLocal(){
	return this->local;
}

void Item::setCor(string cor){
	this->cor = cor;
}

void Item::setLocal(string local){
	this->local = local;
}
