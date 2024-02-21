`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:58 11/13/2022 
// Design Name: 
// Module Name:    myAnd2b4 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module myAnd2b4(
	input wire [3:0] A,
	input wire [3:0] B,
	output wire [3:0] C
    );
	
	and a0(C[0], A[0], B[0]);
	and a1(C[1], A[1], B[1]);
	and a2(C[2], A[2], B[2]);
	and a3(C[3], A[3], B[3]);

endmodule
