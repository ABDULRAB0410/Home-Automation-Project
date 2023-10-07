# Home-Automation-Project
The system employs embedded C programming to efficiently control household appliances via a PIC16F887 microcontroller. It integrates with GSM technology, enabling remote control through an Android app and ensuring stable operation with a two-minute command delay.

INTRODUCTION:-
Home Automation refers to the electronic control of household devices, offering convenience and efficiency. The growing interest in smart home solutions has led to the interconnection of everyday devices through technologies like Bluetooth, Wi-Fi, ZigBee, and GSM. These innovations encompass lighting, temperature control, irrigation, door locks, and entertainment systems, enhancing our quality of life.

The integration of technologies such as GSM, despite some limitations like latency and restricted data transfer, has revolutionized home automation. Today, we can control lights and fans effortlessly through our smartphones, granting us unprecedented luxury and comfort. GSM, an established cellular communication technology, continues to be widely used, evolving with faster data transfer rates.

GSM networks are highly reliable and suitable for home appliance communication due to their extensive coverage, ensuring constant connectivity. Additionally, they offer advanced security features, safeguarding transmitted data from unauthorized access. This project presents an SMS-based home automation system that operates independently of local networks, ensuring secure and efficient control of household devices.

OBJECTIVES:-
This project aims to create a device that can automatically control power surges in the home and
let users remotely control and monitor a number of home appliances using a cell phone. With the
limitations of the technologies used, this system is a powerful and adaptable tool that will
provide this service at any time and from anywhere.

Lights, home appliances, security systems, and climate control systems are potential targets; anything with a connection to electricity.
Implementing a microcontroller-based control module that receives its instructions and
commands from a cellular phone over the GSM network is the proposed strategy for designing
this system. As the project's title suggests, "Home automation based on GSM module using
Arduino" aims to construct a control system that enables complete control of the interface it is
based on.

Some of the basic objectives of the project are as follows-
● To cut the power and time consumption
● To control appliances and other devices through SMS
● To obliterate the requirement of being physically present to complete the tasks which
involves operations with the concerned appliance.

PROCEDURE:-
● The user clicks an option on his mobile and a text message is generated.
● The text message is sent via the GSM network attached in the system.
● The GSM Sim900 Module attached in the system receives the message sent from the
user’s
● The GSM Sim900 module is attached to the Arduino Uno module which is included with
ATMEGA microcontroller
● The microcontroller keeps a check on the module if it has received any text message from
the user’s end.
● The GSM module sends a message to the microcontroller. While the GSM Module and
Arduino Module communicate via a special set of messages called as AT COMMAND
SET.
● After the command is received, the microcontroller sends another set of commands to
GSM as it can hold only one message at a time. It commands to delete the holding
message so that the next command can be executed.
● The microcontroller receives the command to perform the task by performing a search
and match technique in which it goes through a table of commands with the set of
corresponding tasks (See table (2)).
● Finally, the microcontroller dispatches a command to the relay to the appliance which is
to be turned on/off.

CONCLUSION:-
SMS based remote control home appliances will be a boon to the future generations because we
can easily predict that mobile will be used mostly by each and everyone. So the person can
control the home appliances using a mobile application.

In easy automation devices where the internet facilities and even laptops are not provided, you'll be able to use cellular telephone-based
control devices which are simple and price effective. It has a bright future as appliances can be
controlled using audio/voice commands which will be beneficial for handicapped folks and blind
persons.
