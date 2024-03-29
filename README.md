# Gamenian

## Project Information

### Background :

With housing in Singapore being smaller and increasingly more expensive recently, many are looking for ways to save space and make things more compact.

With our project, we aim to help tackle some of these issues and add value to existing furnishings that people already have.

---

## Table of Content :

- **[Our Objective](#our-objective)**

- **[Unique Features](#unique-features)**

- **[Team Information](#team-information)**

- **[Game Coding Language(s)](#game-coding-languages)**

- **[Game Development](#game-development)**
   - Two-Player Games
   - Single-Player Games

- **[Setup Progress](#setup-progress)**
   - Bill Of Materials (BOM)
   - Lighting Setup
   - Video Setup
   - Audio Setup
   - Control Setup
      - Projector Setup
      - Arduino and TouchOSC Setup

- **[Network Settings](#network-settings)**

- **[Floor and Cabling Plan](#floor-and-cabling-plan)**
   - Layout
      - Cabling Layout
      - Rack Layout

- **[Installation Phase](#installation-phase)**
   - Lighting Installation
   - Video Installation
      - Media Server
      - Laptop
   - Audio installation
      - Audio Software 
   - Arduino Leonardo
      - Arduino & TouchOSC Setup
      - Download Arduino Software
      - Download TouchOSC Software
      - Arduino and OSC codes
   - TouchOSC Control Interface Setup

- **[Operational Phase](#operational-phase)**
   - PB Management
   - Aver Media Capture Card
   - Christie Pandora Box
   - Unity Hub
      - Starting Unity hub
      - build your Game
   - Configuring Network of DMP 64
   - DMP 64 presets
   - Configure Control Processor
   - Extron GCP and GUI Designer
      - Extron GUI Designer
      - Extron GCP
   - Configuring Router
      - Changing Network Name (SSID) and Wifi Password 
      - Setting up your own AV LAN
   - Lighting Programming

- **[Testing Phase](#testing-phase) (With Instructions and Demo)**
   - Demo Video of Project
   - Connect 4
   - 2048 
   - Ping Pong

- **[Troubleshooting](#troubleshooting)**
   - What if the video is unable to livefeed onto the projector?
   - Aver Media Capture Card
   - PB Management
   - Christie Pandora Box
   - Arduino
   - Unity Hub
   - Extron GCP and GUI Designer
   - TouchOSC Application


## Our Objective
**[(Back To Top)](#table-of-content-)**

**To give existing furniture more features:**

* Allow users to be able to entertain a big group of people
* Diverse usage of the same furniture
* Help to save space

## Unique Features
**[(Back To Top)](#table-of-content-)**

* Players are able to concentrate on the game that is one the table while the audience can enjoy 
  spectating the game by watching the gameplay on the second output(wall)

* Setup compacts features into the area of the table which helps to save space especially in newer, smaller houses. 
   It also adds value to the furniture as the same piece of furniture can have more uses


## Team Information
**[(Back To Top)](#table-of-content-)**

### These are the Team Members that worked together to make a functioning project:

**Abbie(Leader)**

* POC Phase
   + Arduino Programming - Joystick and Buttons Control
   + Joystick and Buttons Hardware Interfacing to Arduino
   + Unity Code editing, Arduino Communication
   + PB Meshing - Table and Screen Projection

* MVP Phase
   + Communication between Joystick & Laptop - 2 players setup  
   + Audio system setup - DSP + ceiling speakers
   + Audio DSP Configuration
   + Control System setup
   + Control system - Audio DSP & Projector control 

* Final Phase
   + Redesign and program equipment control GUI
   + Setup, program and design GUI in TouchOSC
   + Widget Designer communication between Pandora and TouchOSC

**Sean(Assistant Leader)**

* POC Phase
   + Arduino Programming - Joystick and Buttons Control
   + Joystick and Buttons Hardware Interfacing to Arduino
   + Unity Code editing, Arduino Communication
   + Video System setup

* MVP Phase
   + Communication between Joystick & Laptop - 2 players setup
   + Audio system setup - DSP + ceiling speakers
   + Control System setup


**William(Member)**

* POC Phase
   + Video System setup
   + Aduio System setup
   + Live Streaming setup for PB

* MVP Phase
   + Lighting System Setup
   + Lighting System Programming, Cue-ing

* Final Phase
   + Widget Designer communication between Pandora Box and TouchOSC
   + Program Lighting cue in Pandora Box

**Xin Yi(Member)**

* POC Phase
   + PB Meshing - Table and Screen Projection
   + Unity Code GUI editing

* MVP Phase
   + Unity code - incorporate new game (Ping Pong) to replace Air Hockey 
   + Incorporate Main Menu 
   + Game instructions - asset creation

* Final Phase
   + Created and incorporate snake game
   + Redesign game GUI
   + Enhance the unity games, the main and game menus, and instructions for games

## Game Coding Language(s)
**[(Back To Top)](#table-of-content-)**

* C#

---

## Game Development
**[(Back To Top)](#table-of-content-)**

### Two Player Game:

Game Development With SFX (Completion 100%)

* Ping Pong Game

### Single Player Game:

Game Development With SFX (Completion 100%)

* 2048
* Snake

---

## Setup Progress
**[(Back To Top)](#table-of-content-)**

### Bill Of Materials

## BOM Equipment

![Alt text](BOM/BOMequipment.png)

---

## BOM Cables

![Alt text](BOM/BOMcable.png)

---

### Video Setup

![Alt text](SystemDiagram/314-e-schematic-v.png)

### Audio Setup

![Alt text](SystemDiagram/314-e-schematic-a.png)

### Lighting Setup

![Alt text](SystemDiagram/314%20LIGHTING.png)

### Control Setup

#### Equipment Control

![Alt text](SystemDiagram/314-e-schematic-c.png)

#### Arudino & Touch OSC Control

```mermaid
flowchart TD

   A[Laptop] -- USB --> B[Arduino]
   B -- OSC --> C[iPAD]

```


#### Network Settings
**[(Back To Top)](#table-of-content-)**

| Device | IP Address | Subnet Mask | Default Gateway |
| --- | --- | --- |  --- |
| **Router** | 192.168.77.7 | 255.255.255.0 | 192.168.1.1 |
| **Laptop** | 192.168.77.100 | 255.255.255.0 | 192.168.77.7 |
| **IPCP Pro 350** | 192.168.77.15 | 255.255.255.0 | 192.168.77.7 |
| **Optoma Projector** | 192.168.77.16 | 255.255.255.0 | 192.168.77.7 |
| **Media Server (ThinkServer)** | 192.168.77.30 | 255.255.255.0 | 192.168.77.7 |
| **DMP 64** | 192.168.77.11 | 255.255.255.0 | 192.168.77.7 |
| **Arduino** | 192.168.77.151 | 255.255.255.0 | 192.168.77.7 |
| **iPad 1** | 192.168.77.150 | 255.255.255.0 | 192.168.77.7 |
| **iPad 2** | 192.168.77.152 | 255.255.255.0 | 192.168.77.7 |
| **iPad 3** | 192.168.77.153 | 255.255.255.0 | 192.168.77.7 |


### Floor and Cabling Plan
**[(Back To Top)](#table-of-content-)**

![Alt text](floor&cablingplan/floor1.jpeg)

<br>

![Alt text](floor&cablingplan/floor2.jpeg)

<br>

![Alt text](floor&cablingplan/floor3.jpeg)

<br>

![Alt text](floor&cablingplan/floor4.jpeg)


### Cabling Layout

![Alt text](images314Github/MVP%20Img/msg922999526-37080.jpg)

![Alt text](images314Github/MVP%20Img/msg922999526-37081.jpg)

![Alt text](images314Github/MVP%20Img/msg922999526-37082.jpg)

![Alt text](images314Github/MVP%20Img/msg922999526-37083.jpg)

![Alt text](images314Github/MVP%20Img/msg922999526-37084.jpg)

![Alt text](images314Github/MVP%20Img/msg922999526-37085.jpg)

![Alt text](images314Github/MVP%20Img/msg922999526-37086.jpg)


### Rack layout

| Devices in Rack | 
| --- |
| Laptop |
| Netgear Router |
| Cisco Network Switch |
| Aver Media Capture Card |
| Arduino |
| Media Server |
| Extron DMP 64 |
| Extron IPCP Pro 350 |
| Extron XPA 1002 |

---

## Installation phase
**[(Back To Top)](#table-of-content-)**

### Lighting Installation
1) In this setup, we use LED Strips to hang up on top of of the metal truss to light up the area.

![Alt text](images314Github/20230720_161215.jpg)
![Alt text](images314Github/20230720_161154.jpg)

2)The LED Strips was connected using FlexOled LEDJ FTP3 driver. This driver have to set to the correct DMX address by pushing up the correct slider (Eg if the DMX address is 451 switch the slider 1,2,7, 8, and 9 to the ON position)

![Alt text](images314Github/SGCAM_20230510_161238932.jpg)

3) The LED Driver was connected to the grandMA3 onPC 2K node via the DMX to terminal block cable. The grandMA3 onPC software is required to control and set the lighting cues and the effects for the LED Strips.

![Alt text](images314Github/20230720_161701.jpg)
![Alt text](images314Github/20230720_161629.jpg)
![Alt text](images314Github/20230720_161440.jpg)


4)The grandMA3 software can be downloaded in the website via this link 
:https://www.malighting.com/downloads/products/grandma3/

### Video Installation
**[(Back To Top)](#table-of-content-)**

1) In our setup, we have 1 Projector and 1 Projector Screen

![Alt text](images314Github/-6339063505319213120_121.jpg)

2) The projector is connected to the media server via HDMI.
   We required the use of a DP to HDMI Adapters as the server only accepts DP and we only had HDMI cables.

![Alt text](images314Github/SGCAM_20230606_143235204.jpg)

![Alt text](images314Github/SGCAM_20230606_165027870.jpg)

3) Due to the distance of the projector and media server being a few meters away from each other, we used 1 pair of
   HDMI extenders to increase the reach for the HDMI cables.

![Alt text](images314Github/SGCAM_20230606_165220717.jpg)

4) Note: HDMI Extenders help ensure proper and stable cable management
    * Help reduce hardware issues that relate to the cabling like:
        1) lose connection
        2) Cable being pulled out
    * Extenders run on LAN cables for extension
        1) LAN cables have a locking mechanism while HDMI cables do not. This ensures that aren't lose or pulled out easily.

5) Next, we would connect the media server to the laptop via LAN to project out our content.

![Alt text](images314Github/SGCAM_20230606_143222420.jpg)

6) In our setup, we will be using a capture card(Aver Media) connected via USB-A to USB Micro B to the media server and
   laptop as we will be live streaming our content through christie pandora box(Projection mapping software).

![Alt text](images314Github/SGCAM_20230606_143539821.jpg)

7) In order to use christie pandora box, we require a dongle(License to use pandora box) for the media server and the laptop.


**Media Server**

![Alt text](images314Github/SGCAM_20230606_165119660.jpg)

<br>

**Laptop**

![Alt text](images314Github/MSD.jpg)


### Audio Installation
**[(Back To Top)](#table-of-content-)**

1) In our setup, we are using 2 ceiling speakers, 1 DMP 64 - audio DSP, and 1 XPA 1002 audio amplifier.

2) Firstly, connect the DMP 64 to the laptop via LAN. 
   **(In our project, as we do not have enough LAN ports, we will be using a network switch.)**

3) Secondly, connect the DMP 64 outputs that will be used to the corresponding XPA 1002 inputs via speaker/mic/LAN cable.


### Control Installation
**[(Back To Top)](#table-of-content-)**

1) In our setup, you will need 1 Laptop, 1 Control Processor (IPCP Pro 350).

2) To be able to program for our equipment controls, the control processor is needed.

3) To use the control processor, simply connect it to the laptop via LAN.
   **(In our project, as we do not have enough LAN ports, we will be using a network switch.)**


### Arduino Leonardo & TouchOSC
<br>

**[(Back To Top)](#table-of-content-)**

![Alt text](ArduinoImg/arduino_img.jpeg)

<br>

1) To use the Arduino Leonardo, connect it via USB-A to Micro USB to the Laptop.

2) To use TouchOSC, simply download the application either in your laptop or any wireless device such as your phone or tablet.

<br>

**Arduino Setup**

![Alt text](ArduinoImg/arduino_img.jpeg)

#### Download Arduino Software

1) To start on the Arduino, search in Google for **Arduino IDE**

2) Click on Download and Install Arduino IDE

<https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE>

3) In the webpage under Installation Instructions, download the relevant IDE depending on the OS system you are using

