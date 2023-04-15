function algorithm(number) {
    let num1 = 0;
    let num2 = 1;
  
    while (number > 0) {
      const temp = num2;
      num2 = num2 + num1;
      num1 = temp;
      number--;
    }
  
    return num1;
}
  
console.log(algorithm(69));
// ^^ Output should be : 117669030460994