#ifndef H_DATAFILE
#define	H_DATAFILE

#include <string>
#include "storage.h"
#include "dataset.h"

using namespace std;

class datafile
{
	private:
		string name;
		char field_sep;
		char line_sep;

	public:
		datafile(shared_ptr<storage> s, string n, char f='\t', char l='\n'):
			name(n), field_sep(f), line_sep(l)
		{
		}
		void readNext(dataset);
};

#endif
