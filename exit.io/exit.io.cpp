// exit.io.cpp : Defines the entry point for the console application.
// 15 minutes project time a day.

#include "stdafx.h"
#include <time.h>
#include <climits>
#include <string>
#include <iostream>

using namespace std;

void mayPrintUsageHelp(int argc, _TCHAR* argv[]){
	/*
	* io.exe [options] [parameters]
	* The default behavior io.exe [number] will return the status code specified by the number
	* Here are the possible options for the io command
	*   - "time" > this will return the current time as status code (ex: io.exe time)
	*   - "stdout [text]" > this will output the text to the standard console (ex: io.exe stdout "hello world") 
	*/

}
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
	case 3 :
		{
			wstring parameter(argv[1]);
			if (parameter.compare(_T("stdout")) == 0){
				wstring content(argv[2]);
				wcout << content << endl;
			}
		}
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
// later on make this support various output format
// allow dynamic text read-in and store to a db. keep track of the time inputed. (can create shortcut or isolated exe by calling (io createUniqueDbExe to make it simplier calling the command i.e. io createUniqueDbExe journal. then create standalone journal command. journal add text. journal view text. journal list all ids and etc)
// 
// 
// If no command prompt, prompt for help. (see symfony for input help)
int _tmain(int argc, _TCHAR* argv[])
{
	mayPrintUsageHelp(argc, argv);
	int returnStatus = choice(argc, argv);


	//return returnStatus;
	return returnStatus;
}

