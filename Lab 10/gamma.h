#ifndef gamma_H
#define gamma_H

#include <iostream>

using namespace std;

class gamma{
	private:
		int id;
		static int total;
	public:
		gamma();
	    ~gamma();
	    static void showtotal();
	    void showid();
};

int gamma::total = 0;
#endif
