#include "Header.h"

bool IsDouble(const std::string str)
{
	if (str == " ") 
	{
		return false; 
	}
	for (int i = 0; i < str.size(); i++) 
	{
		if (!isdigit(str[i]) && str[i] != '/') 
		{
			return false; 
		}
	}
	return true; 
}