https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/10154702?start=15#overview

## IO and Streams
- ### A stream is sequence of bytes that are transferred between the program and input/output (I/O) devices

- ### A stream is an interface that is independent of the actual I/O device, so the program can use the same stream to handle different I/O devices without worrying about specific devices

![](./img/streams.png)
![](./img/streams_2.png)
![](./img/streams_3.png)
![](./img/streams_4.png)

- ### `Buffered stream` = Goes to temporary memory (buffer) where your program can access it, and then outputs when the buffer is flushed

- ### `Unbuffered stream` = Skips the buffer and gets outputted in real-time, not giving your program the chance to access it
![](./img/streams_5.png)

<br>

## Stream manipulators
- ### Most stream formatters have a method and a manipulator version
![](./img/stream_manipulators.png)
![](./img/stream_manipulators_2.png)

- ### Stream manipulators - Boolean
	- ### By default, `true` and `false` are outputted as `1` and `0` respectively

	- ### E.g. Using stream manipulator version
	### (default behaviour)
	![](./img/boolean_manipulators.png)
	### (setting `std::cout` to `std::boolalpha` mode - will display `1` and `0` as boolean strings)`
	### (All subsequent boolean output will be affected for `std::cout`)
	![](./img/boolean_manipulators_2.png)

	- ### E.g. Using stream method version
	![](./img/boolean_manipulators_3.png)

<br>

- ### Stream manipulators - Integer
	- ### By default, integers are displayed in `base 10` (decimal). We also have the option to display in `base 8` (octal) and `base 16` (hexadecimal)
	![](./img/integer_manipulators.png)
	
	- ### E.g. Setting base
	![](./img/integer_manipulators_2.png)

	- ### E.g. Showing base
	![](./img/integer_manipulators_3.png)
	![](./img/integer_manipulators_4.png)

	- ### E.g. Display sign
	![](./img/integer_manipulators_5.png)

<br>

- ### Stream manipulators - Floats
	![](./img/float_manipulators.png)

	- ### E.g. Setting precision
	![](./img/float_manipulators_2.png)

	![](./img/float_manipulators_3.png)

	- ### E.g. Setting fixed
	![](./img/float_manipulators_4.png)

	- ### E.g. Setting precision and fixed
	![](./img/float_manipulators_5.png)

<br>

- ### Stream manipulators - Align and Fill
	- ### Work with any type of data
	![](./img/manipulators.png)

	- ### E.g. `std::setw`
	![](./img/manipulators_2.png)
	![](./img/manipulators_3.png)
	![](./img/manipulators_3b.png)

	- ### E.g. `std::left`/`std::right` (Justification)
	![](./img/manipulators_4.png)

	- ### E.g. `std::setfill`
		- ### `std::setw` must be set in order to use `std::setfill`
	![](./img/manipulators_5.png)
	![](./img/manipulators_6.png)

<br>

## Reading from a text file (`std::fstream` and `std::ifstream`)
- ### General steps
![](./img/read_from_text_file.png)

<br>

- ### E.g. 1) Input Mode = Only read, not write
- ### E.g. 2) Input Binary Mode = Used to read non text files with binary data
![](./img/read_from_text_file_2.png)

<br>

- ### Can also use `std::ifstream` to read from a text file only (Recommended)
![](./img/read_from_text_file_3.png)

<br>

- ### E.g.
![](./img/read_from_text_file_4.png)

- ### Could also just check using...
	### `if (in_file) {...}`

![](./img/read_from_text_file_5.png)
![](./img/read_from_text_file_6.png)

<br>

- ### E.g. Reading using `>>`
	- ### `>>` Separates on whitespace and so can be used to read "words" that are seperated by a space
![](./img/read_from_text_file_7.png)

<br>

- ### E.g. Reading one line at a time (`std::getline`)
![](./img/read_from_text_file_8.png)

<br>

- ### E.g. Reading one character at a time (`std::ifstream::get`)
![](./img/read_from_text_file_9.png)

<br>

## Writing to a text file