4) You can now start programming your Arduino!

**TouchOSC Setup**
#### Download TouchOSC Application

1) To start on TouchOSC, search in Google for TouchOSC Download or go to the app store/google play store and search **TouchOSC**

2) Download TouchOSC for PC:
<https://hexler.net/touchosc>

3) Once you have the application, start off by setting up the relevant connection

4) For our setup, we will be connecting to the Arduino and Laptop

5) Here are the steps to setup the connection :

**Step 1**
Open the application and find this chain icon

   ![Alt text](TouchOSC/TouchOSC_Setup/Step1.png)


**Step 2**
Click on the OSC Tab

   ![Alt text](TouchOSC/TouchOSC_Setup/Step2.png)


**Step 3**
Setup your connection accordingly. Your IP address would be the device you are sending and receiving. Your send and receive port depends on which port you have set it to

   ![Alt text](TouchOSC/TouchOSC_Setup/Step3.png)


**Step 4**
Check that you have tick the connection box. This allows you to communicate between the device you are sending and receiving the OSC commands from.

   ![Alt text](TouchOSC/TouchOSC_Setup/Step4.png)


**Arduino and OSC codes**

#### Arduino keyboard and OSC controls

1) In your Arduino Leonardo, include **keyboard, SPI, Ethernet, EthernetUdp, OSCBundle library**. Search in the library manager if library has not been downloaded.

