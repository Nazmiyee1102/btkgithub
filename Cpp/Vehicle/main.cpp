#include <iostream>
#include <string>

class Vehicle {
protected:
	string manufacturer;
	int year;
	string color;


public://kapsülleme
	string getManufacturer() {//get
		return manufacturer;
	}

	//set
	void setManufacturer(string value) {
		manufacturer = value;
	}

	int getYear() {
		return year;
	}

	void setYear(int value) {
		year = value;
	}

	string getColor() {//get
		return color;
	}

	//set
	void setColor(string value) {
		color = value;
	}

	//kurucu metot
	Vehicle() {
		cout << "\nAn instance has been derived grom Vehicle.";
	}

	Vehicle(string manufacturer, int year, string color) : Vehicle() {

		this->manufacturer = manufacturer;
		this->year = year;
		this->color = color;
	}

	virtual void start()
	{
		cout << "Vehicle has been started." << endl;
	}

	virtual void stop()
	{
		cout << "Vehicle has been stopped." << endl;
	}

	virtual void drive()
	{
		cout << "Vehicle is drivine..." << endl;
	}

	virtual string toString()
	{
		return manufacturer + "-" + to_string(year)+"-" + color;
	}
};

class Car : Vehicle
{
public:
	Car()
	{
		cout << "\nAn instance has been derived from Car." << endl;
	}

	Car(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color)
	{
		this->manufacturer = manufacturer;
		this->year = year;
		this->color = color;
	}

	void openSunroof()
	{
		cout << "The sunroof has been opened. " << endl;
	}

	void drive() override
	{
		cout << "The car manufacturer by " << this->manufacturer <<" is being driven." << endl;
	}

};

class Bus : public Vehicle
{
public:

	void scheduling()
	{
		cout << "The bus has been scheduled." << endl;
	}
	Bus(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color)
	{
		cout << "\nAn instance has been derived from Bus." << endl;
	}

	Bus(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color)
	{
		this->manufacturer = manufacturer;
		this->year = year;
		this->color = color;
	}

	void openDoor()
	{
		cout << "The door has been opened. " << endl;
	}

	void drive() override
	{
		cout << "The bus manufacturer by " << this->manufacturer << " is being driven." << endl;
	}


};

class SchoolBus : Bus
{
public: 
	SchoolBus(string manufacturer, int year, string color) : Bus(manufacturer, year, color)
	{
		cout << "\nAn instance with full parameters has been derived from SchoolBus." << endl;
	}
	
	void getFare()
	{
		cout << "getFare has been called." << endl;
	}

	void drive() override
	{
		cout << "The schoolbus manufacturer by " << this->manufacturer << " is being driven." << endl;
	}

};

int main() {
	Car item1 = Car();
	item1.setManufacturer("TOGG");
	cout << item1.toString() << endl;
	item1.openSunroof();
	item1.drive();
	item1.stop();

	Car item2 = Car("Skoda", 2019, "Red");
	cout << item2.toString() << endl;
	item2.openSunroof();
	item2.drive();
	item2.stop();

	Bus item3 = Bus("AnadoluIsuzu", 2016, "Red");
	cout << item3.toString() << endl;
	item3.scheduling();
	item3.drive();
	item3.stop();

	SchoolBus item4 = SchoolBus("Mercedes", 2015, "Yellow");
	cout << item4.toString() << endl;
	item4.scheduling();
	item4.getFare();
	item4.drive();
	item4.stop();


	char c = getchar();//program hemen kapanmayacak. c# taki console.read e karþýlýk gelir.
	return 0;
}