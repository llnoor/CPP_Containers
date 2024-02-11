- max_size (= 384307168202282325) checks in:  
  - initializer list constructor  
  - push methods  
seem like not very needed technically, only logically?  
'cause couldnt create lists of size more than divided to <10 billions. possibly this number will differ on mac  
- possibly maybe perhaps rework iterators. particularly end methods which return tail (instead of nullptr as it's intended?)  
- is it necessary to check dereferenced iterators after clearing a container?
- decompose tests before modifiers->reverse using listsequal function  
- seems like i forgot about tests of the assignment operator  
- add a tests for iterators: empty list (in/de)crementation  