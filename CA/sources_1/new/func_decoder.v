`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 13.04.2023 10:01:10
// Design Name: 
// Module Name: func_decoder
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

module func_decoder(input [2:0]i,output [3:1]F);
    wire [7:0]y;
    wire y0,y2,y3,y4,y7,yn,ym;
    decoder uut(.i(i),.y(y));
    nand(y0,y[0],y[0]),(y2,y[2],y[2]),(y3,y[3],y[3]),(y4,y[4],y[4]),(y7,y[7],y[7]);
    nand(F[1],y2,y4,y7);
    nand(F[2],y0,y3);
    nand(yn,F[1],F[1]),(ym,F[2],F[2]);
    nand(F[3],yn,ym);
endmodule
    
    
    
