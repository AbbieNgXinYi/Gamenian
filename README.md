# Gamenian

## Types of Coding Language(s)

- C# 

---

## Game Development

---

### Two Player Game Code

Game Development Foundation (Completion 100%)
- Connect 4 (*POC*)
- Air Hockey **(CANCELLED)**

Game effects (Completion 100%)
- <span style="color:lightgreen">Connect 4</span>

Game Effects for Air Hockey(25% Completion) **{CANCELLED}**

---

### Single Player Game Code

Game Development Foundation (Completion 100%)

- **Buttons(CANCELLED){Compiling error}**

- <span style="color:red">2048 (would need to add the Start and Quit buttons)</span>

- Cat Clicker[to replace the Air Hockey game]

Game effects(80% Completion)

- <span style="color:red">2048 **(need the movement of the blocks and the game over sound effects)**</span>

- <span style="color:lightgreen">Cat Clicker **(100% Completion)**</span>


## System Diagram

---
=======


## Setup Progress
### Video Setup
![Alt text](Imgdiagram/photo_6325431218992166877_y.jpg)


### Audio Setup
```mermaid
graph TD

A[Laptop]--> B[Steinberg UR44]
B--> E[Active Speaker 1]
B--> F[Active Speaker 2]
B--> G[Active Speaker 3]
B--> H[Active Speaker 4]

```


### Control Setup
#### Projector Control
```mermaid
graph TD

A[Laptop]--> B[Network Switch]
B--> C[Crestron Processor - CP3]
B--> D[Projector 1]
B--> E[Projector 2]

```
#### Arudino Control
```mermaid
graph TD

A[Micro USB]--> B[Laptop]
A--> C[Arduino]
C--> D[Breadboard]
D--> E[Joystick]
D--> F[Button - Mouse Click]
D--> G[Button - Up Key]
D--> H[Button - Down Key]
D--> I[Button - Left Key]
D--> J[Button - Right Key]

```
---
## *Operational Instructions(Software):*

1) *Have a LGX AvaMedia CaptureCard (for livestreaming the game onto the table and screen)*

2) **Install LGX Livestream CaptureCard drive in your laptop in order for the CaptureCard to communicate with the laptop and the media server.**

3) **After downloading Christie Pandora Box, and Christie Pandora Server Management, you would need to have a licence for the pandora box in order to be able to operate it( the licence can be in seperate hard drive like a thumbdrive, though it requires money to buy the licence).**

4) **After having both the licence and the pandora box, open up pandora server management, in it you need to open the media server( if you have direct connection from the laptop to the server with the licence). Ensure that the IP address are in the same subnets for direct commnications on both the media server and the laptop.** 

5) **Afterwards, you can *open the Pandora Box application,both on laptop and in server management,* create new project( ensure that after opening new project, you could see the server icon ). Add the live stream media and video assets needed into the media server, and both the assets needs to be on different layers. From there, the projectors should be able to livestream the output from laptop onto the table/screen.**

6) **Add mesh by right clicking of the folder, rename it for easy recognition, and you will be able to mesh edit your video output to the size of the table/screen that you are projecting them to.**

---
## Installation:

1) *Set up 2projectors(1 for coffee table, 1 for the wall/screen)*
![Alt text](images314Github/-6339063505319213120_121.jpg)

2) *Ensure that the cables are properly connected to UR44(amplifier) to the speakers from the laptop and properly powered on*
**The cable from the laptop to the amplifier is USB type B to USB type A**

*the image below is connection to amplifier to speaker*
![Alt text](images314Github/IMG20230606143016.jpg)

***Also ensure that the driver is working properly in the amplifier for the speaker to be in working condition***
![Alt text](Addimg/photo_6339063505319213114_y.jpg)


2) *Ensure that the cables are connected from the laptop that you are going to livestream the game and the media server to the CaptureCard before output it to the 2projectors*

![Alt text](images314Github/IMG20230606143107.jpg)

![Alt text](images314Github/SGCAM_20230606_165220717.jpg)

![Alt text](images314Github/SGCAM_20230606_165119660.jpg)

![Alt text](images314Github/SGCAM_20230606_164630966.jpg)

![Alt text](images314Github/SGCAM_20230606_164744689.jpg)
=======
### **Unity Hub**


1) *Install Unity Hub before installing the Zip folder of the game*

2) ***Unzip folder** of the game and opening it in Unity Hub*

3) ***Build and run** the game and you should be good to go*

Testing Intructions:
## **How to play?** 
### ***Connect 4:***
* Its a 2 player game( Green and Red )
* They drop the discs into the grid( anywhere in the grid )**{depends on the column they selected}**
* They have to stack their coloured discs vertically, horizontally or diagonally
* First player to get 4 in a row wins the game
* Use the controller provided to move the cursor and select the grid column

## **Troubleshooting:**
### ***What if the video is unable to livefeed onto the projector?***
* Check the cabling from the CaptureCard to the media server. Change the cable if need to.
* Check the driver of the CaptureCard to see if they are communicating with each other. If they are not able to communicate, reinstall the driver.
* If its neither of them, check the pandora box, ensure that the layer that you are projecting out is visible(not hidden).

### **Audio:**

1) Ensure the audio cables and power cables are connected properly

2) make sure that the USB cable is plugged in from the UR44 to the computer **(or via usb hub tha was connected to the computer)**

3) Switch on the UR44 power button **(located behind)**

4) Swich on the power for the 4 active speakers **(black 13A POWER STRIP)**

5) Ensure the speaker power button is on and the volume knok is positioned at 12 o clock position

6) Install the drivers for UR44 at the steinberg website

7) Make sure that the main volume is turned to the maximum

8) the ur44 is ready to be used
**(LOWER THE VOLUME FIRST BEFORE TESTING)**