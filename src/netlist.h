/****************************************
Authors: Justin Siekmann, Anthony Ciancio
NetIDs : jsiekmann, shjay
Date : 25 October, 2016
Assignment #2

Netlist.h
*****************************************/
#include <vector>

#include "Connector.h"
#include "Logic.h"

class Netlist {
	public:
		//Get
		std::vector<Connector*> get_inputs() { return this->inputs; }
		std::vector<Connector*> get_outputs() { return this->outputs; }
		std::vector<Connector*> get_wires() { return this->wires; }
		std::vector<Connector*> get_registers() { return this->registers; }
		std::vector<Logic*> get_logics() { return this->logics; }
		//Add
		//Remove
	private:
		std::vector<Connector*> inputs;
		std::vector<Connector*> outputs;
		std::vector<Connector*> wires;
		std::vector<Connector*> registers;
		std::vector<Logic*> logics;
};