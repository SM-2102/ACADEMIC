`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09.03.2023 22:12:03
// Design Name: 
// Module Name: mini_2
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


module mini_2(input [2:0]a,output [2:0]b);
  assign b[0]=~a[0];
  assign b[1] = (a[2]&~(a[1]^a[0])) | (~a[2]&(a[1]^a[0]));
  assign b[2] = (a[1]&a[0]) | (a[2]&a[0]) | (a[2]&a[1]);
endmodule