2) To start off the code, we sourced for codes from the Arduino website as well as other webpages too. We then edited the code depending on our setup

3) First we tested out the OSC control code to make sure that we are able to receive OSC commands in TouchOSC

4) Subsequently, we created buttons in TouchOSC and inserted the keyboard control code to test out our keyboard controls

5) You can find our codes by following this directory:

   ```mermaid
   flowchart LR

      A[Arduino Codes]--> B[osc_keyboard_controls]
   ```


* To take note: **Remember to always include the relevant library or the code will not work**

   ```
   #include Keyboard.h>
   #include <SPI.h>
   #include <Ethernet.h>
   #include <EthernetUdp.h>
   #include <OSCBundle.h>
   ```

**TouchOSC Control Interface Setup**

1) Find the **'+'** icon

   ![Alt text](TouchOSC/Interface_Setup/Step1.png)

2) Click on **BUTTON**

   ![Alt text](TouchOSC/Interface_Setup/Step2.png)

3) A Button will appear in your workstation. Click the button in your workstation.

4) Next find the 3 line icon and click on it

   ![Alt text](TouchOSC/Interface_Setup/Step3.png)

5) Find the **messages** tab and scroll down to find **OSC** and click on it to expand the tab

   ![Alt text](TouchOSC/Interface_Setup/Step4.png)

