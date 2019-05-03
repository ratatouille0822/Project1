#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class CSVFileManager
{
public:
	CSVFileManager();
	~CSVFileManager();
	void ReadCSVFiles(string file_path);
	void StringTok(vector<string> titles, string info);
};