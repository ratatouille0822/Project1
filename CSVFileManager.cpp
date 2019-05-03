#include "CSVFileManager.h"

CSVFileManager::CSVFileManager()
{
}


CSVFileManager::~CSVFileManager()
{
}

void CSVFileManager::ReadCSVFiles(string file_path)
{
	string temp;
	ifstream i_file_stream;

	vector<string> titles;
	i_file_stream.open(file_path, ios::in);
	if (!i_file_stream.is_open())
	{
		perror("Failed Open");
	}

	//xxx,xxx,xxx,xxx /r
	while (1)
	{
		i_file_stream >> temp;
		if (i_file_stream.eof())
			break;
		cout << temp << endl;
		StringTok(titles, temp);
	}

}

void CSVFileManager::StringTok(vector<string> titles, string info)
{
	int start = 0;
	int count = 0;
	while (1)
	{
		count = info.find(',', start);
		if (count == -1)
		{
			titles.push_back(info.substr(start, info.size()-start));
			break;
		}
		titles.push_back(info.substr(start, count-start));
		start = count + 1;
	}
}