6) Lastly, change the address and argument accordingly to the code

   ![Alt text](TouchOSC/Interface_Setup/Step5.png)

7) This is how the interface should look like

   ![Alt text](TouchOSC/Interface_Setup/Interface.png)


### Network Router Installation 
Connect your router to your laptop via LAN. If you don not have enough ports, you would require the use of a network switch.

---
## Operational Phase
**[(Back To Top)](#table-of-content-)**

### PB Management

1) Download PB management application. Note that you would need to obtain a license to use the software.

2) In the PB management workspace, wait for the server icon to turn **blue** and its state to say **online**
   before clicking the icon.

   ![Alt text](PBImg/icon.png)

3) After clicking on the icon, you would be directed to an interface called the **PB Menu** with different applications.

4) In PB Menu, click on **Pandora Box**.

   ![Alt text](PBImg/icon2.png)

5) You would be shown a client interface. In that page, click on **Full Screen**.

   ![Alt text](PBImg/icon3.png)

### Aver Media Capture Card

1) In our setup, we are using a **Capture Card** to live stream our game through **Christie Pandora Box**.

2) We are using the LGX Aver Media Capture Card.

3) For this Capture Card, you would need to install the LGX Livestream CaptureCard drive in your laptop in order for the CaptureCard to communicate with the laptop and the media server.

### Christie Pandora Box

1) To use Christie pandora box, you would need to download both the Christie pandora box and PB management application. You would also need to obtain a license(Dongle) to use the software.

2) If all requirements have been fulfilled, you may procced to plug in the dongle that contains the license to use the application into either the laptop if running on local, or a media server if u have one. Ensure that the IP address of the laptop is the same as the PB management too.

3) For the Pandora Box application, simply create a new project to start off.

4) Find and click on the capture card name in the **assets tab** in the application.

5) In the capture card tab, find and click on **StreamiX live input**. In **StreamiX live input**, find the input with the name of the capture card that you are using and drag the input into a layer in the timeline.

6) As this software is a projection software, we can also add something called **editable mesh**, to help us size and fit our content depending on our display area. Right click on your project folder and click on **Add Editable Mesh**. You may rename the mesh to your liking.

---

### Unity Hub
**[(Back To Top)](#table-of-content-)**

#### Starting on Unity Hub

1) Install Unity Hub from their official site. Here is the link to download Unity Hub into your devices. Select either Windows or Mac.**[Depending on your devices]**

<https://unity.com/download>

2) After downloading and installing Unity Hub into your device, boot it up

3) After opening Unity Hub, you should see this screen below.

   ![Alt text](UnityHub/accountunity.jpg)

4) Sign in if you already have an account before. If not, create a unity account.

   ![Alt text](UnityHub/SigninUnity.jpg)

<br>

   ![Alt text](UnityHub/createUnity.jpg)

5) Once you have sign in with your account, you should see this interface.

   ![Alt text](UnityHub/menuscreen.jpg)

6) To start creating your game, click on **New Project**. You may rename the project to your liking.

   ![Alt text](UnityHub/newproject.png)

7) For our games, we are using the 2D option. The option you choose depends on the type of game you are creating.

   ![Alt text](UnityHub/coreoption.png)

