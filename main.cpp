 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */



/*
Thing 1) Dishwasher
5 properties:
    1) power consumption (double)
    2) input voltage (double)
    3) eco rating (EU) (int)
    4) amount of water used (int)
    5) capacity (int)
3 things it can do:
    1) wash disches
    2) inform the user when the job is compte
    3) lock the door
 */

struct Dishwasher
{
    double powerConsumption = 1200;
    double inputVoltage = 220;
    int ecoRating = 7;
    int amountWaterUsed = 10;
    int capacity = 10;

    struct Dish
    {
        std::string dirtiness = "dirty";
        int lenght = 10;
        int height = 10;
        std::string material = "glass";
        std::string hardness = "soft";

        void breakDown();
        void supportHeat(int temperature);
        void cookFood(std::string foodType);
    };

    void washDishes(Dish dish);
    void informUser();
    bool lockDoor();
};

/*
Thing 2) vaccum cleaner
5 properties:
    1) amount of kilograms for it's weight (int)
    2) the level of noise (int)
    3) the suction power (int)
    4) the lenght of the cord (int)
    5) Usability over both carpet and hard surfaces :-) (std::string)
3 things it can do:
    1) dust collect
    2) retract cord
    3) inform user when full
 */

struct VaccumCleaner
{
    int weight = 5;
    int noiseLevel = 100;
    int suctionPower = 1400;
    int cordLength = 2;
    std::string usability = "good";

    void dustCollect(int dustQuantity, int time);
    bool retractCord(int cordDistance);
    std::string informUserWhenFull();
};

/*
Thing 3) Bicycle
5 properties:
    1) number of gears (int)
    2) type (std::string)
    3) speed (int)
    4) cadence (std::string)
    5) color (std::string)
3 things it can do:
    1) cycle at a certain speed
    2) turn left or right
    3) break
 */

 struct Bicycle
 {
    int gear = 21;
    std::string type = "road bike";
    int speed = 5;
    std::string cadance = "normal";
    std::string color = "Red";

    struct Person
    {
        std::string firstName = "Bob";
        std::string lastName = "Sponge";
        int age = 14;

        bool useLeftFoot();
        bool useRightFoot();
        void listenMusic(std::string musicType);
    };

    void cycleAtSpeed(Person person, int speed);
    bool turn(Person person, std::string direction = "left");
    bool useBreak();
 };

/*
Thing 4) Truck
5 properties:
    1) number of axles (int)
    2) type of engine (std:string)
    3) color (std::string)
    4) speed limit (int)
    5) weight (double)
3 things it can do:
    1) fit trailer
    2) move a certain quantity of goods
    3) drive at a certain speed
 */

 struct Truck
 {
    int numberOfAxle = 4;
    std::string typeOfEngine = "diesel";
    std::string color = "Pink";
    int speedLimit = 90;
    double weight = 1530.00;

    void fitTrailer(std::string trailerType, int trailerLegnth);
    bool moveFood(int quantity);
    void drive(int speed, int distance);
 };

 /*
Thing 5) Keyboard
5 properties:
    1) Number of keys (int)
    2) key travelling distance (float)
    3) Amount of Power consumed (milliwatt-hours) (int)
    4) width in mm (int)
    5) height in mm (int)
3 things it can do:
    1) encode ASCII character
    2) send character signal
    3) connect to the motherboard
 */

 struct Keyboard
 {
    int numberOfKeys = 120;
    float travellingDistance = 1.35f;
    int power = 125;
    int width = 128;
    int height = 95;

    void encodeASCII(std::string character);
    bool sendCharacterSignal();
    bool connectToMotherBoard(std::string connectorType = "GPIO");
 };

/*
Thing 6) Display
5 properties:
    1) Number of Pixels (int)
    2) Amount of Power consumed (milliwatt-hours) (float)
    3) Brightness (double)
    4) width in cm (int)
    5) height in cm (int)
3 things it can do:
    1) display text
    2) regulate brightness
    3) connect to the motherboard
 */

struct Display
{
    int numberPixels = 1800;
    float powerConsumed = 180.f;
    double bightness = 70;
    int width = 250;
    int height = 100;

    void displayText(std::string text);
    bool regulatBrightness(int brightnessLevel);
    bool connectToMotherBoard(std::string connectorType = "HDMI");
};

/*
Thing 7) Bettery
5 properties:
    1) voltage (float)
    2) discharge time (double)
    3) capacity (double)
    4) power density (double)
    5) surface area in mm^2 (float)
3 things it can do:
    1) charge
    2) discharge
    3) monitor it's capacity
 */

 struct Battery 
 {
    float voltage = 4.7f;
    double dischargeTime = 5;
    double capacity = 150;
    double powerDensity = 4870;
    float surfaceArea = 150.75;

    void charge(int time);
    void discharge(int time);
    void monitorCapacity(bool inforUser = false);
 };

/*
Thing 8) Operating system
5 properties:
    1) number of multitaking operation (long)
    2) build number (str::string)
    3) version (str::string)
    4) name (str::string)
    5) provider (str::string)
3 things it can do:
    1) run application
    2) install application
    3) uninstall application
 */

 struct OperatingSystem
 {
    long numberOfConcurrentTask = 15785;
    std::string buildNumnber = "654f6";
    std::string version = "Apha 4";
    std::string name = "Windows";
    std::string provider = "Micro$oft";

    void runApplication(std::string applicationName);
    bool installApplication(std::string appName);
    bool uninstallApplication(std::string appName);
 };

/*
Thing 9) Memory
5 properties:
    1) capacity (int)
    2) access method (str::string)
    3) unit of transfer (str::string)
    4) lenght (int)
    5) performance (int)
3 things it can do:
    1) load data
    2) offload data
    3) access memory block
 */

struct Memory
{
    int capacity = 1524556;
    std::string accessMethod = "random access";
    std::string unitOfTransfer = "256 bits";
    int lenght = 100;
    int performance = 150;

    void loadData(int amountOfData);
    void offloadData(int amountOfData, bool writeToSWAP = false);
    int accessMemoryBlock(int blockLocation);
};

/*
Thing 10) Computer
5 properties:
    1) Keyboard
    2) Display
    3) Bettery
    4) Operating system
    5) Memory
3 things it can do:
    1) compile C++ code
    2) run productivity applications
    3) connect peripherals
 */

struct Computer
{
    Keyboard keyboard;
    Display display;
    Battery battery;
    OperatingSystem os;
    Memory memory;

    bool compileCode(int memorySize, std::string codeLanguage = "c++");
    bool runProductivityApp(std::string supportedOperatingSystem, std::string applicationName);
    bool connectPeripherals(std::string peripheralName);
};

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
