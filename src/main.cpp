#include <iostream>
#include <stdexcept>
#include "storage.h"
#include "datafile.h"
#include "dataset.h"
#include "metadata.h"

int main()
{
	try {
		auto st = make_shared<storage> (storage("../data/leagues/1",""));
		datafile df (st, "teams");
		dataset ds = df.readNext();
		df.readNext();
		metadata md (st, ".metadata");
		md.readNext();
	} catch (exception &e) {
		cout << "Exception !" << endl;
	}
	return 0;
}
