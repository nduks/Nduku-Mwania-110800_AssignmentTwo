#include <iostream>
#include <chrono> //C++ preprocessor directive that provides a collection of types and functions to work with time.
#include <thread> //C++ preprocessor directive that provides functionality for working with threads and multi-threading

using namespace std;

// Define an enumeration to represent the states of a traffic light
enum class trafficLight {
    RED, ORANGE ,GREEN
};

int main() {
    trafficLight currentState = trafficLight::RED; // Initialize the current state of the traffic light to RED

    while (true) {
        // Simulate a traffic light cycle with a timer
        cout << "Traffic Light" << endl;

        // Use a switch statement to display what to do for each color and how they transition to the next
        switch (currentState) {
            case trafficLight::RED:
                cout << "Stop! The light is red." << endl <<endl;
                currentState = trafficLight::ORANGE; // Change to orange after red
                break;

            case trafficLight::ORANGE:
                cout << "Prepare to Go. The light is orange." << endl<< endl;
                currentState = trafficLight::GREEN; // Change to green after orange
                break;

            case trafficLight::GREEN:
                cout << "Go! The light is green." << endl<< endl;
                currentState = trafficLight::RED; // Change to red after green
                break;
        }

        // Simulate a pause between states
        this_thread::sleep_for(chrono::seconds(5)); // Timer duration set at 5 seconds
    }

    return 0;
}
