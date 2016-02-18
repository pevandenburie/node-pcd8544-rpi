
var bindings = require('bindings');
var lcd = bindings('pcd8544-rpi');

lcd.init();
lcd.clear();
lcd.drawstring(0, 0, "Hello Raspi!");
