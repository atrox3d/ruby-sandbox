MCONSTANT="::constant"
puts MCONSTANT
puts ::MCONSTANT

module MOD
	MCONSTANT="MOD::constant"
	puts <<-EOM
	inside MOD module
	#{MCONSTANT}
	#{::MCONSTANT}
	EOM
end
puts "outside MOD module"
puts MOD::MCONSTANT


