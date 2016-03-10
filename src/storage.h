#ifndef	H_STORAGE
#define	H_STORAGE

#include <string>

using namespace std;

class storage
{
	private:
		string folder;
		string uid;
	public:
		storage(string, string);
		string getFolder() const;
		string getUid() const;
		//void moveTo(string);
};

#endif
