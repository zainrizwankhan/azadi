`ifdef RISCV_FORMAL
  `define RVFI
`endif 

module Azadi_top_verilator #(
  parameter  logic DirectDmiTap = 1'b1
)(
  input clock,
  input reset_ni,

  input  logic [19:0] gpio_i,
  output logic [19:0] gpio_o,

   // RISC-V Formal Interface
    // Does not comply with the coding standards of _i/_o suffixes, but follows
    // the convention of RISC-V Formal Interface Specification.
`ifdef RVFI
    output logic        rvfi_valid,
    output logic [63:0] rvfi_order,
    output logic [31:0] rvfi_insn,
    output logic        rvfi_trap,
    output logic        rvfi_halt,
    output logic        rvfi_intr,
    output logic [ 1:0] rvfi_mode,
    output logic [ 1:0] rvfi_ixl,
    output logic [ 4:0] rvfi_rs1_addr,
    output logic [ 4:0] rvfi_rs2_addr,
    output logic [ 4:0] rvfi_rs3_addr,
    output logic [31:0] rvfi_rs1_rdata,
    output logic [31:0] rvfi_rs2_rdata,
    output logic [31:0] rvfi_rs3_rdata,
    output logic [ 4:0] rvfi_rd_addr,
    output logic [31:0] rvfi_rd_wdata,
    output logic [31:0] rvfi_pc_rdata,
    output logic [31:0] rvfi_pc_wdata,
    output logic [31:0] rvfi_mem_addr,
    output logic [ 3:0] rvfi_mem_rmask,
    output logic [ 3:0] rvfi_mem_wmask,
    output logic [31:0] rvfi_mem_rdata,
    output logic [31:0] rvfi_mem_wdata
`endif
//  output logic [19:0] gpio_oe


);
    //localparam logic [31:0] JTAG_IDCODE = 32'h04F5484D;
    localparam logic [31:0] JTAG_IDCODE = {
      4'h0,     // Version
      16'h4F54, // Part Number: "OT"
      11'h426,  // Manufacturer Identity: Google
      1'b1      // (fixed)
    };

    logic cio_jtag_tck;
    logic cio_jtag_tdi;
    logic cio_jtag_tdo;
    logic cio_jtag_tms;
    logic cio_jtag_trst_n;
    logic cio_jtag_srst_n;
    

  azadi_soc_top #(
    .JTAG_ID(JTAG_IDCODE),
    .DirectDmiTap (DirectDmiTap)
  ) top_verilator(
    .clock(clock),
    .reset_ni(reset_ni),
    .uart_rx_i(),
  
    .gpio_i(gpio_i),
    .gpio_o(gpio_o),
  //  output logic [19:0] gpio_oe
  
  // jtag interface 
    .jtag_tck_i(cio_jtag_tck),
    .jtag_tms_i(cio_jtag_tms),
    .jtag_trst_ni(cio_jtag_trst_n),
    .jtag_tdi_i(cio_jtag_tdi),
    .jtag_tdo_o(cio_jtag_tdo),

  `ifdef RVFI
    .rvfi_valid (rvfi_valid),
    .rvfi_order (rvfi_order),
    .rvfi_insn (rvfi_insn),
    .rvfi_trap (rvfi_trap),
    .rvfi_halt (rvfi_halt),
    .rvfi_intr (rvfi_intr),
    .rvfi_mode (rvfi_mode),
    .rvfi_ixl (rvfi_ixl),
    .rvfi_rs1_addr (rvfi_rs1_addr),
    .rvfi_rs2_addr (rvfi_rs2_addr),
    .rvfi_rs3_addr (rvfi_rs3_addr),
    .rvfi_rs1_rdata (rvfi_rs1_rdata),
    .rvfi_rs2_rdata (rvfi_rs2_rdata),
    .rvfi_rs3_rdata (rvfi_rs3_rdata),
    .rvfi_rd_addr (rvfi_rd_addr),
    .rvfi_rd_wdata (rvfi_rd_wdata),
    .rvfi_pc_rdata (rvfi_pc_rdata),
    .rvfi_pc_wdata (rvfi_pc_wdata),
    .rvfi_mem_addr (rvfi_mem_addr),
    .rvfi_mem_rmask (rvfi_mem_rmask),
    .rvfi_mem_wmask (rvfi_mem_wmask),
    .rvfi_mem_rdata (rvfi_mem_rdata),
    .rvfi_mem_wdata (rvfi_mem_wdata)
`endif
  
  );


  // if(DirectDmiTap) begin
    //  bind rv_dm dmidpi u_dmidpi (
    //  .clk_i,
    //  .rst_ni,
    //  .dmi_req_valid,
    //  .dmi_req_ready,
    //  .dmi_req_addr   (dmi_req.addr),
    //  .dmi_req_op     (dmi_req.op),
    //  .dmi_req_data   (dmi_req.data),
    //  .dmi_rsp_valid,
    //  .dmi_rsp_ready,
    //  .dmi_rsp_data   (dmi_rsp.data),
    //  .dmi_rsp_resp   (dmi_rsp.resp),
    //  .dmi_rst_n      (dmi_rst_n)
    //);
  // end else begin
     // jtag dpi for openocd
    jtagdpi u_jtagdpi (
      .clk_i(clock),
      .rst_ni(reset_ni),
      .jtag_tck    (cio_jtag_tck),
      .jtag_tms    (cio_jtag_tms),
      .jtag_tdi    (cio_jtag_tdi),
      .jtag_tdo    (cio_jtag_tdo),
      .jtag_trst_n (cio_jtag_trst_n),
      .jtag_srst_n (cio_jtag_srst_n)
    );

  // end


endmodule