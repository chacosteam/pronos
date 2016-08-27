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
		storage(string f, string u): folder(f), uid(u)
		{
		}
		string getfolder() const;
		string getuid() const;
		//void moveTo(string);
};

#endif
