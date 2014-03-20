// exit.io.cpp : Defines the entry point for the console application.
// 15 minutes project time a day.

#include "stdafx.h"
#include <time.h>
#include <climits>
#include <string>

using namespace std;

int choice(int argc, _TCHAR* argv[]){
	switch (argc){
	case 2 :
		{
			wstring parameter(argv[1]);
			if (parameter.compare(_T("time")) == 0){
				return time(NULL);// get the current time 
			} else {
				return _tstoi(argv[1]);
			}
		}
		break;
	default:
		break;
	}
	return 0;
}

// Future improvement create cache service and read file base on position and bits.
// IsExpireValue or countdown can be implemented with this program. 
// Seconds since last call for this method.
// Generating unique #s base on various random generation method
// Enable this to console / file / or status code
// generate content "i.e. losupum", "sequences of number". fetch number
// generate content base on random tempo by duration. to allow async testing.
// making calls to command. 
// notification to email.

// If no command prompt, prompt for help. (see symfony for input help)
int _tmain(int argc, _TCHAR* argv[])
{
	int returnStatus = choice(argc, argv);


	//return returnStatus;
	return returnStatus;
}

