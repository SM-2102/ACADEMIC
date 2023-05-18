`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 18.05.2023 22:03:46
// Design Name: 
// Module Name: full_adder_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////



`timescale 1ns/10ps

module full_adder_tb;
  reg a,b,cin;
  wire cout,s;
  full_adder uut(a,b,cin,cout,s);
  initial
    begin
      a=0; b=0; cin=0;#10;
      a=0; b=0; cin=1;#10;
      a=0; b=1; cin=0;#10;
      a=0; b=1; cin=1;#10;
      a=1; b=0; cin=0;#10;
      a=1; b=0; cin=1;#10;
      a=1; b=1; cin=0;#10;
      a=1; b=1; cin=1;#10;
    end
endmodule

