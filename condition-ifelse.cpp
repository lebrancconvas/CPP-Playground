#include <iostream>

int main()
{
	int balance = 100;
	int kapraoprice = 50;
	int kapraoamount = 3;
	int totalprice = kapraoprice * kapraoamount;

	if(balance >= totalprice)
	{
		balance -= totalprice;
		std::cout << "Purchased Success!!\nBalance: " << balance << std::endl;
	}
	else
	{
		std::cout << "Purchaed Failed!!\nPlease Chack your account." << std::endl;
	}
}