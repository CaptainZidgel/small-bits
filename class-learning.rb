# Practicing class & objects
# made from an example in Head First Ruby
 
 class Bird
	def make_name(n)
	 @name = n
	end
	def talk
	 puts "Chirp! Chirp"
	end
	
	def move(destination)
	 puts "#{@name} Flying to #{destination}"
	end
	def name=(new_value)
	 puts "Changing name!"
	 @name = new_value
	end
end

class Dog
	def make_name(n)
	 @name = n
	end
	def talk
	 puts "Bark!"
	end
	def move(destination)
	 puts "#{@name} Running to #{destination}"
	end
end

parakeet = Bird.new
parakeet.make_name("Cheetah")
parrot = Bird.new
parrot.make_name("Tyler")
parakeet.move("Fart")
parrot.talk
parakeet.talk
parrot.move("Studio")
scruff = Dog.new
scruff.make_name("Scruffy")
scruff.talk
scruff.move("Doghouse")
parrot.name = "Ted"
parrot.move("Cage")