8) Once you have decided what kind of game you ae making, click on **Create Project**

   ![Alt text](UnityHub/createproj.png)

#### Building your game

1) Once you are done with your game creation, to use it as an application, you would need to build your game.

1a) Firstly, click on **file**

   ![Alt text](UnityHub/file.png)

1b) Secondly, find and click on **Build Settings**  

   ![Alt text](UnityHub/filedownbuildsetting.jpg)

2) Before building your game, check your build settings first before clicking on **Build and Run**.

2a) Firstly, check which platform you are going to build your game with.
    In our case, the platform we have used is **Windows, Mac, Linux**.

   ![Alt text](UnityHub/platform.png)

2b) Secondly, in **Scenes in Build**, remember to uncheck the **Scenes/SampleScene**.

   ![Alt text](UnityHub/scenebuild.png)

2c) If you don't, you will be presented with a blue screen instead.

   ![Alt text](UnityHub/bluescreen.jpg)

3) After you have check your **Build Settings**, you may now click on **Build and Run**.

   ![Alt text](UnityHub/buildrun.png)

4) Once your game is build, you should see your game interface if all settings are as followed.

   ![Alt text](UnityHub/buildscene.png)



### Configuring Network of DMP 64
**[(Back To Top)](#table-of-content-)**

**This step is to help you configure the DMP 64 if you are using your own network or also which to create your own controls through the extron DSP configurator:**

1) Download the Extron DSP Configurator.

2) Connect the DMP 64 to the laptop via mini USB.

3) Open up the Extron DSP Configurator and choose the appropiate device. In our case, it would be DMP 64.

   ![Alt text](DMP_64/DSPsteps/Step%201.png)

4) Find the button which says **Live** and click on it.

   ![Alt text](DMP_64/DSPsteps/Step%202.png)

5) Under **Connect to device...** find and click on the USB tab if not on that tab.

   ![Alt text](DMP_64/DSPsteps/Step%203.png)

6) Next, select the appropiate device and click **OK**.

7) Next, choose the option where it says **Pull Data...** and click on **OK**

   ![Alt text](DMP_64/DSPsteps/Step%204.png)

8) Find the **Tools** Tab and find **Device Settings** and click it.

   ![Alt text](DMP_64/DSPsteps/Network.jpeg)

9) You will be directed to a page where you will be able to edit your IP Address. 

10) Once you have edited your IP Address, click on **OK** and your good to go.


### DMP 64 presets
**[(Back To Top)](#table-of-content-)**

The DMP 64 presets are for the user to be able to control the audio that is being played from the laptop.
The presets that we will be setting are for audio mute and unmute.

1) Make sure that you are in **Live** mode and **not Emulate**.

   ![Alt text](DMP_64/DSPsteps/Step%202.png)

2) First we would need to route our audio. 

The routing of the audio depends on your connection of your audio amplifier to the DMP 64.
For this project, the inputs and outputs we have used are 1 & 2. 
Our input 1 is routed to ouput 1 and the same goes for input and output 2.

   ![Alt text](DMP_64/DSPsteps/Step%206.png)


3)Secondly, select the device used in your input and output.

To select the device, click on the number and the **Buliding Blocks** interface will show up.
In the **Buliding Blocks** interface, click on the appropiate folder and device in the folder.

**Input Selection**

![Alt text](DMP_64/DSPsteps/Step%205.png)

**Output Selection**

![Alt text](DMP_64/DSPsteps/Step%205(2).png)

3) Once you have selected, click on the **dark grey box** and **rename** the input and output to the device you are using for easier reference.

![Alt text](DMP_64/DSPsteps/Step%207.png)

4) Lastly, save your file. 


With that, you are doing creating a preset. 
To create a preset for audio mute, simply uncheck the routing points and save your preset.

To recall a preset, find the Tab which says **Preset**.
In the dropdown menu, find for the preset which you wish to edit and click on **recall**.
![Alt text](DMP_64/DSPsteps/preset.png)


### Configure Control Processor
**[(Back To Top)](#table-of-content-)**

Here are the steps to configure your Processor if you have used your own AV Network.
In this project, we the processor we have used is the Extron IPCP Pro 350. Thus, we will be using the Extron software to configure our processor.

1) Download the Extron Toolbelt.

2) Connect your Processor to the Laptop via LAN.

3) Open up the Extron Toolbelt sofware, and click on **Discovery**.

![Alt text](Extron_GCP_GUI/TB_Img/Discovery.png)

4) Once the device appears, click on the **Discovery** button again to uncheck the button.

5) Next click on the device IP Address.

Your device information should be visible to you once you have clicked on the device IP Address.

