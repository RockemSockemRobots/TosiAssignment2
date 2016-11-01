/****************************************
Authors: Justin Siekmann, Anthony Ciancio
NetIDs : jsiekmann, shjay
Date : 25 October, 2016
Assignment #2

Logic.cpp
*****************************************/
#include "Logic.h"

Logic::Logic(std::string type, std::string name, std::vector<Connector*> inputs, std::vector<Connector*> outputs, int dw, bool sign, float delay, std::string outType) {
	this->type = type;
	this->name = name;
	this->inputs = inputs;
	this->outputs = outputs;
	this->dw = dw;
	this->sign = sign;
	this->delay = delay;
	this->outType = outType;
}