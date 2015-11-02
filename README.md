# onimeshWinGUI

This is the GUI for OniMesh(OM), which will be used mainly as a launcher for OM itself. It has ben developed using QT Creator 3.5.0 (opensource), with C++, based on QT 5.5.0. It's the latest version of QT since I installed it (September 27th, 2015).

This GUI was developed for Windows computers, so all of these instructions require the user to be in a Windows machine to execute them.


### Prerequisites

##### QT

For information on QT, go to http://www.qt.io/ide/

To download and install QT:

1. Access http://www.qt.io/download/ and state that you're developing Open source software in order to get the free opensource version. 
2. Install the file you downloaded. Just click "Next" on every screen during the installer.

To open this project with QT:

1. Download/clone this project to your computer.
2. Open QT.
3. Go to File > Open Project and select "OMWinGUI.pro"
4. When prompted to configure the project, check the box that says "Desktop QT 5.5.1 MinGW 32bit" and click "Configure Project".
5. Build the project (CTRL+B) and then run it (CTRL+R). The GUI will appear. 

##### OpenNI2

OpenNI2 is only necessary for OniMesh, not the GUI.
For instructions on how to install all the prerequisites for OniMesh, follow this link:
https://github.com/volcanobotg/onimesh


### Usage

In order to use this GUI to launch OniMesh, it is required that both the executable for the GUI("OMWinGUI.exe") and OniMesh to be in the same folder. Once you've built and run the project for the first, a new directory will be created in the same directory as your "onimeshWinGUI" directory. Inside that new folder ("build-OMWinGUI-Desktop_Qt_5_5_1_MinGW_32bit-Debug"), and inside the "debug" directory is the executable for the GUI("OMWinGUI.exe").

For this executable to run outside QT, though, you'll need the following libraries:

libgcc_s_dw2-1.dll
libstdc++-6.dll
libwinpthread-1.dll
Qt5Cored.dll
Qt5Guid.dll
Qt5Widgetsd.dll

If you did a regular installation, these can be found in this directory: C:\Qt\5.5\mingw492_32\lib