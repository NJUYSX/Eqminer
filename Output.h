#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>

#include "Struct.h"
using namespace std;
class Output {
private:
	pair <string, string> ProgramPair;
	bool if_equal;
public:
	Output();
	Output(pair<string, string>ProPair, bool flag);
	void set_ProgramPair(const string& ProgramA, const string& ProgramB);
	void set_if_equal(const bool& flag);
	
	bool get_if_equal();
	pair<string, string> get_ProgramPair();

};

void Modifyfile();