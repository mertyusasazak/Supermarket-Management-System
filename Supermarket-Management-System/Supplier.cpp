#include <iostream>
#include <string>
#include "Supplier.h"

using namespace std;

Supplier::Supplier(string sName, B sPhone, string sCity, int dTimeDay) 
{
	supplierName = sName;
	supplierPhone = sPhone;
	supplierCity = sCity;
	deliveryTimeDay = dTimeDay;
	
}

	void Supplier::setSupplierName(string sName)
	{
		if(sName.size()<=20)
		{
		supplierName = sName;
		}
		else
		{
		supplierName = sName.substr(0,20);
		cerr<<"Name "<<sName<<" exceeds 20 characters. Thus, program takes only first 20 characters as supplier name."<<endl;
		}
	}
	
	void Supplier::setSupplierPhone(B sPhone)
	{
		if(sPhone < 1000000)
		{
			cerr<<"Phone number must be 7 digits or more. Please enter again:"<<endl;
			cin>>sPhone;
			cout<<endl;
		}
		else
		{
			supplierPhone = sPhone;
		}
	}
	
	void Supplier::setSupplierCity(string sCity)
	{
		if(sCity = "")
		{
			cerr<<"City section cannot be left blank. Please enter a city:"<<endl;
			cin>>sCity;
			cout<<endl;
		}
		else
		{
			supplierCity = sCity;
		}
	}
	
	void Supplier::setSupplierDeliveryTimeDay(int dTimeDay)
	{
		if(dTimeDay <= 0 )
		{
			cerr<<"Delivery day time cannot be 0 or less. Please enter a valid number:"<<endl;
			cin>>dTimeDay;
			cout<<endl;
		}
		else
		{
			deliveryTimeDay = dTimeDay;
		}
	}
	
	void Supplier::setSupplierDeliveryTimeDay(double dTimeDay)
	{
		if(dTimeDay <= 0 )
		{
			cerr<<"Delivery day time cannot be 0 or less. Please enter a valid number:"<<endl;
			cin>>dTimeDay;
			cout<<endl;
		}
		else
		{
			deliveryTimeDay = dTimeDay;
		}
	}
	
	string Supplier::getSupplierName() const
	{
		return supplierName;
	}
	
	B Supplier::getSupplierPhone() const
	{
		return supplierPhone;
	}
	
	string Supplier::getSupplierCity() const
	{
		return supplierCity;
	}
	
	int Supplier::getSupplierDeliveryTimeDay() const
	{
		return deliveryTimeDay;
	}
	
	double Supplier::getSupplierDeliveryTimeDay() const
	{
		return deliveryTimeDay;
	}
	
	ostream& operator<<(ostream& os, const Supplier& supplier) 
	{		
		os<<"Supplier Name: "<<supplier.getSupplierName()<<endl;
		os<<"Supplier Phone: "<<<supplier.getSupplierPhone()<<endl;
		os<<"Supplier City: "<<<supplier.getSupplierCity()<<endl;
		os<<"Supplier Delivery Time (Day): "<<<supplier.getSupplierDeliveryTimeDay()<<endl;
		os<<endl;
		
		return os;
	}
	
	Supplier::~Supplier()
	{
		
	}
	
	
	
	
