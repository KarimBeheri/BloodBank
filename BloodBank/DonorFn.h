#pragma once

#include<iostream>
#include<vector>
#include"UserClass.h"

 class DonorFn : public UserClass{
 
public:

	std::string disease;
	std::string arr_disease;
	std::string last_Donation_date;

     void DeleteDonor(std::string username1, std::string password1);
	  void editDonor(std::vector<std::string>& ArrDonorData);
};

