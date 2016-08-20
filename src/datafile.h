#ifndef H_DATAFILE
#define	H_DATAFILE

#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include "storage.h"
#include "dataset.h"

using namespace std;

class datafile
{
	private:
		shared_ptr<storage> datastore;
		string name;
		char field_sep;
		char line_sep;

		ifstream is;
		vector<dataset> lines;

	public:
		datafile(shared_ptr<storage> s, string n, char f='\t', char l='\n'):
			datastore(s), name(n), field_sep(f), line_sep(l)
		{
		}
		~datafile()
		{
			if (is.is_open())
				close();
		}
		void open();
		void close();
		dataset readNext();
		void addData(dataset);
		void modifyData(dataset);
};

#endif
