#include <stdio.h>

// Structure to simulate accelerometer data
typedef struct {
    float x;
    float y;
    float z;
} AccelerometerData;

// Function to simulate obtaining accelerometer data
void getAccelerometerData(AccelerometerData *data) {
    // Simulated accelerometer data
    data->x = 0.1;  // Replace with actual accelerometer data retrieval
    data->y = 0.2;
    data->z = 0.3;
}

// Function to simulate obtaining battery level
float getBatteryLevel() {
    // Simulated battery level
    return 80.5;  // Replace with actual battery level retrieval
}

// Function to simulate obtaining MAC address
void getMACAddress(char *macAddress) {
    // Simulated MAC address
    // Replace with actual MAC address retrieval
    sprintf(macAddress, "00:11:22:33:44:55");
}

// Function to send beacon packets
void sendBeaconPackets() {
    // Simulate obtaining accelerometer data
    AccelerometerData accelData;
    getAccelerometerData(&accelData);

    // Simulate obtaining battery level
    float batteryLevel = getBatteryLevel();

    // Simulate obtaining MAC address
    char macAddress[18];  // MAC address is 12 hex digits + 5 colons + null terminator
    getMACAddress(macAddress);

    // Extracting information from the beacon packet
    printf("Accelerometer Data: x=%.2f, y=%.2f, z=%.2f\n", accelData.x, accelData.y, accelData.z);
    printf("Battery Level: %.2f%%\n", batteryLevel);
    printf("MAC Address: %s\n", macAddress);

    // Check if the beacon is moving or not based on accelerometer data
    if (accelData.x != 0.0 || accelData.y != 0.0 || accelData.z != 0.0) {
        printf("Beacon is moving.\n");
    } else {
        printf("Beacon is not moving.\n");
    }
}

int main() {
    // Call the function to send beacon packets
    sendBeaconPackets();
    return 0;
}
