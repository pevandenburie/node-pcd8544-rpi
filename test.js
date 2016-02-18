// test.js
const lcd = require('./build/Release/pcd8544_rpi');

lcd.init();
lcd.clear();
lcd.drawstring(0, 0, "Hello Raspi!");
