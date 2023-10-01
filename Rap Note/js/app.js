console.log("Welcome to Deepak Notes Taking Website");

//Whenever page is getting reload, user should be able to see all of the notes :
showNotes();

// If user adds a NodeIterator, add it to the local storage
let addBtn = document.getElementById("addBtn");
addBtn.addEventListener("click", function (e) {
    //e- Event Object : all the information related to the event listener, which is used

    //Take value from textarea
    let addTxt = document.getElementById("addTxt");
    //Take value for "Title"
    let addTitle = document.getElementById("addTitle");


    //Whatever notes, key=notes is storing just get that in variable=notes
    let notes = localStorage.getItem("notes");

    //If there is no any value in key=notes, just create an empty object, and here these is an array
    //or else parse/add that value of key=notes in "notes object"
    if (notes == null) {
        notesObj = [];
    }
    else {
        notesObj = JSON.parse(notes);
    }

    //Create a object to store "Title" as well as "Notes" both , so now our "notesObj" will not be an array of string , now it will be an array of objects
    let myObj = {
        title : addTitle.value ,
        text : addTxt.value
    }





    // //Now, also, whatever text typed in notes, add that in "notes object"
    // notesObj.push(addTxt.value);

    //Now, also, whatever text as well as title typed in notes (stored in "myObj"), add that in "notes object"
    notesObj.push(myObj);





    //And, then also update/add that text(which "notes object" is containing) in local storage
    localStorage.setItem("notes", JSON.stringify(notesObj));
    //JSON.stringify()  ==> Because, local storage only accepts string values




    //Then, make that Textarea field blank, so another notes can be typed in
    addTxt.value = " ";

    //Then, make that Title field black, so another Title can be typed in
    addTitle.value = " ";
    // console.log(notesObj);




    //Whenever a note is getting create, that note will be shown or get add in the list of notes :
    showNotes();
});




//Whenever a note is getting create, that note will be shown or get add in the list of notes :
//function to show elements from local storage :
function showNotes() {
    //Whatever notes, key=notes is storing just get that in variable=notes
    let notes = localStorage.getItem("notes");

    //If there is no any value in key=notes, just create an empty object, and here these is an array
    //or else parse/add that value of key=notes in "notes object"
    if (notes == null) {
        notesObj = [];
    }
    else {
        notesObj = JSON.parse(notes);
    }

    let html = ""; //An array which will hold all the notes
    notesObj.forEach(function (element, index) {

        //Add or show card of note as well as title, each time when note is created :
        html += `
        <div class="noteCard my-2 mx-2" style="width: 18rem;">
                <div class="card-body">
                    <h5 class="card-title">${element.title} </h5>
                    <p class="card-text">${element.text}</p>
                    <a id=${index} onClick="deleteNote(this.id)" class="btn btn-primary btn-green">Delete Note</a>
                </div>
        </div>`;

        
        //Add or show card of note, each time when note is created :
        // html += `
        // <div class="noteCard my-2 mx-2" style="width: 18rem;">
        //         <div class="card-body">
        //             <h5 class="card-title">Note - ${index + 1}</h5>
        //             <p class="card-text">${element}</p>
        //             <a id=${index} onClick="deleteNote(this.id)" class="btn btn-primary btn-green">Delete Note</a>
        //         </div>
        // </div>`;
    


        /* Delete Node
        Jabi bhi button click ho, onClick="deleteNote(this.id)" ko call karo aur
        Button ki jo bhi ID hai wo lelo as a parameter for function "deleteNote"
        Here, ID is it's "index" only*/
    });

    let notesElm = document.getElementById("notes");
    if (notesObj.length != 0) { //It means something is there in note(hold by "html"), just add that in "notesElm"
        notesElm.innerHTML = html;
    }
    else {
        notesElm.innerHTML = `<h1>Oops! 😥 Nothing to show</h1>
                              <br>
                              <h3>Please create a note using above "Add a note" section. </h3>`;
    }
}


/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////
Function to delete a note :
///////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
function deleteNote(index) {
    // console.log("I am deleting a note", index);

    //Whatever notes, key=notes is storing just get that in variable=notes
    let notes = localStorage.getItem("notes");

    //If there is no any value in key=notes, just create an empty object, and here these is an array
    //or else parse/add that value of key=notes in "notes object"
    if (notes == null) {
        notesObj = [];
    }
    else {
        notesObj = JSON.parse(notes);
    }

    //Delete that particular deleted node from notesObj :
    //https://www.w3schools.com/jsref/jsref_splice.asp
    //notesObj.splice(StartingIndexToDelete, NumberOfElementsToDelete);
    notesObj.splice(index, 1);

    //Now, here, that particular note is deleted from notesObj, so, now we also have to update localStorage i.e.
    //delete that particular note from localStorage also

    //Now, update/delete that text(which "notes object" is containing) in local storage
    localStorage.setItem("notes", JSON.stringify(notesObj));

    //Then, after deletion, just show all the notes to the user :
    showNotes();
}






/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////
Function for searching a note :
///////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
let search = document.getElementById("searchTxt");

//Add "input" event listener on to these search bar :
search.addEventListener('input', function() {

    //Take th value which is holded by search bar into variable=inputVal :
    let inputVal = search.value;
    // let inputVal = search.value.toLowerCase();

    // console.log("Input event is fired!", inputVal);


    //Take all the notes cards, and put it into variable=notesCards
    let noteCards = document.getElementsByClassName('noteCard');

    //Take each note card as an element, and see whether the content/text of these particular note card contains text which is typed in search box
    Array.from(noteCards).forEach(function(element){
        let cardTxt = element.getElementsByTagName("p")[0].innerText;
        //("p")[0].innerText : Take content of very first para of element

        // console.log(cardTxt);

        //note card which consists text, which is typed in search box,, that only should be visible, so "block" that, and hide rest of note cards , so "none" that
        if(cardTxt.includes(inputVal)){
            element.style.display = "block";
        }
        else{
            element.style.display = "none";
        }
    })

});










/*
Further Features:
1. Add Title
2. Mark a note as Important
3. Separate notes by user
4. Sync and host to web server 
*/ 