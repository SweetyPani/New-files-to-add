//A new code taught by sir dated 25/04/2024

const addTaskButton = document.querySelector("button")
const inputBox = document.querySelector("input")
const myUI = document.querySelector("ul")
addTaskButton.addEventListener("click", function() {
     let enteredTask = inputBox.value
     // document.createElement()
     const myLi = document.createElement("li")
     myLi.innerHTML = `${enteredTask} <button>Delete</button>`
    // myLi.textContent = `${enteredTask} <button>Delete</button>`
     console.log(myLi)
     myUI.append(myLi)

// inputBox.addEventListener("click", function(){

// })
inputBox.value = ""
let myDeleteButton = myLi.querySelector(".deleteBtn")

myDeleteButton.addEventListener("click", function(){
     myLi.remove()
})
})