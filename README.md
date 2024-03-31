# Organized
This project as for aim to makes us learn how to uses linked list and how to sort data

This project can be divided into 2 parts:<br>
✓ Storing and handling hardware<br>
✓ Sorting your stuff according to tags<br>

In fact, there’s a third challenge! You’re going to be handling a lot of hardware and your sorting
algorithm needs to be able to process a large quantity of hardware quickly and efficiently.<br>

Materials<br>
Your laboratory may be a mess, but not just anything is lying around. All the materials to be<br>
organized is divided into 5 categories, mainly for robot design:<br>

✓ Actuators: buttons, levers, . . .<br>
✓ Devices: radios, watches, recorders, . . .<br>
✓ Processors: intel, amd, . . .<br>
✓ Sensors : movement sensor, sound sensor, thermal sensor, . . .<br>
✓ Wires : type-c, hmdi, jack, . . .<br>

## Example
Usage: <br>
  make<br>
  ./organized<br>

ADD command<br>
```c
B-CPE-110> ./organized
Workshop » add WIRE usb
WIRE n°0 - “usb” added.
Workshop » add ACTUATOR button, DEVICE recorder
ACTUATOR n°1 - “button” added.
DEVICE n°2 - “recorder” added.
Workshop »
```
DEL command<br>
```c
B-CPE-110> ./organized
Workshop » add WIRE usb, ACTUATOR button, DEVICE recorder
WIRE n°0 - “usb” added.
ACTUATOR n°1 - “button” added.
DEVICE n°2 - “recorder” added.
Workshop » del 1
ACTUATOR n°1 - “button” deleted.
Workshop » del 0, 2
WIRE n°0 - “usb” deleted.
DEVICE n°2 - “recorder” deleted.
Workshop »
```
## Test

| Category                         | Percentage | Tests | Crash |
|----------------------------------|------------|-------|-------|
| Algorithm app                    | 75%        | 6/8   | x     |
| Basics                           | 100%       | 4/4   | x     |
| Optimization                     | 100%       | 7/7   | x     |
| Parsing                          | 66.7%      | 2/3   | x     |
| Robustness                       | 100%       | 7/7   | x     |
| End score                        | 89.7%      | 26/29 | x     |


Beware of -42 Epitech students !!!
