#!/bin/bash
LC_ALL=C.UTF-8 gnuplot -e "set terminal x11; plot 'exportValues' using 1:2 with lines title 'My Data'" -persist
