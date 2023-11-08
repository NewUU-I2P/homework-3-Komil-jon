#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    int number;
    // make use of control flow statements
    number = long(&macAddress[1]) + long(&macAddress[0]) * 16;
    if (number == 256){
        result = "Broadcast";
        return result;
    }
    if (number % 2 == 0){
        result = "Unicast";
    } else{
        result = "Multicast";
    }
    // return result;
    return result;
}
