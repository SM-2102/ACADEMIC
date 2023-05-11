`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11.05.2023 11:23:31
// Design Name: 
// Module Name: gray_bin_tb
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
module gray_bin_tb;
  reg [3:0]a=0;
  wire [3:0]c;
  integer j=0;
  gray_bin uut(.a(a),.c(c));
  initial
    begin
      for(j=0;j<16;j=j+1)begin
      #10;
       a=a+1'b1;       
      end
    end

endmodule
