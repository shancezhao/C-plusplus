/*
 * WriteCSV.cpp
 *
 *  Created on: Mar 21, 2018
 *      Author: zhaos
 */

#include "WriteCSV.h"
using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

WriteCSV::WriteCSV() {
	// TODO Auto-generated constructor stub

}

WriteCSV::~WriteCSV() {
	// TODO Auto-generated destructor stub
}

void WriteCSV::writeE() {
	ofstream outFile;

	outFile.open("./employee.csv", ios::out);
	cout << "\tStart write Employee.. " << endl;
	outFile << "first name" << ',' << "last name" << ',' << "age" << ','
			<< "wage" << endl;
	outFile << "Mike" << ',' << "Smith" << ',' << "28" << ',' << "8000" << endl;
	outFile << "Yusuf" << ',' << "Obecka" << ',' << "38" << ',' << "10500.5"
			<< endl;
	outFile << "Hong" << ',' << "Xiao" << ',' << "25" << ',' << "3000" << endl;
	outFile << "Yue" << ',' << "Liu" << ',' << "30" << ',' << "8700" << endl;
	outFile.close();
}

vector<vector<string> > WriteCSV::readE() {

	ifstream inFile("employee.csv", ios::in);
	string lineStr;
	vector<vector<string> > strArray;

	while (getline(inFile, lineStr)) {
		stringstream ss(lineStr);
		string str;
		vector<string> lineArray;
		while (getline(ss, str, ','))
			lineArray.push_back(str);
		strArray.push_back(lineArray);
	}
	return strArray;
}

void WriteCSV::writeB() {
	ofstream outFile;
	outFile.open("book.csv", ios::out);
	cout << "\tStart write Book.. " << endl;
	outFile << "itemNumber" << ',' << "name" << ',' << "price" << ',' << "isbn"
			<< endl;
	outFile << "1" << ',' << "Pride And Prejudice" << ',' << "30" << ','
			<< "12345" << endl;
	outFile << "2" << ',' << "Harry Potter" << ',' << "50" << ',' << "22222"
			<< endl;
	outFile << "3" << ',' << "I Contain Multitudes" << ',' << "20" << ','
			<< "39876" << endl;
	outFile << "4" << ',' << "Andersen's Fairy Tales" << ',' << "15" << ','
			<< "47523" << endl;
	outFile << "5" << ',' << "C++ Primer Plus" << ',' << "50" << ','
				<< "47523" << endl;
	outFile.close();
}

vector<vector<string> > WriteCSV::readB() {

	ifstream inFile("book.csv", ios::in);
	string lineStr;
	vector<vector<string>> strArray;
	while (getline(inFile, lineStr)) {
		stringstream ss(lineStr);
		string str;
		vector<string> lineArray;
		while (getline(ss, str, ','))
			lineArray.push_back(str);
		strArray.push_back(lineArray);
	}
	return strArray;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
