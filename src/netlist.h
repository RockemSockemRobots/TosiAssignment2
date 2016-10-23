/****************************************
Authors: Justin Siekmann, Anthony Ciancio
NetIDs : jsiekmann, shjay
Date : 25 October, 2016
Assignment #2

Netlist.h
*****************************************/
#ifndef NETLIST_H
#define NETLIST_H

#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

//file inout
#include <iostream>
#include <fstream>

#include "Connector.h"
#include "Logic.h"

class Netlist {
	public:
		//Constructor
		Netlist(std::string inputFile);
		//Get
		std::vector<Connector*> get_inputs() { return this->inputs; }
		std::vector<Connector*> get_outputs() { return this->outputs; }
		std::vector<Connector*> get_wires() { return this->wires; }
		std::vector<Connector*> get_registers() { return this->registers; }
		std::vector<Logic*> get_logics() { return this->logics; }
		//Add
		//Remove
		//File input
		void readIn(std::string inputFile);
		//File output
		void writeOut(std::string outputFile);
	private:
		std::vector<Connector*> inputs;
		std::vector<Connector*> outputs;
		std::vector<Connector*> wires;
		std::vector<Connector*> registers;
		std::vector<Logic*> logics;
};

#endif