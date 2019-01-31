# Nap Time

**Author(s)**: Jenna Hughes and John Martin

**Google Document**: *https://docs.google.com/document/d/1aFm4vNCpDLIUj03oM7EaXg1spCM_F87eTSmThVaaZSk/edit?usp=sharing*

---
## Purpose

Too often, refusing to nap will simply have you falling asleep at your desk, while napping for the wrong amount of time may make you groggy and disoriented upon awakening. Our product will solve the issue of being able to get the right amount of sleep during a nap. We will do this by looking up appropriate information pertaining to what is the right amount of time a person needs in order to nap, and feel fully rested. Based on this information we will program the device to sound an alarm afterr the designated amount of time. Once the user selects the amount of time that works for his napping schedule, the Embedded system will then wake them up in the approprate amount of time. The device will act as an alarm set to the right amount of time for a comfortable, efficient, and healthy nap, that works for the user's schedule. 

## Initial Design Plan
For our intitial design plan, we have decided to use five buttons, all as inputs.  Four of the buttons will be used for the user to select the appropriate amount of time.  These times will be 10 minutes, 20 minutes, 60 minutes, and 90 minutes.  For example, if the 10 minute button is pressed, the ten minute timer will begin and the remaining time will be displayed on the digital display (output).  When the timer hits zero, the buzzer (output) will sound until the fifth button, the stop button, is pressed.  The stop button can also be used as a reset button, in case the wrong button is pushed, or the user wakes up earlier than anticipated.

## Outline 
- Hardware 
  - Timer/clock display
  - Buzzer for sound
  - Our Arduino device
  - (4) Buttons for users to select their nap time
  - (1) Button to shut off the alarm
    
- Code 
  - Function for the timer 
  - function for button press 
  - function for the sound 
  - A function to start the timer when the button is pressed
  - A function to start the sound when the timer runs out 
  - A function to stop the sound either when the button is pressed again, or after a certain amount of beeps 


**Sample image**:

![A sample image to show how to add one to a repo](/20190124_111548.jpg "A sample image. This is the text that appears.")

## Files
- Buzzer_code.ino : This will help us to understand how to make sounds using the Arduino. 
- Button.ino : This file will help us to understand how to use the button on Arduino
- TimeCheck.ino: This file will help us to understand exactly how to work with time on the Arduino.
- CodeStart.ino: This file will contain the code which will run our embedded system.

## Summary
*You'll complete this part at the end of the project.*

Provide a brief summary description of the design and implementation,
including how much your initial design plan evolved, the final result
you achieved and the amount of time you spent as a programmer in
accomplishing these results, including any challenges overcome and
innovations that were not specifically required by the assignment.
This section should be no more than three paragraphs.

## Instructions
Our product is very simple. Simply press the button that corresponds to the length of time that you have available to nap. The timer will automatically start, and you can begin to nap. You can monitor how much time you have left in your nap with the timer display. Once the alarm rings, press the stop button to shut off the sound.

## Errors and Constraints
*You'll complete this part at the end of the project.*

Every program has bugs. Use this section to create a bullet list of
all known errors and deficiencies that remain in your product. 
Also, list any constraints that must exist for your product to work 
(e.g., Only works in low light situations).

## Reflection
*You'll complete this part at the end of the project.*

Write 2 - 4 paragraphs on your reactions to the final project. 
Your reflection should be thoughtful and reflective. 
It is NOT a report about WHAT you did. 
Instead, it's a look back at what you learned by doing this project.
It should be critical of shortcomings (yours, as well as the instructors/assignments) 
as well as celebratory of what was achieved.

## References
*Start this section at the beginning of the project, and update it throughout.*

https://github.com/2019-Spring-CSC-386/p00-project-1-martinjoh-hughesje/blob/master/example-README.md The original README file that Scott provided us with as a guide.

https://www.google.com/search?q=dehydration+sensor&client=firefox-bab&source=lnms&tbm=isch&sa=X&ved=0ahUKEwiU4fLuzePfAhWRUt8KHRFaCKIQ_AUIDygC&biw=1366&bih=664 Researching if it was possible to track dehydration through sensors.

https://www.sleep.org/articles/how-long-to-nap/ Looking at articles on healthy napping times.

https://www.sleep.org/topic/age/ Looking at healthy naps for our age group.

https://www.scienceofpeople.com/science-perfect-nap/ Comparing different sites to make sure that appropriate nap times are consistent.

https://www.arduino.cc/en/tutorial/button Code used to help us work the button.

https://www.arduino.cc/en/Tutorial/HelloWorld Code used to help us with the LCD.

https://www.arduino.cc/en/Tutorial/LiquidCrystalDisplay Code used to help us understand the LCD.

https://www.google.com/search?client=firefox-b-ab&biw=1366&bih=664&tbm=isch&sa=1&ei=xUNHXJ7iBJKq_QbZ7I9o&q=pin+out+for+lcd+display+screen+1602zfa&oq=pin+out+for+lcd+display+screen+1602zfa&gs_l=img.3...272949.280381..281327...0.0..0.267.716.7j0j1......1....1..gws-wiz-img.PbAqIN70q18#imgrc=fD4tazEbutPbnM: Code used to help us wire up the LCD.

## Final Self-Evaluations
*You'll complete this part at the end of the project. 
Assign points to each team member in each category, based on their contribution to the team. 
The sum of all member's points in each category cannot exceed 10. 
For example, for Coding, Partner 1 could get 7 points, and Partner 2 gets 3 points. 
You can't give both people 6 points each though, as the sum exceeds 10.

### Ideation, Brainstorming, Design:

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*

### Code creation: 

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*

### Documentation creation:

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*

### Teamwork & Participation:

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*


---
**A Note from Scott to You**

While I expect this project to have issues, one
thing to keep in mind is HAVE FUN with it! Create a product that
expresses your personal interests. Break up the writing so it’s not so burdensome.
We will have a live demo sessions at the end of the project to celebrate your accomplishments.
