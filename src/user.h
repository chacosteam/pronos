#ifndef	H_USER	
#define	H_USER

#include <string>

using namespave std;

class user
{
	private:
		string id;
		string email;
		string password;
		string username;

	public:
		user(string _id, string _email = "", string _password = "", string _username = ""): id(_id),  email(_email), password (_password), username (_username)
		{
		}
		void setId(string);
		void setIdentity(string, string, string);
		string getId();
		string getEmail();
		string getPassword();
		string getUsername();
};

#endif

