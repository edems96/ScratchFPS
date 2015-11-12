#ifndef CLIENT_H
#define CLIENT_H

#include "types.h"

class Client {
	
	private:
		// static uint ID; // ?
		uint
			id,
			kills,
			deaths;
			
	public:
		Client();
		~Client();
		
		uint getKills();
		uint getDeaths();
}

#endif