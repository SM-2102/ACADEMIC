`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11.05.2023 11:31:38
// Design Name: 
// Module Name: bin_ex3
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


module bin_ex3(input [3:0]a, output[3:0]y1,output[3:0]y2);
wire [3:0]w1;
wire w2;
bin_bcd uut(a,w1,w2);
assign y1 = w1+4'b0011;
assign y2 = (w2==1'b1)?4'b0100:4'b0000;
endmodule
