/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to EACH of your types. 
 
 2) inside these new member functions, use while() and for() loops to do something interesting 
         a) example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
    Your code should produce a lot of console output now.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //1), 2c) 
    {
        Bar bar(startingVal);                //2a)
        while( bar.num < threshold )         //2a) 
        { 
            bar.num += 1;                    //2a)
            std::cout << "  increasing bar.num: " << bar.num << std::endl; //4)
            if( bar.num >= threshold )       //2b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //3) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //4) 
    return 0;
}
}

//call Example::main() in main()





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
    void doesSomethingInteresting();
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

void Dishwasher::doesSomethingInteresting()
{
    int inc = 0;
    std::cout << "'inc' initialized with value " << inc << std::endl;
    for (int i=0; i < 5; i++) {        
        inc+= 5;
        std::cout << "'inc' incremented by 5 --> " << inc << std::endl;
    }
    std::cout << "'inc' Final value " << inc << std::endl;
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
    void doesSomethingInteresting();
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

void VaccumCleaner::doesSomethingInteresting()
{
    int x = 6;
    while (x >= 0) {
        std::cout << "Value of x --> " << x << std::endl;
        for (int i=0; i>=5; i++) {
            std::cout << "Value of i --> " << i << std::endl;
        }
        x -= 1;
    }   
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
    void doesSomethingInteresting(int variableA);
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

void Bicycle::doesSomethingInteresting(int variableA)
{
    if (variableA >= 5)
        std::cout << "Value is too big" << std::endl;
    for(;;) {
        if (variableA >= 5) break;
        variableA +=1;
        std::cout << "`variableA` --> " << variableA << std::endl;
    }
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
    int doesSomethingInteresting();
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

int Truck::doesSomethingInteresting()
{
    bool flag = true;
    int x = 0;
    while(flag) {        
        if (x >= 3) flag = false;
        x += 1;
    }
    return x;
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
    void printMessage();
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

void Keyboard::printMessage()
{
    for (int x = 0; x <= 5; x++) {
        std::cout << "Value of x --> " << x << std::endl;
        x += 1;
    }
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
    void printMessage();
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

void Display::printMessage()
{
    for (int x = 0; x <= 5; x++) {
        std::cout << "Value of x --> " << x << std::endl;
        x += 1;
    }
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
    void printMessage();
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

void Battery::printMessage()
{
    for (int x = 0; x <= 5; x++) {
        std::cout << "Value of x --> " << x << std::endl;
        x += 1;
    }
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
    void printMessage();
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

void OperatingSystem::printMessage()
{
    for (int x = 0; x <= 5; x++) {
        std::cout << "Value of x --> " << x << std::endl;
        x += 1;
        numberOfConcurrentTask += x;
    }
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
    void printMessage();
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

void Memory::printMessage()
{
    for (int x = 0; x <= 5; x++) {
        if (!(capacity % 2))
            capacity = 0;
        std::cout << "Value of x --> " << x << std::endl;
        x += 1;
    }
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
    void printMessage();
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

void Computer::printMessage()
{
    for (int x = 0; x <= 5; x++) {
        std::cout << "Value of x --> " << x << std::endl;
        x += 1;
    }
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
    dishwasher.doesSomethingInteresting();
    // 2.
    VaccumCleaner vaccumCleaner;

    std::cout << "value of weight : " << vaccumCleaner.weight << std::endl;
    std::cout << "value of noiseLevel : " << vaccumCleaner.noiseLevel<< std::endl;

    vaccumCleaner.collectDust(2000, 100);
    std::string message = vaccumCleaner.informUserWhenFull();
    std::cout << "message " << message << std::endl;
    vaccumCleaner.retractCord(200);
    vaccumCleaner.doesSomethingInteresting();
    // 3.
    Bicycle bicycle;
    bicycle.cycleAtSpeed(120);
    bicycle.useBreak();
    bicycle.turn("right");
    bicycle.doesSomethingInteresting(125);
    bicycle.doesSomethingInteresting(2);
    // 4.
    Truck truck (120, 4565);
    truck.moveFood(300);
    truck.drive(140, 20);
    truck.fitTrailer("long", 120);
    std::cout << "Final value of X for Truck --> " << truck.doesSomethingInteresting() << std::endl;
    // 5.
    Keyboard keyboard;
    keyboard.connectToMotherBoard();
    keyboard.encodeASCII("X");
    keyboard.sendCharacterSignal();
    keyboard.printMessage();
    // 6.
    Display display;
    display.regulateBrightness(120);
    display.displayText("Hello world");
    display.connectToMotherBoard();
    display.printMessage();
    // 7.
    Battery battery;
    battery.charge(100);
    battery.discharge(200);
    battery.monitorCapacity(true);
    battery.printMessage();
    // 8.
    OperatingSystem os;
    os.runApplication("OSX");
    os.installApplication("xcode");
    os.uninstallApplication("xcode");
    std::cout << "numberOfConcurrentTask before loop --> " << os.numberOfConcurrentTask << std::endl;
    os.printMessage();
    std::cout << "numberOfConcurrentTask after loop --> " << os.numberOfConcurrentTask << std::endl;
    // 9.
    Memory memory;
    memory.loadData(200);
    memory.offloadData(200);
    memory.accessMemoryBlock(25);
    std::cout << "capacity before loop --> " << memory.capacity << std::endl;
    memory.printMessage();
    std::cout << "capacity after loop --> " << memory.capacity << std::endl;
    // 10.
    Computer computer;
    computer.compileCode(200);
    computer.runProductivityApp("windows", "winzip");
    computer.connectPeripherals("mouse");
    computer.printMessage();
    
    
    std::cout << "good to go!" << std::endl;
}
