#ifndef SUPPLIER_H
#define SUPPLIER_H
#include <string>
using namespace std;

template <class B>

class Supplier
{
	
	friend ostream& operator<<(ostream& os, const Supplier& supplier);	
	public:
		explicit Supplier(string sName = "John(Vegetables)", B sPhone = 4440226, string sCity = "Tokyo", int dTimeDay = 3);
		void setSupplierName(string sName);
		void setSupplierPhone(B sPhone);
		void setSupplierCity(string sCity);
		void setSupplierDeliveryTimeDay(int dTimeDay);
		void setSupplierDeliveryTimeDay(double dTimeDay);
		string getSupplierName() const;
		B getSupplierPhone() const;
		string getSupplierCity() const;
		int getSupplierDeliveryTimeDay() const;
		double getSupplierDeliveryTimeDay() const;
		~Supplier();
		
	private:
		string supplierName;
		B supplierPhone;
		string supplierCity;
		int deliveryTimeDay;
	
	
};

#endif



















