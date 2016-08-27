#include "dataset.h"
#include "exception.h"

void
dataset::parsedata(string s, char sep)
{
	stringstream ss(s);
	string item;

	fields.clear();
	while(getline(ss, item, sep))
		fields.push_back(item);	
	it = fields.begin();
}

size_t
dataset::count()
{
	return fields.size();
}

void
dataset::readstring(string &value)
{
	if (it != fields.end()) {
		value = *it;
		it++;
	} else
		throw dataset_exception();
}

void
dataset::readint(int &value)
{
	if (it != fields.end()) {
		value = stoi(*it);
		it++;
	} else
		throw dataset_exception();

}
