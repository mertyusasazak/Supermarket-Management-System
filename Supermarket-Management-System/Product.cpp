#include <iostream>
#include <string>
#include "Product.h"
#include "Supplier.h"

using namespace std;

Product::Product(int pID, string pName, A pPrice, int pAmount, int eDateDay)
{	
	productID = pID;
	productName = pName;
	productPrice = pPrice;
	productAmount = pAmount;
	expirationDateDay = eDateDay;
}

	void Product::setProductID(int pID)
	{
		if(pID > 0)
		{
			productID = pID;
		}
		else
		{
			cerr<<"Product ID can't be less than or equal to 0. Please enter a number that greater than 0:"<<endl;
			cin>>pID;
			cout<<endl;
		}
	}

	void Product::setProductName(string pName)
	{
		if(pName.size()<=20)
		{
		productName = pName;
		}
		else
		{
		productName = pName.substr(0,20);
		cerr<<"Name "<<pName<<" exceeds 20 characters. Thus, program takes only first 20 characters as product name."<<endl;
		}
	}
	
	void Product::setProductPrice(A pPrice)
	{
		if(pPrice > 0)
		{
			productPrice = pPrice
		}
		else
		{
			cerr<<"Product price can't be less than or equal to 0. Please enter a number that greater than 0:"<<endl;
			cin>>pPrice;
			cout<<endl;
		}
	}
	
	void Product::setProductAmount(int pAmount)
	{
		if(pAmount < 0)
		{
			cerr<<"Product amount can't be less than 0. Please enter a positive number:"<<endl;
			cin>>pAmount;
			cout<<endl;
		}
		else if (productAmount >= 0 && productAmount <= 300)
		{
			cout<<"Product stock should be renewed."<<endl;
			cout<<"Supplier info: "<<Supplier& s.displaySupplier()<<endl;
		}
		else
		{
			cout<<"No need to replenish product stock."<<endl;
			cout<<endl;
		}
	}
	
	void Product::setProductAmount(double pAmount)
	{
		if(pAmount < 0)
		{
			cerr<<"Product amount can't be less than 0. Please enter a positive number:"<<endl;
			cin>>pAmount;
			cout<<endl;
		}
		else if (productAmount >= 0 && productAmount <= 300)
		{
			cout<<"Product stock should be renewed."<<endl;
			cout<<"Supplier info: "<<Supplier& s.displaySupplier()<<endl;
		}
		else
		{
			cout<<"No need to replenish product stock."<<endl;
			cout<<endl;
		}
	}
		
	void Product::setProductExpirationDateDay(int eDateDay)
	{
		if(eDateDay > 0)
		{
			expirationDateDay = eDateDay;
		}
		else
		{
			cerr<<"You can't sell these products anymore because it's expired. You need to replenish stocks."<<endl;
		}
	}
	
	int Product::getProductID() const
	{
		return productID;
	}
	

	string Product::getProductName() const
	{
		return productName;
	}
	
	A Product::getProductPrice() const
	{
		return productPrice;
	}
	
	int Product::getProductAmount() const 
	{
		return productAmount;
	}
	
	double Product::getProductAmount() const 
	{
		return productAmount;
	}
	
	int Product::getProductExpirationDateDay() const
	{
		return expirationDateDay;
	}
	
	ostream& operator<<(ostream& os, const Product& product) 
	{		
		os<<"Product ID: "<<product.getProductID()<<endl;
		os<<"Product Name: "<<product.getProductName()<<endl;
		os<<"Product Price ($): "<<product.getProductPrice()<<endl;
		os<<"Product Amount: "<<product.getProductAmount()<<endl;
		os<<"Product Expiration Date (Day): "<<product.getProductExpirationDateDay()<<endl;
		os<<endl;
		
		return os;
	}

	Product::~Product()
	{
		
		
	}
	











