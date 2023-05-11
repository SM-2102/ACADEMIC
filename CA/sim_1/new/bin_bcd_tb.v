`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11.05.2023 10:58:34
// Design Name: 
// Module Name: bin_bcd_tb
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
module bin_bcd_tb;
  reg [3:0]a=0;
  wire [3:0]c;
  wire c1;
  integer j=0;
  bin_bcd uut(.a(a),.c(c),.c1(c1));
  initial
    begin
      for(j=0;j<16;j=j+1)begin
      #10;
       a=a+1'b1;       
      end
    end
endmodule
