`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 13.04.2023 10:54:22
// Design Name: 
// Module Name: priority_encoder_tb
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


module priority_encoder_tb;
    reg [3:0]i=0;
    wire [1:0]o;
    wire val;
    integer j=0;
    priority_encoder uut(.i(i),.o(o),.val(val));
    initial
        begin
            for(j=0;j<16;j=j+1)begin
        #10;
       i=i+1'b1;       
      end
    end
endmodule
