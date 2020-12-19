#!/usr/bin/ruby
#frozen_string_literal: true

inputFile = File.read('input.txt').split("\n")

class Integer
  def /(other)
    self + other
  end
end

inputFile.map! { |inpts| inpts.gsub('+', '/') }
p1 = inputFile.reduce(0) { |p1, outs| p1 + eval(outs) }
puts "solution part 1: #{p1}"

class Integer
    def -(other)
        self * other
    end
end
inputFile.map! { |inpts| inpts.gsub('*', '-') }
p2 = inputFile.reduce(0) { |p2, outs| p2 + eval(outs) }
puts "solution part 2: #{p2}"