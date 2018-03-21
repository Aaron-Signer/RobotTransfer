set multiplot layout 2,1
plot "enteringRoomTwoXY.dat"
plot "enteringRoomTwoWalls.dat" with line
unset multiplot
pause -1 "Press enter to exit"
