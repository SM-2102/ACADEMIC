module tristate(input a, input en, output b);
  assign b = (en&a)|(~en&'bz);
endmodule