![Alt text](Extron_GCP_GUI/TB_Img/device%20info.png)

6) Find the **Network** Tab and click on it. In the **Network** Tab, you will be able to change your device IP Address.

![Alt text](Extron_GCP_GUI/TB_Img/device%20info.png)


### Extron GCP and GUI Designer
**[(Back To Top)](#table-of-content-)**

To program our controls, we will be using the Extron GCP and GUI Designer. We are using Extron softwares as our control processor is an Extron device. 

#### Directory for Extron GCP and GUI Files

```mermaid
flowchart LR

   A[Extron_GCP_GUI] --> B[Extron GCP anf GUI Files]
   B --> C[Extron_GCP]
   B --> D[Extron_GUI]
   C --> E[Extron_Control_314.gcplus]
   D --> F[Extron_Control_Interface.gdl]

```

#### Extron GUI Designer

1) Download Extron GUI Designer

To start off, we will design our controls in the Extron GUI Designer.
Once you have open Extron GUI Designer, find the **File** Tab and click on **New Project**

![Alt text](Extron_GCP_GUI/GUI_Img/New%20project.png)

2) Choose your Interface

In this project, we will be using the interface for iOS.
Once you have the selected the appropiate interface, click on create.

![Alt text](Extron_GCP_GUI/GUI_Img/TouchPanel.png)

3) Start Designing your interface - Basic Designing

For this project, we will be learning to design a basic interface. 
For our interface, we will only be designing with Buttons and Labels. We will be designing for our projector controls.

4) Drag and drop your **Button** into your Page

Find the Tab which says **Control** and in that tab find **Button**. Once you have **Button**, click on it, then drag and drop it into your **Page**. Drag and drop 2 Buttons into your page.

![Alt text](Extron_GCP_GUI/GUI_Img/ControlTab.png)


5) Do the same for your **Label** but just 1 **Label** will do.

6) Label your Button

To Label your **Button**, double click on it. For our First Button, label it ***ON***. For the second, ***OFF***.
For your **Label**, change it to ***Projector Controls***.

![Alt text](Extron_GCP_GUI/GUI_Img/labeling.png)

7) Save and Build your File.

![Alt text](Extron_GCP_GUI/GUI_Img/Save.png)


#### Extron GCP

1) Download Extron GCP

To start off, we will design our controls in the Extron GCP.
Once you have open Extron GCP, find the **File** Tab and click on **New Project**.

![Alt text](Extron_GCP_GUI/GCP_Img/newproject.png)

2) Add the control processor device and Touch Panel

**Step 1**
Click on the **'+'** to add the control processor device

![Alt text](Extron_GCP_GUI/GCP_Img/how%20to%20add%20IPCP.jpg)

**Step 2**
Select and add the appropiate control processor
![Alt text](Extron_GCP_GUI/GCP_Img/select%20IPCP%20.jpg)

Change the IP Address if necessary
![Alt text](Extron_GCP_GUI/GCP_Img/select%20IPCP%20and%20change%20IP%20Add%20.jpg)

**Step 3**
Click on the **'+'** on the control processor device to add the Touch Panel
![Alt text](Extron_GCP_GUI/GCP_Img/how%20to%20add%20touch%20panel.jpg)

**Step 4**
Select and add the appropiate control device
![Alt text](Extron_GCP_GUI/GCP_Img/add%20touch%20panel.jpg)

3) Adding the appropiate drivers

All Extron drivers can be downloaded from their website.
![Alt text](Extron_GCP_GUI/GCP_Img/extrondriverspage.png)

**Step 1** 
Find the communication port Tab under the configuration palette
![Alt text](Extron_GCP_GUI/GCP_Img/communication%20port%20to%20add%20driver.jpg)

**Step 2**
Click on the port that you will be using. Under that port, find and click on the **down arrow** and click **add driver**.
![Alt text](Extron_GCP_GUI/GCP_Img/add%20driver%20to%20port.jpg)

**Step 3**
Proceed to select the appropiate driver that you will be using. In this project, we will be using the DAWUGN projector driver by optoma.
![Alt text](Extron_GCP_GUI/GCP_Img/drivers.jpeg)

4) Programming user interface

**Step 1**
Head to user interface under the confuguration palette in touch panel.
![Alt text](Extron_GCP_GUI/GCP_Img/User%20Interfaces%20to%20program.jpg)

**Step 2**
Find the icon that let's you import your GUI File/Layout
![Alt text](Extron_GCP_GUI/GCP_Img/Import%20Layout%20-%20GUI.jpg)


5) Program your GUI

   ![Alt text](Extron_GCP_GUI/GCP_Img/programming.png)


