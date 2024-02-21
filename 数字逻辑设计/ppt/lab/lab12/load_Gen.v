`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:51:55 12/15/2022 
// Design Name: 
// Module Name:    Load_Gen 
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
module Load_Gen(    input wire clk,    input wire btn_in,    output reg Load_out    );	 
	 
	 	 initial Load_out = 0;	 reg old_btn;
	 
	 	 always@(posedge clk) begin
	   
		// old_btn to store the oldder state		old_btn <= ; // need to fill
		
		// only if the btn is changed to 1'b1 
		// within 1 clk, the Load_out = 1'b1		if ( ? ) // need to fill			Load_out <= 1'b1;		else			Load_out <= 1'b0;
				 end
	 
	 endmodule
