UniOok
======
OOK modulation is used in various remote controls for gates and switches, sometimes you need another remote and buying a new one for each device can amount to alot of money.
The project can be used to build a universal OOK remote control using an Arduino and a cheap 433Mhz transmitter.
Getting this to work requires two steps, capturing and decoding the OOK signal and replaying it with the arduino.


Hardware
-------
* Arduino (any type will do).
* RTL SDR dongle - for example - [EBay Nooelec]
* 433Mhz transmitter - for example [from DX]
* (optional) Button
* Circut building is pretty simple - connect button between pin 3 and 5v, connect the input leg of the transmitter to pin 2.


Software
--------
* SDR#
* ook-decoder

Capturing and decoding
-------
WIP

Replaying the signal
------
WIP


[EBay Nooelec]:http://www.ebay.com/itm/Newsky-TV28T-v2-USB-DVB-T-RTL-SDR-Receiver-RTL2832U-R820T-Tuner-MCX-Input-/
[from DX]:http://www.dx.com/p/zsd-t3-315-433mhz-ask-high-power-rf-transmitter-module-yellow-228289
[ook-decoder]:https://github.com/jimstudt/ook-decoder
[SDR#]:http://sdrsharp.com/
