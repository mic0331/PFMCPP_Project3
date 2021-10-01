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

void Dishwasher::washDishes(int time)
{
    std::cout << "clean dishes for some time " << time;
}

void Dishwasher::informUser()
{
    std::cout << "job finished !";
}

bool Dishwasher::lockDoor()
{
    return true;
}

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

    void collectDust(int dustQuantity, int time);
    bool retractCord(int cordDistance);
    std::string informUserWhenFull();
};

void VaccumCleaner::collectDust(int dustQuantity, int time)
{
    if (dustQuantity != 0) 
    {
        dustQuantity -= 1;
        time -= 1;
    }
}

bool VaccumCleaner::retractCord(int cordDistance)
{
    if (cordLength == 0) 
        return false;
    cordLength -= cordDistance;
    return true;
}

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

    void cycleAtSpeed(int speed);
    bool turn(std::string direction = "left");
    bool useBreak();
};

void Bicycle::cycleAtSpeed(int s)
{
    speed = s;
}

bool Bicycle::turn(std::string direction)
{
    direction = "neutral";
    return true;
}

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

void Truck::fitTrailer(std::string trailerType, int trailerLegnth)
{
    if (trailerType == "long" && trailerLegnth > 100)
        speedLimit = 50;
    // do some other stuff ...
}

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

void Keyboard::encodeASCII(std::string character)
{
if (character == "x")
    numberOfKeys = 250;
}

bool Keyboard::sendCharacterSignal()
{
    power += 1;
    return true;
}

struct Display
{
    int numberPixels = 1800;
    float powerConsumed = 180.f;
    double bightness = 70;
    int width = 250;
    int height = 100;

    void displayText(std::string text);
    bool regulateBrightness(double brightnessLevel);
    bool connectToMotherBoard(std::string connectorType = "HDMI");
};

void Display::displayText(std::string text) 
{
    std::cout << text;
}

bool Display::regulateBrightness(double brightnessLevel)
{
    bightness += brightnessLevel;
    return true;
}

struct Battery 
{
    float voltage = 4.7f;
    double dischargeTime = 5;
    double capacity = 150;
    double powerDensity = 4870;
    float surfaceArea = 150.75;

    void charge(int time);
    void discharge(int time);
    void monitorCapacity(bool informUser = false);
};

void Battery::charge(int time)
{
    dischargeTime += 1;
    time += 1;
}

void Battery::discharge(int time)
{
    dischargeTime -= 1;
    time -= 1;
}

void Battery::monitorCapacity(bool informUser)
{
    if (informUser)
        std::cout << "Regarded " << capacity;
}

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

void OperatingSystem::runApplication(std::string applicationName)
{
    std::cout << "Run : " << applicationName;
}

bool OperatingSystem::installApplication(std::string appName)
{
    std::cout << "Install : " << appName;
    return true;
}

bool OperatingSystem::uninstallApplication(std::string appName)
{
    std::cout << "Uninstall : " << appName;
    return false;
}

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

void Memory::loadData(int amountOfData)
{
    std::cout << "Load data : " << amountOfData;
}

void Memory::offloadData(int amountOfData, bool writeToSWAP)
{
    std::cout << "Offload data : " << amountOfData << "and in swap? " << writeToSWAP;
}

int Memory::accessMemoryBlock(int blockLocation)
{
    std::cout << "Access memory block : " << blockLocation;
    return capacity;
}


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

bool Computer::compileCode(int memorySize, std::string codeLanguage)
{
    std::cout << "Compile code for " << codeLanguage << " of size " << memorySize;
    return true;
}

bool Computer::runProductivityApp(std::string supportedOperatingSystem, std::string applicationName)
{
    std::cout << "Run porductivity app for " << supportedOperatingSystem << " with name " << applicationName;
    return true;
}

bool Computer::connectPeripherals(std::string peripheralName)
{
    std::cout << "Connect peripheral " << peripheralName;
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
    
    
    std::cout << "good to go!" << std::endl;
}
