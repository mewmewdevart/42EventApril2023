#!/usr/bin/perl

# Modules used
use strict;
use warnings;

print("Enter a string: ");
my $string = <STDIN>;

# Chomp removes the '\n' when you hit enter in the input
chomp($string);

# The condition compare (if is true or not) between string and the string reversed 
if ($string eq reverse($string)) {
    printf("The string is a palindrome!\n");
}
else {
    printf("The string is not a palindrome.\n");
}

# Link to study the syntax : https://perldoc.perl.org/perlintro