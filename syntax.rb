# encoding: utf-8
SEPARATOR="-------------------------------------------------------------------"

END {
	puts "end block executend at the end"
	puts "***last things last***"
}


puts SEPARATOR
puts "here document with string.reverse syntax"
puts SEPARATOR
puts <<EOF.reverse
multi
line
porcodio
EOF

puts SEPARATOR
puts "here document with shell execution"
puts SEPARATOR
puts <<`EOC`
	dir syntax.rb
EOC

puts SEPARATOR
puts "here document with nested heredocs"
puts SEPARATOR
puts <<ONE, <<TWO
	one
	multi
	line
ONE
	two
	multiline
TWO

BEGIN {
	puts "***first things first***"
}

puts SEPARATOR
puts SEPARATOR
puts ?a
puts ?\n
puts 1_234.class


(1..10).each do |n|
	puts n
end
x=5
puts "x:" + defined? x
puts SEPARATOR


