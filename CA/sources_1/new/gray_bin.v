`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11.05.2023 11:23:15
// Design Name: 
// Module Name: gray_bin
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


module gray_bin(input [3:0]a, input[3:0]c);
assign c[3] = a[3];
assign c[2] = c[3] ^ a[2];
assign c[1] = c[2]^ a[1];
assign c[0] = c[1] ^a[0];
endmodule
