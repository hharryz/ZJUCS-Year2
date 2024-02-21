`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:03:40 11/13/2022 
// Design Name: 
// Module Name:    Alu_4b 
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
module Alu_4b(
	input wire Ctrl,
	input wire [3:0] A,
	input wire [3:0] B,
	output wire Co,
	output wire [3:0] S
    );
	 
	 wire tempC[2:0];
	 
	Alu_1b Alu0(
		.A(A[0]),
		.B(B[0]),
		.Ctrl(Ctrl),
		.Ci(Ctrl),
		.S(S[0]),
		.Co(tempC[0])
		);
		
	Alu_1b Alu1(
		.A(A[1]),
		.B(B[1]),
		.Ctrl(Ctrl),
		.Ci(tempC[0]),
		.S(S[1]),
		.Co(tempC[1])
		);

	Alu_1b Alu2(
		.A(A[2]),
		.B(B[2]),
		.Ctrl(Ctrl),
		.Ci(tempC[1]),
		.S(S[2]),
		.Co(tempC[2])
		);
		
	Alu_1b Alu3(
		.A(A[3]),
		.B(B[3]),
		.Ctrl(Ctrl),
		.Ci(tempC[2]),
		.S(S[3]),
		.Co(Co)
		);
endmodule
