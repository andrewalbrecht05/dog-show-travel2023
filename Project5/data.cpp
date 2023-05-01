#include "data.h"
datas::datas(string country_name, string city_name, string smth)
{
	this->country_name = country_name;
	this->city_name = city_name;
	this->date = smth; 
	this->day = std::stoi(smth.substr(0, smth.find('/')));
	this->mounth = std::stoi(smth.substr(smth.find('/') + 1, smth.rfind('/') - smth.find('/') - 1));
}

datas::datas()
{
	this->country_name = " ";
	this->city_name = " "; 
	this->date = " "; 
	this->day = 0; 
	this->mounth = 0; 
}

string datas::Getcountry_name(const datas& str)
{
	return this->country_name;
}

string datas::Getcity_name(const datas& str)
{

	return this->city_name;
}

string datas::Getdate(const datas& str)
{
	return this->date;
}

