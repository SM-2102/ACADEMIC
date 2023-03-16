`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 16.03.2023 11:01:32
// Design Name: 
// Module Name: bus_tb
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


module bus_tb;
  reg [3:0]i=0;
  reg c;
  wire[3:0]z;
  integer j=0;
  bus uut(.i(i),.c(c),.z(z));
  initial
    begin
      c=0;
      for(j=0;j<16;j=j+1)begin
      #10;
       i=i +1'b1;       
      end
      i=0;
      c=1;
      for(j=0;j<16;j=j+1)begin
      #10;
       i=i +1'b1;
    end
    end
endmodule
