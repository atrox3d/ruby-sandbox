class String
	def lstrip_heredoc
		lines=[]
		each_line {|ln| lines << ln.lstrip!}
		lines
	end
end

class Sample
	@@classVar = 0
	$globalVar = "i'm everywhere"
	def initialize
		@@classVar += 1
		@instanceVar = "instanceValue"
	end

	def hello
		puts <<-EOT.lstrip_heredoc
			-----------------------------------------
			hello from #{self.class} # #{@@classVar}
			globalVar is '#$globalVar'
			instanceVar is '#{@instanceVar}'
		EOT
	end
end

Sample.new.hello #1
Sample.new.hello #2

