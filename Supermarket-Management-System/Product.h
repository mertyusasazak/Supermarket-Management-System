#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

template <class A>

class Product
{
	
	friend ostream& operator<<(ostream& os, const Product& product);
	public:	
		explicit Product(int pID = 1, string pName = "Vegetables", A pPrice = 5, int pAmount = 400, int eDateDay = 90);
		void setProductID(int pID);
		void setProductName(string pName);
		void setProductPrice(A pPrice);
		void setProductAmount(int pAmount);
		void setProductAmount(double pAmount);
		void setProductExpirationDateDay(int eDateDay);
		int getProductID() const;
		string getProductName() const;
		A getProductPrice() const;
		int getProductAmount() const;
		double getProductAmount() const;
		int getProductExpirationDateDay() const;
		~Product();
	
	private:	
		int productID;
		string productName;
		int productAmount;
		A productPrice;
		int expirationDateDay;
		
};

#endif
