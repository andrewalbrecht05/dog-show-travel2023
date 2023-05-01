#pragma once
#include <string>
#include<ostream>
using namespace std;
class datas
{

	//static const int year = 2023; 
public:
	datas(string country_name, string city_name, string date);
	datas(); 
	friend std::ostream& operator<<(std::ostream& os, const datas& str)
	{
		string s = str.country_name + " " + str.city_name;
		s += " " + str.date;
		os <<s;
		return os;
	}
	//data& operator=(const char* str);
	string Getcountry_name(const datas& str); 
	string Getcity_name(const datas& str);
	string Getdate(const datas& str);
private:
	string country_name;
	string city_name;
	string date;
	int day;
	int mounth;
};

