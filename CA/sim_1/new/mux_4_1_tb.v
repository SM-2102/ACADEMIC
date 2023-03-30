`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 30.03.2023 09:59:04
// Design Name: 
// Module Name: mux_4_1_tb
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


 module mux_4_1_tb;
  reg [3:0]i=4'b1110;
  reg [1:0]s=0;
  wire y;
  integer j=0;
  mux_4_1 uut(.i(i),.s(s),.y(y));
  initial
    begin
      for(j=0;j<4;j=j+1)begin
      #10;
       s=s+1'b1;       
      end
    end
endmodule
