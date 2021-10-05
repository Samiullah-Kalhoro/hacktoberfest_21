// The forEach method is very similar to while loop, because when we don't know the number of entries in our Array

// Then the forEach is the best option, as it goes through every single entry of the array.

const showName = (item, index) => {
  //This is the bold arrow function which takes two arguments whenever called (Item(value) and its index).
  console.log(index + 1 + " " + item); //Here applies the simple concept of concatenation of both argument.
};
const fruits = ["Mouse", "Keyboard", "Ram"]; //Here is our array which only have three entries, but it can have (n) number of entries.

fruits.forEach(showName);
// Here we are calling our forEach method which will go through every single entry of our array and sends

// every entry's value and its index to the showName function.

// The above method is very simple and can be used, when solving complex problems.
