`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 16.03.2023 10:27:56
// Design Name: 
// Module Name: comp
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


module comp_xor(input [3:0]a, input[3:0]b,output[3:0]c);
assign b[0] = 1^a[0];
assign b[1] = 1^a[1];
assign b[2] = 1^a[2];
assign b[3] = 1^a[3];
assign c = b+1'b1; 
endmodule
