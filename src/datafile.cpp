#include <iostream>
#include <fstream>
#include "datafile.h"
#include "dataset.h"
#include "exception.h"

void
datafile::open()
{
	lines.clear();
	try {
		is.open(datastore.get()->getfolder()+"/"+name);
	} catch (exception &e) {
		throw datafile_exception();
	}
}

void
datafile::close()
{
	is.close();
}

dataset
datafile::readNext()
{
	dataset ds;
	string str;

	getline(is, str, line_sep);
	ds.parsedata(str, field_sep);
	lines.push_back(ds);

	return ds;
}

void
datafile::addData(dataset ds)
{
	lines.push_back(ds);
}
