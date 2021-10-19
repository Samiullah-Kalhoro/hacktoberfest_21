// console.log("Project 2 in ES6");



let nameObj;
let authorObj;
let typeObj;

//Book class
class Book{
    constructor(name, author, type) {
        this.name = name;
        this.author = author;
        this.type = type;
    }

    save(book){
        let bookName = localStorage.getItem("bookName");
        let bookAuthor = localStorage.getItem("bookAuthor");
        let bookType = localStorage.getItem("bookType");
    
        if(bookName === null ||
        bookAuthor === null || bookType === null){
             nameObj = [];
             authorObj = [];
             typeObj = [];
        }
        else{
            nameObj = JSON.parse(bookName);
            authorObj = JSON.parse(bookAuthor);
            typeObj = JSON.parse(bookType);
        }
    
        nameObj.push(book.name);
        authorObj.push(book.author);
        typeObj.push(book.type);
    
        
    
    
        localStorage.setItem("bookName",JSON.stringify(nameObj));
        localStorage.setItem("bookAuthor",JSON.stringify(authorObj));
        localStorage.setItem("bookType",JSON.stringify(typeObj));

        // console.log(JSON.stringify(nameObj));
        // console.log(JSON.stringify(authorObj));
        // console.log(JSON.stringify(typeObj));
    
    
    }

}
//Display Class
class Display
{
    add() {

        let bookName = localStorage.getItem("bookName");
        let bookAuthor = localStorage.getItem("bookAuthor");
        let bookType = localStorage.getItem("bookType");
    
        if(bookName === null ||
        bookAuthor === null || bookType === null){
             nameObj = [];
             authorObj = [];
             typeObj = [];
        }
        else{
            nameObj = JSON.parse(bookName);
            authorObj = JSON.parse(bookAuthor);
            typeObj = JSON.parse(bookType);
        }

        
        console.log(JSON.stringify(nameObj));
        console.log(JSON.stringify(authorObj));
        console.log(JSON.stringify(typeObj));




        let tableBody = document.getElementById("tableBody");
        tableBody.innerHTML = "";
for(let i = 0; i < nameObj.length; i++){
    
    console.log(nameObj[i]);
        console.log("adding to UI");
        // console.log(tableBody);
        let html = `
                    <tr>
                        <td>${nameObj[i]}</td>
                        <td>${authorObj[i]}</td>
                        <td>${typeObj[i]}</td>
                </tr> `;
                tableBody.innerHTML += html;

}
    }

    clear() {
        let libraryForm = document.getElementById("libraryForm");
        libraryForm.reset();
    }
    
    validate(book) {
        //book name and author name has atleast 4 characters to validate
        if(book.name.length > 3 || book.author.length > 3){
            // console.log("in if")
            // console.log(book.name.length, book.author.length)
            return true;
        }
        else{
            // console.log("in else")
            // console.log(book.name.length, book.author.length)
            return false;
        }
    }

    show(typeOfMessage, dialogMessage) {
        let text;
        if(typeOfMessage === "success"){
            text = "Success!";
        }
        else{
        text = "Error!";
        }
        let message = document.getElementById("message")
        message.innerHTML = `
        <div class="alert alert-${typeOfMessage} alert-dismissible fade show" role="alert">
        <strong>${text}</strong> ${dialogMessage}
        <button type="button" class="btn-close" data-bs-dismiss="alert" aria-label="Close">
        </button>
      </div>
        `
    
        setTimeout(function(){
            message.innerHTML = ""
        }, 5000);
    }
    
    
    
}

let display = new Display();


//Add submit event listener to libraryForm
let libraryForm = document.getElementById("libraryForm");
libraryForm.addEventListener("submit", libraryFormSubmit);

function libraryFormSubmit(e) {
    console.log("You have submitted library form");
    let name = document.getElementById("bookName").value;
    let author = document.getElementById("author").value;

    let comics = document.getElementById("comics");
    let poetry = document.getElementById("poetry");
    let story = document.getElementById("story");

    let type;
    if (comics.checked) {
        type = comics.value;
    }
    else if (poetry.checked) {
        type = poetry.value;
    }
    else {
        type = story.value;
    }

    //creating object of Book
    book = new Book(name, author, type);
    console.log(book)

    //creating object of Display

    if(display.validate(book)){
        book.save(book);
        display.add();
        display.clear();
        display.show("success","Book has been successfully added");
    }
    else{
        display.show("danger","Sorry! you can't add this book ");
    }
    e.preventDefault();



}

display.add();