`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:48:13 11/28/2023
// Design Name:   RevCounter
// Module Name:   D:/lab/lab11/MyCounter/RevCounter_sim.v
// Project Name:  MyCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RevCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RevCounter_sim;

	// Inputs
	reg clk;
	reg s;

	// Outputs
	wire [15:0] cnt;
	wire Rc;

	// Instantiate the Unit Under Test (UUT)
	RevCounter uut (
		.clk(clk), 
		.s(s), 
		.cnt(cnt), 
		.Rc(Rc)
	);

	integer i = 0;
	initial begin
		// Initialize Inputs
		s = 1;
		clk = 0;
		for( i=1; i<50; i=i+1)begin
			clk = ~clk;#5;
		end
		
		s = 0;
		for( i=1; i<50; i=i+1)begin
			clk = ~clk;#5;
		end
		
	end
      
endmodule

