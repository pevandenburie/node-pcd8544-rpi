// test.js
const lcd = require('../index');

lcd.init();
lcd.clear();
lcd.drawstring(0, 0, "Hello Raspi!");
lcd.display();




