
module instr_mem_top
(
  input clock,
  input reset,

  input  logic        req,
  input  logic [11:0] addr,
  input  logic [31:0] wdata,
  output logic [31:0] rdata,
  output logic        rvalid,
  input  logic [3:0]  wmask,
  input  logic        we
);

  always_ff @(negedge clock) begin
  if (!reset) begin
    rvalid <= 1'b0;
  end else if (we) begin
    rvalid <= 1'b0;
  end else begin 
    rvalid <= req;
  end
  end


sram #(
  .NUM_WMASKS  (4), 
  .DATA_WIDTH  (32),
  .ADDR_WIDTH  (12),
  .DELAY       (0),
  .IZERO       (0),
  .IFILE       ("/home/usman/Documents/azadi-sdk/program")
) iccm (
  
  .clk0     (clock),
  .csb0     (~req),
  .web0     (~we),
  .wmask0   (wmask),
  .addr0    (addr),
  .din0     (wdata),
  .dout0    (rdata),

  .clk1     (0),
  .csb1     (0),
  .addr1    (0),
  .dout1    ()
);


endmodule