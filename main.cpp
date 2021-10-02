/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function.

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.

struct Dishwasher
{
    Dishwasher();

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

    void washDishes(int time);
    void informUser();
    bool lockDoor();
};

Dishwasher::Dishwasher()
{
    std::cout << "'Dishwasher' created" << std::endl;
}

void Dishwasher::washDishes(int time)
{
    std::cout << "clean dishes for some time " << time << std::endl;
}

void Dishwasher::informUser()
{
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
    std::cout << "cylce at speed" << std::endl;
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
    Truck(); 

    int numberOfAxle = 4;
    std::string typeOfEngine = "diesel";
    std::string color = "Pink";
    int speedLimit = 90;
    double weight = 1530.00;

    void fitTrailer(std::string trailerType, int trailerLegnth);
    bool moveFood(int quantity);
    void drive(int speed, int distance);
};

Truck::Truck()
{
    std::cout << "'Truck' created" << std::endl;
}

void Truck::fitTrailer(std::string trailerType, int trailerLegnth)
{
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
    Keyboard();

    int numberOfKeys = 120;
    float travellingDistance = 1.35f;
    int power = 125;
    int width = 128;
    int height = 95;

    void encodeASCII(std::string character);
    bool sendCharacterSignal();
    bool connectToMotherBoard(std::string connectorType = "GPIO");
};

Keyboard::Keyboard()
{
    std::cout << "'Keyboard' created" << std::endl;
}

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
    Display();

    int numberPixels = 1800;
    float powerConsumed = 180.f;
    double bightness = 70;
    int width = 250;
    int height = 100;

    void displayText(std::string text);
    bool regulateBrightness(double brightnessLevel);
    bool connectToMotherBoard(std::string connectorType = "HDMI");
};

Display::Display()
{
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
    dischargeTime += 1;
    time += 1;
    std::cout << "charge" << std::endl;
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
    int lenght = 100;
    int performance = 150;

    void loadData(int amountOfData);
    void offloadData(int amountOfData, bool writeToSWAP = false);
    int accessMemoryBlock(int blockLocation);
};

Memory::Memory()
{
    std::cout << "'Memory' created" << std::endl;
}

void Memory::loadData(int amountOfData)
{
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
    Dishwasher dishwasher;
    dishwasher.washDishes(250);
    dishwasher.lockDoor();
    dishwasher.informUser();
    // 2.
    VaccumCleaner v;

    std::cout << "value of weight : " << v.weight;
    std::cout << "value of noiseLevel : " << v.noiseLevel;

    v.collectDust(2000, 100);
    std::string message = v.informUserWhenFull();
    std::cout << "message " << message << std::endl;
    v.retractCord(200);
    // 3.
    Bicycle b;
    b.cycleAtSpeed(120);
    b.useBreak();
    b.turn("right");
    // 4.
    Truck t;
    t.moveFood(300);
    t.drive(140, 20);
    t.fitTrailer("long", 120);
    // 5.
    Keyboard k;
    k.connectToMotherBoard();
    k.encodeASCII("X");
    k.sendCharacterSignal();
    // 6.
    Display d;
    d.regulateBrightness(120);
    d.displayText("Hello world");
    d.connectToMotherBoard();
    // 7.
    Battery bt;
    bt.charge(100);
    bt.discharge(200);
    bt.monitorCapacity(true);
    // 8.
    OperatingSystem os;
    os.runApplication("OSX");
    os.installApplication("xcode");
    os.uninstallApplication("xcode");
    // 9.
    Memory m;
    m.loadData(200);
    m.offloadData(200);
    m.accessMemoryBlock(25);
    // 10.
    Computer c;
    c.compileCode(200);
    c.runProductivityApp("windows", "winzip");
    c.connectPeripherals("mouse");
    
    
    std::cout << "good to go!" << std::endl;
}
