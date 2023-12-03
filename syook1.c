 #include <stdio.h>
 
  // Structure to hold beacon data
  struct Beacon {
      void (*sendPacket)(struct Beacon*);
      float accelerometerData;
      int batteryLevel;
      char macAddress[18]; // Assuming MAC address is 17 characters + '\0'
  };
 
  // Function to send beacon packets
  void sendPacket(struct Beacon* beacon) {
      // Simulating sending beacon packets
      printf("Beacon Packet Sent\n");
  }
 
  // Function to extract data and check movement status
  void extractData(struct Beacon* beacon) {
      // Extracting accelerometer, battery level, and MAC address (simulated values)
      beacon->accelerometerData = 0x03 ; // Sample accelerometer data(version number)
      beacon->batteryLevel = 100; // Sample battery level
      snprintf(beacon->macAddress, sizeof(beacon->macAddress), "12:34:56:78:90:00"); // Sample MAC address
 
      // Check movement status based on accelerometer data
      if (beacon->accelerometerData > 0.0) {
          printf("Beacon is moving\n");
      } else {
          printf("Beacon is not moving\n");
      }
  }
 
  int main() {
      struct Beacon myBeacon;

      // Assigning function pointers
      myBeacon.sendPacket = sendPacket;
 
      // Extracting data and checking movement status
      extractData(&myBeacon);
 
      // Printing extracted data
      printf("Accelerometer Data(version number): %.2f\n", myBeacon.accelerometerData);
      printf("Battery Level: %d%%\n", myBeacon.batteryLevel);
      printf("MAC Address: %s\n", myBeacon.macAddress);
 
      // Sending beacon packet
      myBeacon.sendPacket(&myBeacon);
 
      return 0;
 }
