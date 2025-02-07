class Vehicle{
    private:
    string manufacturer;
    int year;
    string color;


    public ://kapsülleme
      string getManufacturer(){//get
        return manufacturer;
      }  

      //set
      void setManufacturer(string value){
        manufacturer = value;
      }

      int getYear(){
        return year;
      }

      void setYear(int value){
           year = value;
      }

       string getColor(){//get
        return color;
      }  

      //set
      void setColor(string value){
        color = value;
      }

      //kurucu metot
      Vehicle(){
        cout << "\nAn instance has been derived grom Vehicle.";
      }

      Vehicle(string manufacturer, int year, string color) : Vehicle(){
        
       this->manufacturer = manufacturer;
       this->year = year;
       this->color = color;
      }

      void start()
      {
        cout << "Vehicle has been started." << endl;
      }

      void stop()
      {
        cout << "Vehicle has been stopped." << endl;
      }

      void drive()
      {
        cout << "Vehicle is drivine..." << endl;
      }
};

class Car : Vehicle
{
public:
Car()
{
    cout<< "\nAn instance has been derived from Car."<< endl;
}
void openSunroof()
{
    cout<< "The sunroof has been opened. "<< endl;
}

};

int main (){
    Car item1 = Car();
    item1.setManufacturer("TOGG");
    cout<< "Vehicle " << item1.getManufacturer() << endl;

    Vehicle item2 = Vehicle("Skoda",2019,"Red");
    cout<< "Vehicle " << item2.getManufacturer() << endl;


    char c = getchar();//program hemen kapanmayacak. c# taki console.read e karşılık gelir.
    return 0;
}