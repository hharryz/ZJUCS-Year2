`timescale 1ns / 1ps

module TopModel(
		input wire clk,
		input wire [7:0]SW,
		input wire btn,
		output wire [3:0]AN,
		output wire [7:0]SEGMENT
    );
	 
		wire [15:0]cnt;
		wire Rc;
		
		RevCounter revc(.clk(clk),
							 .s(btn),
							 .cnt(cnt),
							 .Rc(Rc));
							 
							 
		DispNum  d0(.clk(clk),
					.HEXS(cnt),
					.LES(SW[7:4]),
					.points(SW[3:0]),
					.RST(1'b0),
					.AN(AN),
					.LED(SEGMENT[6:0]),
					.point(SEGMENT[7])
					);
endmodule
