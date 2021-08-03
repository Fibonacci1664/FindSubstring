#include<iostream>

int strStr(std::string haystack, std::string needle)
{
	// If needle is an emtpy string, return zero
	if (needle.empty())
	{
		return 0;
	}

	// Otherwise carry out search
	char* hay = &haystack[0];
	char* ndl = &needle[0];
	char* res = hay;
	int index = 0;

	res = std::strstr(hay, ndl);

	// If search result returns nullptr then we didn't find the needle,
	// i.e. the substring doesn't exist in the given string
	if (res == nullptr)
	{
		return -1;
	}

	// Otherwise the substring exists somewhere
	// Loop from start of string until we hit res, incrementing a counter as we go
	for (auto iter = hay; iter != res; ++iter)
	{
		++index;
	}

	return index;
}


int main()
{
	std::string haystk = "hello";
	std::string nedl = "ll";

	int subStringSize = strStr(haystk, nedl);

	std::cout << "Index pos where substring starts: [ " << subStringSize << " ]\n";

	return 0;
}