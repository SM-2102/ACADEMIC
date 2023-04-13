`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 13.04.2023 10:49:58
// Design Name: 
// Module Name: priority_encoder
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


module priority_encoder(input [3:0]i,output [1:0]o,output val);
    assign val = i[0]|i[1]|i[2]|i[3];
    assign o[0] = i[3] | (i[1]&~i[2]);  
    assign o[1] = i[2] | i[3];
endmodule