6) Lauch your Extron Touch Panel to use your interface

   ![Alt text](Extron_GCP_GUI/GCP_Img/Launch%20panel.jpg)



### Configuring Router

1) Reset your router 

2) Type the default Router IP Address(**192.168.1.1**) into the web browser and press **Enter**

3) Type in the user name and password in the given fields. The default username is **admin** and the default password is **password**

   ![Alt text](NETGEAR_Img/loginRouter.png)

4) Click on **Log In/Sign In**

   ![Alt text](NETGEAR_Img/SignIn.png)

5) You will now be logged in into your NETGEAR Router admin page

#### Changing Network Name (SSID) and Wifi Password

1) Find and click on the **Wireless** tab

   ![Alt text](NETGEAR_Img/wireless_tab.png)

2) In the tab, find **Name (SSID)** to change the network name

3) To change the password, find for **Password (Network Key)**

   ![Alt text](NETGEAR_Img/password&SSID.png)

#### Setting up your own AV LAN

1) Find and Click on the **ADVANCED** tab

   ![Alt text](NETGEAR_Img/advanced_tab.png)

2) In the **ADVANCED** tab, find and click on the **Setup** tab. 

   ![Alt text](NETGEAR_Img/setup_tab.png)

3) Under the Setup tab, find and click on **LAN Setup**.

   ![Alt text](NETGEAR_Img/LANsetup_tab.png)

4) You will be directed to the following interface where you can now assign your own Static and DHCP IP address 

   ![Alt text](NETGEAR_Img/IPaddress.png)


### Lighting Programming

**TouchOSC app sends OSC commands to Christie Widget Designer. UDP messaging protocol is used when sending the OSC commands.**

To set up the UDP messaging protocol in Widget Designer, you can refer to this link:
<https://christiepandorasbox.com/root/downloads/support/Documentation/Helpfile/udp-client_wdconfig.htm>

The custom address, command, and port number is used as Widget Designer  doesn't provide any specific format for OSC.

Once Widget Designer **receives the OSC commands**, it filters it to **determine the lighting effect required** (LED red, green, blue, etc). Widget Designer then **communicates with Pandora Box** to **jump to a specific cue** on the Pandora Box **video timeline** where the particular **lighting effects have been stored**. Pandora Box will continously loop on the specific lighting cue, until a different Cue is triggered.
   
---

