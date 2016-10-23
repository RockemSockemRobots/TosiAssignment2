/****************************************
Authors: Justin Siekmann, Anthony Ciancio
NetIDs : jsiekmann, shjay
Date : 25 October, 2016
Assignment #2

Netlist.cpp
*****************************************/
#include "Netlist.h"

Netlist::Netlist(std::string inputFile) {
	Netlist::readIn(inputFile);
}

void Netlist::readIn(std::string inputFile) {
	std::ifstream inFile;
	std::string line;
	std::string type_word;
	std::string sign_size_word;
	std::string name_word;
	
	inFile.open(inputFile);
	while (std::getline(inFile,line)) {
		line.erase(std::remove(line.begin(), line.end(), ','), line.end());
		std::stringstream line_stream(line);
		line_stream >> type_word;
		if (type_word == "input" || type_word == "output" || type_word == "wire" || type_word == "register") {
			line_stream >> sign_size_word;
			std::size_t pos = sign_size_word.find_first_of("t");
			std::string sign_word = sign_size_word.substr(0,(pos+1));
			bool sign = !(sign_word.find('U'));
			std::string size_word = sign_size_word.substr((pos+1),sign_size_word.length());
			while (line_stream >> name_word) {
				if (type_word == "input") {
					this->inputs.push_back(new Connector(type_word, sign, size_word, name_word));
				}
				else if (type_word == "output") {
					this->outputs.push_back(new Connector(type_word, sign, size_word, name_word));
				}
				else if (type_word == "wire") {
					this->wires.push_back(new Connector(type_word, sign, size_word, name_word));
				}
				else if (type_word == "register") {
					this->registers.push_back(new Connector(type_word, sign, size_word, name_word));
				}
			}
			//type_word = ""; sign_size_word = ""; name_word = ""; pos = 0; sign_word = ""; size_word = "";
		}
		else {

		}
	}

	inFile.close();
}

void Netlist::writeOut(std::string outputFile) {
	std::ofstream outFile;
	outFile.open(outputFile);


	outFile.close();
}