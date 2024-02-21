`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:12:21 12/16/2022
// Design Name:   TopModule
// Module Name:   G:/ise/lab12/Register/TopModule_sim.v
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

module TopModule_sim;

	// Inputs
	reg clk;
	reg [2:0] SW;
	reg [3:0] In;

	// Outputs
	wire [3:0] A;

	// Instantiate the Unit Under Test (UUT)
	TopModule uut (
		.clk(clk), 
		.SW(SW), 
		.In(In), 
		.A(A)
	);
	
	// clock
	always begin
		clk = 0;#5;
		clk = 1;#5;
	end
	integer i;
	initial begin
		// Initialize Inputs
		clk = 0;
		SW = 0;
		In = 0;
		
		// Wait 100 ns for global reset to finish
		#20;
      


			
		// Add stimulus here
		
		// Initial
		In = 4'b0010;
		SW[1] = 1'b1;#5;
		
		// begin
		SW[1] = 1'b0;
		SW[0] = 1'b0;
		for(i=0;i<=5;i=i+1)begin
			SW[2] = 1;#10;
			SW[2] = 0;#10;
		end
		
		SW[0] = 1'b1;
		for(i=0;i<=5;i=i+1)begin
			SW[2] = 1;#10;
			SW[2] = 0;#10;
		end
		
	end
      
endmodule