## Testing Phase
**[(Back To Top)](#table-of-content-)**


### Demo Video of our Project

[[Watch Demo Video Here!]](https://youtu.be/ltyJQ8lT8JU "EGL314 Demo Video")

### Snake (Game Demo)

* Its a single player game.
* Player is given a controller to play the game.
* Player need to use the arrow keys **(Up, Down, Left, Right)** to move the "Snake"
* The more the snake eats, more it grows.
* Eat as much food as you can without touching the walls or any of the snake's body parts
* The game will *END* when the snake head touches the wall or any parts of the body.

---

* Here is the game demo of Snake:
  
<https://github.com/AbbieNgXinYi/Gamenian/SnakeGame/snakedemo.mp4>

---

* Click on the **"ESC"** button of the controller to pause the game

---

![Alt text](SnakeGame/Pausemenu.png)

---

* Once in pause menu, you are given the options to **quit** the game or **resume**

---

![Alt text](SnakeGame/PausemenuQuit.png)

---

* When **Game Over** , you are given the option to start over or quit from the game

---

![Alt text](SnakeGame/gameoverMenu.png)

![Alt text](SnakeGame/gameoverRP.png)

---

## 2048 (2nd game demo)

* It's a single player game.
* It is played on a 4x4 grid.
* Players are given a controller to move the tiles **( up, down, left, right)** or **( W, A, S, D)**.
* To play, the player must combine tiles until they reach the number **2048**.
* The tiles can only be **combined** if the numbers are the same. 

---

![Alt text](/2048img/2048bootup.jpg)

---

* The tiles contain only integer values starting from 2 and that are a power of 2 ( like 2,4,8,16,32, etc)
* Players will start with 2tiles, the lowest possible number available is 2.
* The game will end if players are able to reach 2048 **OR** ran out of tiles to move.

---

* Use the space bar to click **"Try Again"** if want to replay the game.

![Alt text](/2048img/2048gameover.jpg)

---

* While the game technically ends when players hit 2048, the game will let you continue past it

* To restart the game, use the arrow keys (Left, Right) or (A, D), and hit the space bar to press **"New Game"**
  
---

![Alt text](/2048img/2048restart.jpg)

---

* This is your current score of the current game

---
![Alt text](/2048img/2048personalscore.jpg)

---

* This is the high score/best score that you had achieve the previous game

---
![Alt text](/2048img/2048highscore.jpg)

---
* To quit the game, use the space bar and press **"Quit"**

---

![Alt text](/2048img/2048quit.jpg)

---

* To pause the game, press **"ESC"** button on the controller

---

![Alt text](/SnakeGame/Pausemenu.png)

---

## Ping Pong Game (3rd Game Demo)

### **Info :**

* It's a two-player game
* The goal of the game is to make your opponent miss the ball, and when it hits their side of the wall, you score a point. Whereas if the ball hits your side of the wall, the opponent scores a point.
* You need to obtain 3 points in total to win the game.
* You can only move **Up or Down**, NEVER side-ways. Only the *Ball* can move side-ways or even diagonally.
* With the keyboard controls of ( W  , S ) for Player1 while the other control for Player2 is ( Up , Down arrow keys)
* You can move individual paddle to hit the ball.
* **( Blue for Player1, Orange for Player2).**

![Alt text](/PongImages/PongGame.png)

---

* Click the **"ESC"** button to bring you to the Pause menu

![Alt text](/PongImages/QuitGame.png)

---

* This is individuals scores ( Both you and your opponents ), depending where you are sitted, the section of where u can move your paddle, it is your score.

![Alt text](/PongImages/ScorePlayer.png)

---

* Once either side scores a total of 3, the Game over screen will appear

![Alt text](/PongImages/GameOverScreen.png)

---

* To replay the match again, press **"Replay"**

![Alt text](/PongImages/Replay.png)

* If not, click **"Main Menu"** to quit game, which brings you back to main menu screen

![Alt text](/PongImages/BackToMenu.png)

* Here is a demo of the Pong Game:

<https://github.com/AbbieNgXinYi/Gamenian/blob/main/PongImages/PongGame.mp4>

---


### Troubleshooting
**[(Back To Top)](#table-of-content-)**

#### What if the video is unable to livefeed onto the projector?

* Check the cabling from the CaptureCard to the media server. Change the cable if need to.
* Check the driver of the CaptureCard to see if they are communicating with each other. If they are not able to communicate, reinstall the driver.
* If its neither of them, check the pandora box, ensure that the layer that you are projecting out is visible(not hidden).

#### Aver Media Capture Card

* Check if the Capture Card LED if lit Blue

* If not lit blue but red:
   1) Check the USB and HDMI cables - change if necessary
   2) Check for lose cable connection
   3) Check if cable is connected to the right source
      * If using media server, USB cable plug to Media server, not laptop
      * Not using media servr, USB plug to Laptop

#### PB Management

* If you press **X** on the client interface and when you press Pandora Box and it says it is open when you have closed it:
    1) Find **Taskbar** and switch it on
    2) Now, you should be able to see the taskbar in your PB Menu page
    3) Find the Pandora Box tab and click on it to get back the Pandora Box client interface

* Ensure that the IP address of the laptop is the same as the PB management too.

#### Christie Pandora Box

* Make sure that dongle is plugged in either in the server or laptop

* If the projector has been switched on and off, and content is not displayed:
   1) Save your file first
   2) Close **Christie Pandora Box** and in PB management, click on **disconnect**
   3) After you have disconnected, you may either:
      * Close the whole PB Management
      <br> OR
      * Right Click on the box which says Server[Number depends on how many servers you have]
      * Find **System** and in that tab, click on **Reboot**

* If you are unable to preview your content in pandora box:
   1) Make sure that you have clicked on **toggle preview**
   2) In pandora box find and click on **all cameras**

* If you can't find your mesh:
    1) In pandora box find and click on **all cameras**
    2) Check which **layer output** you are on

#### Arduino

* Check the IDE software if its affecting the arduino

* If unable to download code due to software:
   1) Save your code first
   2) Uninstall IDE and reinstall it

* Check if Arduino is online or offline

* If offline:
   1) Check the port - check if you have connected to the port
   2) Check if you have connected to the correct Arduino

* If not software issue, check whether your Arduino is corrupted. If hardware issue, change it.

#### Unity Hub

* Remember to uncheck the **Scenes/SampleScene**

   ![Alt text](UnityHub/with%20sample.jpg)

* If you uncheck the box, you will be given a blue screen instead of the game interface

   ![Alt text](UnityHub/bluescreen.jpg)


### Extron GCP and GUI Designer

* Check that the driver you are using is the correct driver for your projector

* Check that you have imported the correct GUI file

* Remember to always save your file before launching the touch panel

* Check that your username and password when you launch your touch panel is correct


### TouchOSC Application

* Always check that the IP address and send port of the device you are communicating with is correct

* Make sure that you have ticked the connection box 

* For the buttons, always check that the address and arguement that you have typed in corresponds to the one you have set in the arduino code

---
