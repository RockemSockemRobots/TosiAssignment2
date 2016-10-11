/****************************************
Authors: Justin Siekmann, Anthony Ciancio
NetIDs: jsiekmann, shjay
Date: 25 October, 2016
Assignment #2

Connector.h
*****************************************/
#include <string>

class Connector{
	public:
		//Get
		std::string get_type() { return this->type; }
		std::string get_name() { return this->name; }
		int get_size() { return this->size; }
		bool get_sign() { return this->sign; }
		float get_delay() { return this->delay; }
		//Set
		void set_type(std::string type) { this->type = type; }
		void set_type(std::string name) { this->name = name; }
		void set_type(int size) { this->size = size; }
		void set_type(bool sign) { this->sign = sign; }
		void set_type(float delay) { this->delay = delay; }
	private:
		std::string type;
		std::string name;
		int size;
		bool sign;
		float delay;
};