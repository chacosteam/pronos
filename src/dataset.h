#ifndef H_DATASET
#define	H_DATASET

#include <vector>
#include <string>
#include <sstream>

using namespace std;

class dataset
{
	private:
	vector<string> fields;
	vector<string>::iterator it;

	void parsedata(string s, char sep='\t');

	public:
	dataset()
	{
		fields.clear();
	}

	dataset(string s, char sep='\t'): dataset()
	{
		parsedata(s, sep);
	}

	size_t count();
	void readstring(string&);
	void readint(int&);
};

#endif
