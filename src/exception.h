#ifndef H_EXCEPTI0N
#define	H_EXCEPTION

#include <stdexcept>

using namespace std;

struct dataset_exception : public exception { };
struct datafile_exception : public exception { };

#endif
