#include "datafile.h"
#include "dataset.h"

void
datafile::open()
{
	is.open(datastore.get()->getFolder()+"/"+name);
}

dataset
datafile::readNext()
{
	dataset ds;

	return ds;
}
