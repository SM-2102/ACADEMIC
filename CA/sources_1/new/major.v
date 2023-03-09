// Code your design here
module major(input [4:0]sw,output led);
  assign led = (sw[0]&sw[1]&sw[2])|
    (sw[0]&sw[1]&sw[3])|
    (sw[0]&sw[2]&sw[4])|
    (sw[1]&sw[2]&sw[3])|
    (sw[0]&sw[1]&sw[4])|
    (sw[0]&sw[3]&sw[4])|
    (sw[0]&sw[2]&sw[3])|
    (sw[1]&sw[2]&sw[4])|
    (sw[2]&sw[3]&sw[4])|
    (sw[1]&sw[3]&sw[4]);
endmodule