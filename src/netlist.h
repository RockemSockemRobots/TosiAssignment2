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

		std::vector<Connector*> createCompInputs(std::string input1, std::string input2 = "", std::string input3 = "");
		std::vector<Connector*> createCompOutputs(std::string input1, std::string input2 = "", std::string input3 = "");
		Connector* findName(std::vector<Connector*> vector, std::string name);
		bool checkSign(std::vector<Connector*> inputs, std::vector<Connector*> outputs);
		std::vector<std::string> getSizes(std::vector<Connector*> vector);
		std::string connectorsOfSize(std::vector<Connector*> vector, std::string size);
		std::string compInstanceStr(Logic* logic);


		//Get
		std::vector<Connector*> get_inputs() { return this->inputs; }
		std::vector<Connector*> get_outputs() { return this->outputs; }
		std::vector<Connector*> get_wires() { return this->wires; }
		std::vector<Connector*> get_registers() { return this->registers; }
		std::vector<Logic*> get_logics() { return this->logics; }
		//File input
		bool readIn(std::string inputFile);
		//File output
		void writeOut(std::string outputFile);
	private:
		std::vector<Connector*> inputs;
		std::vector<Connector*> outputs;
		std::vector<Connector*> wires;
		std::vector<Connector*> registers;
		std::vector<Logic*> logics;
		bool error;
		const double delayArray[12][6] = {
			{2.616,2.644,2.879,3.061,3.602,3.966}, //REG
			{2.704,3.713,4.924,5.638,7.270,9.566}, //ADD
			{3.024,3.412,4.890,5.569,7.253,9.566}, //SUB
			{2.438,3.651,7.453,7.811,12.395,15.354}, //MUL
			{3.031,3.934,5.949,6.256,7.264,8.416}, //COMP
			{4.083,4.115,4.815,5.623,8.079,8.766}, //MUX2x1
			{3.644,4.007,5.178,6.460,8.819,11.095}, //SHR
			{3.614,3.980,5.152,6.549,8.565,11.220}, //SHL
			{0.619,2.144,15.439,33.093,86.312,243.233}, //DIV
			{0.758,2.149,16.078,35.563,88.142,250.583}, //MOD
			{1.792,2.218,3.111,3.471,4.347,6.200}, //INC
			{1.792,2.218,3.108,3.701,4.685,6.503}, //DEC
		};
};

#endif