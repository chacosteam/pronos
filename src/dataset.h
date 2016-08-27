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


	public:
	dataset()
	{
		fields.clear();
	}

	dataset(string s, char sep='\t'): dataset()
	{
		parsedata(s, sep);
	}

	void parsedata(string s, char sep='\t');
	size_t count();
	void readstring(string&);
	void readint(int&);
};

#endif
