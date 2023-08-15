// Kinematic Bicycle Model.cpp : This file contains a simple bicycle kinematic model. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

float* bicycle_kinematic_model(int, float);

int main()
{
    float* results;

    results = bicycle_kinematic_model(10, 0.1745);  // Steering angle 10 degrees
    
    // Correct results: x = 86.6025 ; y = 50.0001 ; New Heading Angle = 4.93093 rad | 283 degree
    cout << "x: " << abs(results[0]) << "\ny: " << abs(results[1]) << "\nNew Heading Angle: " << abs(results[2]);

    return(0);
}

/**
  * bicycle_kinematic_model - Calculate the x and y position and heading angle of the vehicle
                              as a result of a steer and constant velocity
  * @velocity: Velocity magnitude of the vehicle
  * @steering_angle: the angle of the steer
  * Return: A pointer to a list containing the new x and y positions and the new heading angle
  */
float* bicycle_kinematic_model(int velocity, float steering_angle) {
    float x_dot, y_dot, heading_angle_dot, outputs[3];
    // Assumptions
    float x = 0, y = 0, t = 10, heading_angle = 0.5236, L = 4; // Heading angle is 30 degrees

    // We are going to assume that our reference point is at the center of the rear axle
    x_dot = velocity * cos(heading_angle);  // Horizontal component of the velocity
    y_dot = velocity * sin(heading_angle);  // Vertical component of the velocity
    heading_angle_dot = velocity * tan(steering_angle) / L; // w = v / r ; r = L / tan(phai)

    // New coordination and heading angle after 10 seconds
    outputs[0] = x + x_dot * t;
    outputs[1] = y + y_dot * t;
    outputs[2] = heading_angle + heading_angle_dot * t;

    return(outputs);
}
