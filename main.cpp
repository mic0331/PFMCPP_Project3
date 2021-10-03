/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) do this for each class in this project: 
    initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable
    float b { 2.f }; // in-class initialization
    UDT() : a(0) { } // 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()


struct Dishwasher
{
    //Dishwasher();
    Dishwasher(int );

    double powerConsumption = 1200;
    double inputVoltage { 220 };
    int ecoRating = 7;
    int amountWaterUsed = 10;
    int capacity = 10;

    struct Dish
    {
        std::string dirtiness = "dirty";
        int length = 10;
        int height = 10;
        std::string material = "glass";
        std::string hardness = "soft";

        void breakDown();
        void supportHeat(int temperature);
        void cookFood(std::string foodType);
    };

    void washDishes(int time);
    void informUser();
    bool lockDoor();
};

Dishwasher::Dishwasher(int power) : powerConsumption (power)
{
    std::cout << "'Dishwasher' created" << std::endl;
}

void Dishwasher::washDishes(int time)
{
    std::cout << "Input voltage is " << inputVoltage << std::endl;
    std::cout << "clean dishes for some time " << time << std::endl;
}

void Dishwasher::informUser()
{
    std::cout << "Eco rating is " << ecoRating << std::endl;
    std::cout << "job finished !" << std::endl;;
}

bool Dishwasher::lockDoor()
{
    return true;
}

struct VaccumCleaner
{
    VaccumCleaner();
    
    int weight = 5;
    int noiseLevel = 100;
    int suctionPower = 1400;
    int cordLength = 2;
    std::string usability = "good";

    void collectDust(int dustQuantity, int time);
    bool retractCord(int cordDistance);
    std::string informUserWhenFull();
};

VaccumCleaner::VaccumCleaner()
{
    std::cout << "'VaccumCleaner' created" << std::endl;
}

void VaccumCleaner::collectDust(int dustQuantity, int time)
{
    std::cout << "usability " << usability << std::endl;
    if (dustQuantity != 0) 
    {
        dustQuantity -= 1;
        time -= 1;
    }
    std::cout << "collectDust" << std::endl;
}

bool VaccumCleaner::retractCord(int cordDistance)
{
    if (cordLength == 0) 
        return false;
    cordLength -= cordDistance;
    std::cout << "retractCord" << std::endl;
    return true;
}

std::string VaccumCleaner::informUserWhenFull()
{
    std::cout << "In'informUserWhenFull'" << std::endl;
    return "hello";
}

struct Bicycle
{
    Bicycle();

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

    void cycleAtSpeed(int speed);
    bool turn(std::string direction = "left");
    bool useBreak();
};

Bicycle::Bicycle()
{
    std::cout << "'Bicycle' created" << std::endl;
}

void Bicycle::cycleAtSpeed(int s)
{
    speed = s;
    std::cout << "Speed " << speed << std::endl;
    std::cout << "cycle at speed" << std::endl;
}

bool Bicycle::turn(std::string direction)
{
    direction = "neutral";
    std::cout << "turn" << std::endl;
    return true;
}

bool Bicycle::useBreak()
{
    std::cout << "useBreak" << std::endl;
    return true;
}

struct Truck
{
    Truck(int speedLimit, int weight);

    int numberOfAxle = 4;
    std::string typeOfEngine = "diesel";
    std::string color = "Pink";
    int speedLimit = 90;
    double weight = 1530.00;
    unsigned int y;

    void fitTrailer(std::string trailerType, int trailerLegnth);
    bool moveFood(int quantity);
    void drive(int speed, int distance);
};

Truck::Truck(int speed, int truckWeight) : speedLimit (speed), weight(truckWeight)
{
    std::cout << "'Truck' created" << std::endl;
}

void Truck::fitTrailer(std::string trailerType, int trailerLegnth)
{
    std::cout << "Type of engine " << typeOfEngine << std::endl;
    if (trailerType == "long" && trailerLegnth > 100)
        speedLimit = 50;
    std::cout << "fitTrailer" << std::endl;
    // do some other stuff ...
}

