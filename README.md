# Repository associated with paper:  
"Multi-Modal Model Predictive Control through Batch Non-Holonomic Trajectory Optimization: Application to Highway Driving" - 
[Youtube](https://youtu.be/HPME4cYlR24)  

If you use this code for your own work, please consider citing:
```
@article{adajania2022multi,
  title={Multi-Modal Model Predictive Control Through Batch Non-Holonomic Trajectory Optimization: Application to Highway Driving},
  author={Adajania, Vivek K and Sharma, Aditya and Gupta, Anish and Masnavi, Houman and Krishna, K Madhava and Singh, Arun K},
  journal={IEEE Robotics and Automation Letters},
  volume={7},
  number={2},
  pages={4220--4227},
  year={2022},
  publisher={IEEE}
}
```
  
## Structure  
The folder ```ros_ws/src``` contains the implementation of approaches: Standard MPC, Batch ACADO over parallel threads, Frenet Frame Planner in C++, and our proposed Multi-modal MPC. It also contains a highway driving simulator and custom ros2 messages used by the packages.  
* **mpc_car_acado_single**: implementation of standard MPC. The problem formulation can be viewed in the code generation file (```code_gen.cpp```).  
* **mpc_car_acado**: implementation of batch ACADO or multi-threaded ACADO where each thread solves the optimization problem for different goals.  
* **frenet_cpp**: implementation of trajectory sampling based approach: Frenet Frame Planner in C++
* **mpc_car_batch**: implementation of our proposed multi-modal MPC that is built on Eigen C++ library.
* **highway_car**: a highway driving simulator where obstacles are motivated by Intelligent Driver Model (IDM).
* **msgs_car**: custom ROS2 messages that consists of visualization data as well as control input data.
* **stats**: folder where the simulation data is saved
## Dependencies
* [ROS2](https://docs.ros.org/en/foxy/Installation.html)
* [eigen_quad_prog](https://github.com/jrl-umi3218/eigen-quadprog)   
* [NGSIM dataset](https://drive.google.com/drive/folders/1cgsOWnc4JTeyNdBN6Fjef2-J5HqjnWyX?usp=sharing)

    The dataset is of the I-80 freeway in the San Francisco Bay area. Download the dataset from the link above and place them in `ros_ws/src/highway_car/highway/car`. The dataset has been taken from the [US Department of Transportaion website](https://data.transportation.gov/Automobiles/Next-Generation-Simulation-NGSIM-Vehicle-Trajector/8ect-6jqj). 
   

## Installation
After installing the dependencies, build our package as follows:  
``` 
cd your_ws/src
git clone https://github.com/dv367/Batch-Opt-Highway-Driving  
cd your_ws/src/ros_ws/src  
colcon build  
source ./install/setup.bash  
``` 
#### Setting a high-level driving mission
* There are two obstacles settings: obstacles follow Intelligent Driver Model (IDM) or pre-recorded trajectories from NGSIM Dataset    
* In each approach folder, you will find ```config.yaml```, set ```setting``` to one of the following:  
    - Cruise driving in IDM env - `cruise_IDM`
    - Cruise driving in NGSIM env - `cruise_NGSIM`
    - Move with high speed and with preference of rightmost lane in IDM env - `HSRL_IDM`
    - Move with high speed and with preference of rightmost lane in NGSIM env - `HSRL_NGSIM`


#### In the first terminal:
* Running our proposed multi-modal MPC  
```
ros2 run mpc_car_batch mpc_node  
```
* Running multi-threaded-acado 
```
ros2 run mpc_car_acado mpc_node  
```
* Running standard-mpc-acado   
```
ros2 run mpc_car_acado_single mpc_node_single
```
* Runinng frenet-frames C++
```  
ros2 run frenet_cpp frenet_car
```
#### In the second terminal:
```
source ./install/setup.bash  
ros2 run highway_car highway_node2    
```  


