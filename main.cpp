/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3. 
Part1 will be broken up into 5 separate steps 
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives and std::string. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine`
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
        Remember to pick properties that can be represented with 'int float double bool char std::string'
2) write the name of the primitive type you'll be using after each property
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

3) move Thing 5-9 to between your Thing 4 and Thing 10.
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

/*
Thing 2) vaccum cleaner
5 properties:
    1) amount of kilograms for it's weight (int)
    2) the level of noise (int)
    3) the suction power (int)
    4) the lenght of the cord (int)
    5) Usability over both carpet and hard surfaces :-) (std:string)
3 things it can do:
    1) dust collect
    2) retract cord
    3) inform user when full
 */

/*
Thing 3) Bicycle
5 properties:
    1) number of gears (int)
    2) type (std:string)
    3) speed (int)
    4) cadence (std:string)
    5) color (std:string)
3 things it can do:
    1) cycle at a certain speed
    2) turn left or right
    3) break
 */

/*
Thing 4) Truck
5 properties:
    1) number of axles (int)
    2) type of engine (std:string)
    3) color (std:string)
    4) speed limit (int)
    5) weight (double)
3 things it can do:
    1) fit trailer
    2) move a certain quantity of goods
    3) drive at a certain speed
 */

 /*
Thing 5) Keyboard
5 properties:
    1) Number of keys (int)
    2) key travelling distance (int)
    3) Amount of Power consumed (milliwatt-hours)
    4) width in mm (int)
    5) height in mm (int)
3 things it can do:
    1) encode ASCII character
    2) send character signal
    3) connect to the motherboard
 */

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

/*
Thing 7) Bettery
5 properties:
    1) voltage (double)
    2) discharge time (double)
    3) capacity (double)
    4) power density (double)
    5) surface area in mm^2 (double)
3 things it can do:
    1) charge
    2) discharge
    3) monitor it's capacity
 */

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

/*
Thing 9) Memory
5 properties:
    1) capacity (int)
    2) access method (str::string)
    3) unit of transfer (str::string)
    4) access method (str::string)
    5) performance (int)
3 things it can do:
    1) load data
    2) offload data
    3) access memory block
 */

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