bool Truck::moveFood(int quantity)
{
    std::cout << "moveFood quantity " << quantity << std::endl;
    return true;
}

void Truck::drive(int speed, int distance)
{
    std::cout << "drive at " << speed << "for " << distance << std::endl;
}

struct Keyboard
{

    int numberOfKeys = 120;
    float travellingDistance = 1.35f;
    int power = 125;
    int width = 128;
    int height = 95;

    Keyboard() : power(300)
    {
        std::cout << "power " << power << std::endl;
        std::cout << "'Keyboard' created" << std::endl;
    }

    void encodeASCII(std::string character);
    bool sendCharacterSignal();
    bool connectToMotherBoard(std::string connectorType = "GPIO");
};

void Keyboard::encodeASCII(std::string character)
{
    if (character == "x")
        numberOfKeys = 250;
}

bool Keyboard::sendCharacterSignal()
{
    power += 1;
    std::cout << "sendCharacterSignal" << std::endl;
    return true;
}

bool Keyboard::connectToMotherBoard(std::string connectorType)
{
    std::cout << "connectToMotherBoard " << connectorType << std::endl;
    return true;
}

struct Display
{
    int numberPixels = 1800;
    float powerConsumed = 180.f;
    double bightness = 70;
    int width = 250;
    int height = 100;

    Display();

    void displayText(std::string text);
    bool regulateBrightness(double brightnessLevel);
    bool connectToMotherBoard(std::string connectorType = "HDMI");
};

Display::Display() : numberPixels {120} 
{
    std::cout << "Power consumed " << powerConsumed << std::endl;
    std::cout << "'Display' created" << std::endl;
}

void Display::displayText(std::string text) 
{
    std::cout << text;
    std::cout << "displayText" << std::endl;
}

bool Display::regulateBrightness(double brightnessLevel)
{
    bightness += brightnessLevel;
    std::cout << "regulateBrightness" << std::endl;
    return true;
}

bool Display::connectToMotherBoard(std::string connectorType)
{
    std::cout << "connectToMotherBoard " << connectorType << std::endl;
    return true;
}

struct Battery 
{
    Battery();

    float voltage = 4.7f;
    double dischargeTime = 5;
    double capacity = 150;
    double powerDensity = 4870;
    float surfaceArea = 150.75;

    void charge(int time);
    void discharge(int time);
    void monitorCapacity(bool informUser = false);
};
Battery::Battery()
{
    std::cout << "'Battery' created" << std::endl;
}

void Battery::charge(int time)
{
    std::cout << "Charge in " << time << std::endl;
}

void Battery::discharge(int time)
{
    dischargeTime -= 1;
    time -= 1;
    std::cout << "discharge" << std::endl;
}

void Battery::monitorCapacity(bool informUser)
{
    if (informUser)
        std::cout << "Regarded " << capacity << std::endl;
}

struct OperatingSystem
{
    OperatingSystem();

    long numberOfConcurrentTask = 15785;
    std::string buildNumnber = "654f6";
    std::string version = "Apha 4";
    std::string name = "Windows";
    std::string provider = "Micro$oft";

    void runApplication(std::string applicationName);
    bool installApplication(std::string appName);
    bool uninstallApplication(std::string appName);
};

OperatingSystem::OperatingSystem()
{
    std::cout << "'OperatingSystem' created" << std::endl;
}

void OperatingSystem::runApplication(std::string applicationName)
{
    std::cout << "provider " << provider << std::endl;
    std::cout << "Run : " << applicationName << std::endl;
}

bool OperatingSystem::installApplication(std::string appName)
{
    std::cout << "Install : " << appName << std::endl;
    return true;
}

bool OperatingSystem::uninstallApplication(std::string appName)
{
    std::cout << "Uninstall : " << appName << std::endl;
    return false;
}

