/****************************************
Authors: Justin Siekmann, Anthony Ciancio
NetIDs : jsiekmann, shjay
Date : 25 October, 2016
Assignment #2

Connector.cpp
*****************************************/
#include "Connector.h"

Connector::Connector(std::string type, bool sign, std::string size, std::string name) {
	this->type = type;
	this->size = size;
	this->name = name;
	this->sign = sign;
	this->delay = 0;
}
Connector::Connector() {
	this->type = "";
	this->size = "";
	this->name = "";
	this->sign = false;
	this->delay = 0;
}