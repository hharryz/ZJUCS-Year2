`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:16:08 12/15/2022
// Design Name:   TopModule
// Module Name:   G:/ise/lab12/Register/Top_sim.v
// Project Name:  Register
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TopModule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Top_sim;

	// Inputs
	reg clk;
	reg [15:0] SW;

	// Outputs 
	wire [3:0] A;

	// Instantiate the Unit Under Test (UUT)
	TopModule uut (
		.clk(clk), 
		.SW(SW), 
		.A(A)
	);
	
	integer i;
	initial begin
		// Initialize Inputs
		clk = 0;
		SW = 0;

		// Wait 100 ns for global reset to finish
		#20;
		SW[15] = 1'b1;
		#5;
		
		SW[15] = 1'b0;
		SW[0] = 0;
		SW[2] = 0;
		for( i=0;i<=20;i=i+1)begin
			clk = ~clk;
			#5;
		end
		
		// Add stimulus here

	end
      
endmodule

