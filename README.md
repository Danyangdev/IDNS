# IDNS
Indoor Drone Navigation System

Instruction to start ardrone autonomy
#Installation steps
1. Go to website: https://github.com/eborghi10/AR.Drone-ROS 

	1. This website is tum simulator on kinetic
	2. Installing steps:
		mkdir -p ~/ardrone_simulator/src
		cd  ~/ardrone_simulator/src
		catkin_init_workspace
		git clone https://github.com/iolyp/ardrone_simulator_gazebo7
		cd ..
		catkin_make
	3. Start steps
		source devel/setup.bash
		roslaunch cvg_sim_gazebo ardrone_testworld.launch


2. Go to website: https://github.com/AutonomyLab/ardrone_autonomy-release

	1. Find the corresponding version of ROS
		1. eg. Kinetic: website: https://github.com/AutonomyLab/ardrone_autonomy
		2. Donwload this file and store into the src file of the workspace
		3. Using catkin_make compile this file

4. Go to website https://github.com/justagist/pid_control_ardrone

	1. Download master file and store it into the workspace's src file
	2. Compile it

#Control the quadrotor vehicle on the simulator

	#1. Start the simulator
		cd
		cd ardrone_simulator
		source devel/setup.bash
		roslaunch cvg_sim_gazebo ardrone_testworld.launch

	#2. Start the simulator control
		cd
		cd ardrone_simulator
		source devel/setup.bash
		cd src/pid_control_ardrone-master/pid_ardrone/src
		./sim_controller.py

	#3. Start the keyboard control
		cd
		cd ardrone_simulator
		source devel/setup.bash
		cd src/pid_control_ardrone-master/ardrone_joy/scripts
		./ardrone_joy_keyboard.py

	#4. Track the trajectory of the drone by keyboard
		cd
		cd ardrone_simulator
		source devel/setup.bash
		cd src/pid_control_ardrone-master/ardrone_joy/scripts
		./plot.py
	#4 Track the trajectory of the drone drive by controller
		cd 
		cd ardrone_simulator/src/pid_control_ardrone-master/pid_ardrone/src
		./plot.py

# Control the real drone

# steps here:
	#-2	Using ifconfig check the ip address
	#-1     connect to drone wifi
	#0	roscore
	#0.1	
		cd
		cd ardrone_simulator
		source devel/setup.bash
		roslaunch ardrone_autonomy ardrone.launch

	#1.  ################not need
		cd
		cd ardrone_simulator
		source devel/setup.bash
		cd src/pid_control_ardrone-master/mocap_odometry/scripts
		./mocap_odometry.py
	#2.
		cd
		cd ardrone_simulator
		source devel/setup.bash
		cd src/pid_control_ardrone-master/pid_ardrone/src
		./controller.py
	#3.  
		cd
		cd ardrone_simulator
		source devel/setup.bash
		cd src/pid_control_ardrone-master/ardrone_joy/scripts
		./ardrone_joy_keyboard.py

	#python ardrone_joy_keyboard.py




# stop here for control the real drone

	#4. Track the trajectory of the drone
		cd
		cd ardrone_simulator
		source devel/setup.bash
		cd src/pid_control_ardrone-master/ardrone_joy/scripts
		./plot.py

#Way to check the node-topic graph
	1. rosrun rqt_graph rqt_graph

#Open camera: http://wiki.ros.org/tum_simulator
#1	# The output camera
	rosrun image_view image_view image:=/ardrone/image_raw

	# The front camera
	rosrun image_view image_view image:=/ardrone/front/image_raw

	# The buttom camera
	rosrun image_view image_view image:=/ardrone/bottom/image_raw

	# The height sensor
	rostopic echo /sonar_height

	#The navigation info
	rostopic echo /ardrone/navdata

	#A launch file for joystick drivers and image view nodes
	roslaunch cvg_sim_test demo_tool.launch
