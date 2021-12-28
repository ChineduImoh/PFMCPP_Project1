#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       computer
//  action 1:   computer stores information
computer.storeInformation();
//  action 2:   computer retrieves information
computer.retrieveInformation();
//  action 3:   computer processes information
computer.processInformation();
//  2)
//  Noun:       sun
//  action 1:   the sun radiates light
sun.radiateLight();
//  action 2:   the sun radiates heat
sun.radiateHeat();
//  action 3:   the sun radiates solar energy
sun.radiateSolarEnergy();
//  3)
//  Noun:       water
//  action 1:   the water waves
water.wave();
//  action 2:   the water vaporizes
water.vapourize();
//  action 3:   the water freezes
water.freeze();
//  4)
//  Noun:       drake
//  action 1:   drake raps
drake.rap();
//  action 2:   drake sings
drake.sing();
//  action 3:   drake dances
drake.dance();
//  5)
//  Noun:       head
//  action 1:   the head nods
head.nod();
//  action 2:   the head rotates
head.rotate();
//  action 3:   the head bends
head.bend();
//  6)
//  Noun:       admin
//  action 1:   adds user
admin.addUser();
//  action 2:   deletes user
admin.deleteUser();
//  action 3:   warns user
admin.warnUser();
//  7)
//  Noun:       god
//  action 1:   god creates
god.create();
//  action 2:   god sustains
god.sustain();
//  action 3:   god cares
god.care();
//  8)
//  Noun:       devil
//  action 1:   devil steals
devil.steal();
//  action 2:   devil kills
devil.kill();
//  action 3:   devil destroys
devil.destroy();
//  9)
//  Noun:       tree
//  action 1:   the tree grows
tree.grow();
//  action 2:   the tree absorbs water
tree.absorbWater();
//  action 3:   the tree provides oxygen
tree.provideOxygen();
//  10)
//  Noun:       fire
//  action 1:   the fire burns
fire.burn();
//  action 2:   the fire illuminates
fire.illuminate();
//  action 3:   the fire emits heat
fire.emitHeat();

#endif
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
    std::cout << "good to go" << std::endl;
    return 0;
}
