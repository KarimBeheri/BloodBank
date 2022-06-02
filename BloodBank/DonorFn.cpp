#include "DonorFn.h"
#include <vector>
#include <fstream>
#include<iostream>
#include"DonorUI.h"
using namespace std;

void DonorFn::DeleteDonor(string username1 , string password1)
{

	int tmp = 0;
	bool success = false;
	bool b = false;

	//Read form Donor file
	ifstream DonorFile;
	vector<string> DonorData;
	DonorFile.open("Donor.txt");
	if (DonorFile.is_open())
	{
		string line;
		// Read all lines from the given Text File
		while (getline(DonorFile, line))
		{
			string value;
			istringstream   linestream(line);
			// Split every line into values "Name,Username ...."
			while (getline(linestream, value, ','))
			{
				DonorData.push_back(value);

			}
		}
		//Check if the entered username is correct or not
		for (int j = 1; j < DonorData.size(); j = j + 10) {
			if (DonorData.at(j) == username1) {
				if (DonorData.at(j + 2) == password1) {
					success = true;
					tmp = j;
					break;
				}
			}
		}

		b = success;
		if (success == true) {
			remove("Donor.txt");
			remove("DonorLogIn.txt");
			remove("DonorUsernames.txt");

			for (int j = 0; j < 10; j++) {
				DonorData.erase(DonorData.begin() + tmp - 1);
			}

			ofstream edit;
			edit.open("Donor.txt", ios::app);
			for (int i = 0; i < DonorData.size(); i++) {
				if (i % 10 != 9 || i == 0) {
					edit << DonorData.at(i) << ",";
				}
				else {
					edit << DonorData.at(i);
					edit << "\n";
				}
			}

			ofstream usern;
			usern.open("DonorUsernames.txt", ios::app);
			for (int i = 1; i < DonorData.size(); i += 10) {
				usern << DonorData.at(i) << "\n";
			}
			ofstream loginn;
			loginn.open("DonorLogIn.txt", ios::app);
			for (int i = 1; i < DonorData.size(); i += 10) {
				loginn << DonorData.at(i) + "," + DonorData.at(i + 2) << "\n";
			}


			loginn.close();
			edit.close();
			usern.close();
			DonorData.clear();
		}
	}
}

void::DonorFn::editDonor(vector<string>& ArrDonorData){
	ofstream edit;
	edit.open("Donor.txt", ios::app);
	for (int i = 0; i < ArrDonorData.size(); i++) {
		if (i % 10 != 9 || i == 0) {
			edit << ArrDonorData.at(i) << ",";
		}
		else {
			edit << ArrDonorData.at(i);
			edit << "\n";
		}
	}

	ofstream usern;
	usern.open("DonorUsernames.txt", ios::app);
	for (int i = 1; i < ArrDonorData.size(); i += 10) {
		usern << ArrDonorData.at(i) << "\n";
	}

	ofstream loginn;
	loginn.open("DonorLogIn.txt", ios::app);
	for (int i = 1; i < ArrDonorData.size(); i += 10) {
		loginn << ArrDonorData.at(i) + "," + ArrDonorData.at(i + 2) << "\n";
	}


	loginn.close();
	edit.close();
	usern.close();
	ArrDonorData.clear();

}