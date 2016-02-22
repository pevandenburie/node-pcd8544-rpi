Node-PCD8544-RPI
================

Node.js binding of PCD8544 LCD screen driver for Raspberry-Pi.

Installation
------------

**Install wiringPi driver**

This package makes use of WiringPI-library of Gordon Henderson (https://projects.drogon.net/raspberry-pi/wiringpi/).

``` bash
$ cd /home
$ git clone git://git.drogon.net/wiringPi
$ cd wiringPi
$ sudo ./build
```

**Install the package from the repository**

``` bash
$ npm install https://github.com/pevandenburie/node-pcd8544-rpi.git
```


Example
-------

Create a `test_lcd.js` file and edit it:

``` javascript
const lcd = require('pcd8544_rpi');

lcd.init();
lcd.clear();
lcd.drawstring(0, 0, "Hello Raspi!");
lcd.display();
```

Then run it in **sudo** mode, as it is required to control GPIOs on Raspberry-Pi:

``` bash
$ sudo node ./test_lcd.js
```

Look at your screen: the first line should be filled with "Hello Raspi!".
