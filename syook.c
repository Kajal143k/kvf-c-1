#include <stdio.h>
#include <stdint.h>
  // Define a structure for the accelerometer beacon frame
     struct AccelerometerBeacon {
       uint8_t datalength;  // datalength
       uint8_t flagdatatype; //flag data type
       uint8_t flagdata;     // flag data
       uint8_t datalengthfield;  //data length field
       uint8_t servicedata;  //service data
      uint16_t uuid_data; //uuid_data
      uint8_t frame_type;   // Type of frame (e.g., beacon)
      uint8_t version;      // Version number of the sensor
      uint16_t x_axis;         // X-axis acceleration
      uint16_t y_axis;         // Y-axis acceleration
       uint16_t z_axis;         // Z-axis acceleration
      // Other information relevant to the accelerometer...
  };
  void getmacaddress(char *macaddress)
  {
  sprintf(macaddress,"12:34:56:78:90:00");
  }
  float getbatterylevel()
  {
  return 100.0;
  }
   int main() {
      // Create an instance of the AccelerometerBeacon structure
      struct AccelerometerBeacon accelerometer_beacon;
      char macaddress[18];
      getmacaddress(macaddress);
      float batterylevel=getbatterylevel();
      // Fill in the beacon information (hypothetical values)
 // Fill in the beacon information (hypothetical values)
 
      accelerometer_beacon.datalength = 0x02;   //Example datalength
      accelerometer_beacon.flagdatatype= 0x01; //Example flag data type
      accelerometer_beacon.flagdata = 0x06;     //Example flag data
      accelerometer_beacon.datalengthfield = 0X12;  //Example data length field
      accelerometer_beacon.servicedata = 0X16;     //Example service data
     accelerometer_beacon.uuid_data = 0XE1FF;     // Example uuid data
  //
      accelerometer_beacon.frame_type = 0xA1;   // Example frame type for beacon
      accelerometer_beacon.version = 0x03;     // Example version number
      accelerometer_beacon.x_axis = 0X0000;     // Example X-axis acceleration
      accelerometer_beacon.y_axis = 0XFF80;     // Example Y-axis acceleration
      accelerometer_beacon.z_axis = 0X013B;     // Example Z-axis acceleration
 
      // Printing the information
      printf("Accelerometer Beacon Frame Information:\n");
      printf("Data length: %d\n", accelerometer_beacon.datalength);
      printf("Flag data type: %d\n", accelerometer_beacon.flagdatatype);
      printf("Flag data: %d\n", accelerometer_beacon.flagdata);
      printf("data length field: %d\n", accelerometer_beacon.datalengthfield);
      printf("service data: %x\n", accelerometer_beacon.servicedata);
      printf("UUID data: %x\n", accelerometer_beacon.uuid_data);
      //
      printf("Frame Type: %x\n", accelerometer_beacon.frame_type);
      printf("Version: %d\n", accelerometer_beacon.version);
      printf("Battery level: %.2f%%\n", batterylevel);
      printf("X-axis Acceleration: %x\n", accelerometer_beacon.x_axis);
      printf("Y-axis Acceleration: %x\n", accelerometer_beacon.y_axis);
      printf("Z-axis Acceleration: %x\n", accelerometer_beacon.z_axis);
      printf("MAC Address: %s\n", macaddress);
      return 0;
}
