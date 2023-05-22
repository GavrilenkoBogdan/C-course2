#include <iostream>
using namespace std;
class ShopItemOrder {
public:
	string name;
	double price ;
	double quan;
	void print();
	void get();
	double fullPrice();
	void set(string setName, double setPrice, int setQuan);
	ShopItemOrder(string setName,double setPrice,int setQuan) {
		set(setName,setPrice,setQuan);
	}
};
    void ShopItemOrder::set(string setName, double setPrice, int setQuan) {
		name = setName;
		price = setPrice;
		quan = setQuan;
	}
    void ShopItemOrder::get(){
		cout<<"Name: " << this-> name << " Price: "	<< this-> price << " Quantity: " << this-> quan << endl;
	}
    double ShopItemOrder::fullPrice(){
		return price * quan;
	}
    void ShopItemOrder::print() {
		cout << "Goods " + this -> name << ", quantity: " << this->quan << ", price for 1 " << this->price << "$, all price " << fullPrice()<<"$.";
	}
int main() {
	ShopItemOrder obj("Bread",40,12);
	//obj.name = "Pen";
	//obj.price = 10;
	//obj.quan = 10;
	obj.get();
	//obj.fullPrice();
	obj.print();
}