struct Memory
{
    Memory();

    int capacity = 1524556;
    std::string accessMethod = "random access";
    std::string unitOfTransfer = "256 bits";
    int length = 100;
    int performance = 150;

    void loadData(int amountOfData);
    void offloadData(int amountOfData, bool writeToSWAP = false);
    int accessMemoryBlock(int blockLocation);
};

Memory::Memory()
{
    capacity = 12000;
    length = 90;
    std::cout << "'Memory' created" << std::endl;
}

void Memory::loadData(int amountOfData)
{
    std::cout << "accessMethod " << accessMethod << std::endl;
    std::cout << "Load data : " << amountOfData << std::endl;
}

void Memory::offloadData(int amountOfData, bool writeToSWAP)
{
    std::cout << "Offload data : " << amountOfData << " and in swap? " << writeToSWAP << std::endl;
}

int Memory::accessMemoryBlock(int blockLocation)
{
    std::cout << "Access memory block : " << blockLocation << std::endl;
    return capacity;
}


struct Computer
{
    Computer();

    Keyboard keyboard;
    Display display;
    Battery battery;
    OperatingSystem os;
    Memory memory;

    bool compileCode(int memorySize, std::string codeLanguage = "c++");
    bool runProductivityApp(std::string supportedOperatingSystem, std::string applicationName);
    bool connectPeripherals(std::string peripheralName);
};

Computer::Computer()
{
    std::cout << "'Computer' created" << std::endl;
}

bool Computer::compileCode(int memorySize, std::string codeLanguage)
{
    std::cout << "memory -> length :: " << memory.capacity << std::endl;
    std::cout << "Compile code for " << codeLanguage << " of size " << memorySize << std::endl;
    return true;
}

bool Computer::runProductivityApp(std::string supportedOperatingSystem, std::string applicationName)
{
    std::cout << "Run porductivity app for " << supportedOperatingSystem << " with name " << applicationName << std::endl;
    return true;
}

bool Computer::connectPeripherals(std::string peripheralName)
{
    std::cout << "Connect peripheral " << peripheralName << std::endl;
    return false;
}

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
    Example::main();

    // 1.
    Dishwasher dishwasher (1500);
    dishwasher.washDishes(250);
    dishwasher.lockDoor();
    dishwasher.informUser();
    // 2.
    VaccumCleaner v;

    std::cout << "value of weight : " << v.weight << std::endl;
    std::cout << "value of noiseLevel : " << v.noiseLevel<< std::endl;

    v.collectDust(2000, 100);
    std::string message = v.informUserWhenFull();
    std::cout << "message " << message << std::endl;
    v.retractCord(200);
    // 3.
    Bicycle bicycle;
    bicycle.cycleAtSpeed(120);
    bicycle.useBreak();
    bicycle.turn("right");
    // 4.
    Truck truck (120, 4565);
    truck.moveFood(300);
    truck.drive(140, 20);
    truck.fitTrailer("long", 120);
    // 5.
    Keyboard keyboard;
    keyboard.connectToMotherBoard();
    keyboard.encodeASCII("X");
    keyboard.sendCharacterSignal();
    // 6.
    Display display;
    display.regulateBrightness(120);
    display.displayText("Hello world");
    display.connectToMotherBoard();
    // 7.
    Battery battery;
    battery.charge(100);
    battery.discharge(200);
    battery.monitorCapacity(true);
    // 8.
    OperatingSystem os;
    os.runApplication("OSX");
    os.installApplication("xcode");
    os.uninstallApplication("xcode");
    // 9.
    Memory memory;
    memory.loadData(200);
    memory.offloadData(200);
    memory.accessMemoryBlock(25);
    // 10.
    Computer computer;
    computer.compileCode(200);
    computer.runProductivityApp("windows", "winzip");
    computer.connectPeripherals("mouse");
    
    
    std::cout << "good to go!" << std::endl;
}
