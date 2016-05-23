//Ns umair nadeem
//mts 37 B
//8040

#include <iostream>
using namespace std;

class energycrisis
{
private:
	bool loadshedding;
	int powerprod;
	bool bill_pay;
	bool economy;
public:
	void powerproduction (int answer)
	{
		powerprod = answer;
		if (powerprod > 5000)
		{
			cout << "Country has sufficient power" << endl;
		}
		else
			cout << "country needs more power stations" << endl;
	}

	void loadsheddingP (bool answer)
	{
		loadshedding = answer;
		if (answer == 1)
		{
			cout << "Govt SHould generate more power" << endl;
		}
		else
			cout << "Sufficient energy" << endl;

	}

	void billpayment (bool answer)
	{
		bill_pay = answer;
		if (bill_pay==1)
		{
			cout << "Country has sufficient funds to generate power" << endl;
		}
		else
			cout << "Govt should take action to collect dues from public" << endl;
	}

	void country_eco (bool answer)
	{
		economy = answer;
		if (economy == 1)
		{
			cout << "Country can easily generate power stations" << endl;
		}
		else
			cout << "Country needs to improve economy" << endl;
	}
	
};

int main()
{
	energycrisis pakistan;
	int answer1;
	bool ans2, ans3, ans4;

	cout << "Enter 1 for yes, 0 for no" << endl;
	cout << " What Is the power production in killowaatts of country?" << endl;
	cin >> answer1 ;
	pakistan.powerproduction(answer1);
	
		cout << "Does loadshedding happen in country? " << endl;
	cin >> ans2 ;
	pakistan.loadsheddingP(ans2);

		cout << "Do people pay bills properly? " << endl;
	cin >> ans3 ;
	pakistan.billpayment(ans3);

		cout << "Is the economy of country stable? " << endl;
	cin >> ans4 ;
	pakistan.country_eco(ans4);

	return 0;
}