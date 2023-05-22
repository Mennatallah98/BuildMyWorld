# BuildMyWorld
[![Udacity - Robotics NanoDegree Program](https://s3-us-west-1.amazonaws.com/udacity-robotics/Extra+Images/RoboND_flag.png)](https://www.udacity.com/robotics)


![Example image](world.png)

## Overview
This project is the first project in Udacity Robotics Software Engineer nano degree and it includes three important elements : <br>
	&emsp; &emsp; - A buliding that is shown in the photos above <br>
	&emsp; &emsp; - A robot model that is shown in the photos above <br>
	&emsp; &emsp; - A plugin that prints welcome to menna's world when running the world <br>


**Keywords:** Gazebo, Robotics, Udacity

**Author: Mennatallah Aly<br />**

The BuildMyWorld package has been tested under [ROS] Melodic on Ubuntu 18.04. and Gazebo 9.0.0


## Uasge steps

clone the latest version from this repository 

	git clone https://github.com/Mennatallah98/BuildMyWorld.git
	
check your system is up to date

	sudo apt update

Delete the build folder

	cd BuildMyWorld
	rm -r build

Create a new buiild folder

	mkdir build
	cd build
	cmake ../
	make
	
Export the plugin

	export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}=:{PATH_TO_REPOSITORY}/BuildMyWorld/build
	
Open the world
	
	cd..
	cd world
	gazebo myworld
	
## Structure

	└── BuildMyWorld
	    ├── CMakeLists.txt               # Link libraries 
	    ├── model                        # Model files 
	    │   ├── Building
	    │   │   └── myworld
	    │   │       ├── model.config
	    │   │       └── model.sdf
	    │   └── Robot
	    │       └── myrobot
	    │           ├── model.config
	    │           └── model.sdf
	    ├── script                      # Gazebo World plugin C++ script
	    │   └── welcome.cpp
	    ├── world                       # Gazebo main World containing 
	    └──    └── myworld



[ROS]: http://www.ros.org


