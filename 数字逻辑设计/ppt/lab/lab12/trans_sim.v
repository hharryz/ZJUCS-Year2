`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:39:31 12/17/2022
// Design Name:   Trans
// Module Name:   G:/ise/lab12/Register/Trans_sim.v
// Project Name:  Register
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Trans
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Trans_sim;

	// Inputs
	reg clk;
	reg [9:0] SW;

	// Outputs
	wire [3:0] A;
	wire [3:0] B;
	wire [3:0] C;
	wire [3:0] Out;

	// Instantiate the Unit Under Test (UUT)
	Trans uut (
		.clk(clk), 
		.SW(SW), 
		.A(A), 
		.B(B), 
		.C(C), 
		.Out(Out)
	);
	
	integer i;
	// clock
	always begin
		clk = 1; #5;
		clk = 0; #5;
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		SW = 0;

		// Wait 100 ns for global reset to finish
		#20;
      

		
		// initial
		// ALU control
		// 自增
		SW[8:7] = 2'b10;
		SW[9] = 1'b0;#5;
		for( i=0; i<=10; i=i+1)begin
			SW[3:2] <= 2'b00;#5;
			SW[4] <= 1'b0;#5;
			SW[3:2] <= 2'b11;#5;
			SW[4] <= 1'b1;#5;
		end
		
		// 自减
		SW[1:0] = 2'b11;
		for( i=0; i<=3; i=i+1)begin
			SW[3:2] <= 2'b00;#5;
			SW[4] <= 1'b0;#5;
			SW[3:2] <= 2'b11;#5;
			SW[4] <= 1'b1;#5;
		end
		
		// ALU的其他算法
		SW[6:5] = 2'b01;
		SW[3:2] <= 2'b00;#5;
		SW[4] <= 1'b0;#5;
		SW[3:2] <= 2'b11;#5;
		SW[4] <= 1'b1;#5;
		SW[6:5] = 2'b10;
		SW[3:2] <= 2'b00;#5;
		SW[4] <= 1'b0;#5;
		SW[3:2] <= 2'b11;#5;
		SW[4] <= 1'b1;#5;
		SW[6:5] = 2'b11;
		SW[3:2] <= 2'b00;#5;
		SW[4] <= 1'b0;#5;
		SW[3:2] <= 2'b11;#5;
		SW[4] <= 1'b1;#5;
		SW[6:5] = 2'b00;
		SW[3:2] <= 2'b00;#5;
		
		// 换回加法
		SW[4] <= 1'b0;#5;
		SW[3:2] <= 2'b11;#5;
		SW[4] <= 1'b1;#5;
		
		// 寄存器之间交流
		SW[9] = 1'b1;#5
		SW[3:2] <= 2'b11;#5;
		SW[4] <= 1'b1;#5;
		
		// trans the ALU result
		
		// Add stimulus here

	end
      
endmodule

