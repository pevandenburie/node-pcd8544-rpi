#!/bin/bash

gcc -o cpushow pcd8544_rpi.c PCD8544.c  -L/usr/local/lib -lwiringPi
