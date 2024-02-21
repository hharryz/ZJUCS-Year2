`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:15:28 11/13/2022 
// Design Name: 
// Module Name:    myOr2b4 
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
module myOr2b4(
	input wire [3:0] A,
	input wire [3:0] B,
	output wire [3:0] C
    );

	or o0(C[0], A[0], B[0]);
	or o1(C[1], A[1], B[1]);
	or o2(C[2], A[2], B[2]);
	or o3(C[3], A[3], B[3]);
	
endmodule
