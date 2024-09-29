var x, y;
x = {message: "Hello"};
y = x;
y.message = "World";

console.log(x.message);
console.log(y.message);
