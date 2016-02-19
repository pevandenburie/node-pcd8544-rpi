#!/bin/bash

gcc -o cpushow cpushow.c PCD8544.c  -L/usr/local/lib -lwiringPi
