#ifndef H_METADATA
#define	H_METADATA

#include "datafile.h"

class metadata: public datafile
{
	public:
		metadata(shared_ptr<storage> s, string n): datafile(s,n,'=','\n')
		{
			
		}
};

#endif
