const { default: chalk } = require('chalk')
const fs=require('fs')

//adding notes
const addNotes=(title,body)=>{
    const notes= loadNotes()
    const duplicatNotes=notes.filter((note)=> note.title==title)
    const duplicatNote=notes.find((note)=> note.title==title)
    if(!duplicatNote){
        notes.push({
            title:title,
            body:body
        })
        saveNotes(notes)
        console.log(chalk.greenBright("New node added!"))
    }
    else{
        console.log(chalk.redBright("Note title taken!"))
    }
}



//removing the notes
const removeNotes=(title)=>{
    const notes= loadNotes()
    const notesToKeep=notes.filter((note)=>note.title!=title
        // return note.title!=title
       
    )
    if (notes.length>notesToKeep.length){
        console.log(chalk.green.inverse("Notes Removed!"))
        saveNotes(notesToKeep)
    }
    else{
        console.log(chalk.redBright("No Note Found!"))
    }
    
 }


 //listing the notes
 const listNotes=()=>{
 
    console.log(chalk.blue.blue("Your Notes:"))
    const notes=loadNotes()
    notes.forEach(note => {
        console.log(note)
        
    });

 }

 //reading the note
 const readNotes=(title)=>{
 
    console.log(chalk.blue("Your Note:"))
    const notes=loadNotes()
    const noteToDisplay=notes.find(note => note.title==title)
    if(noteToDisplay)   
    { console.log(chalk.yellowBright(noteToDisplay.title))
     console.log(noteToDisplay.body)}
    else{
        console.log(chalk.redBright("No such note available"))
    }


 }
 

const saveNotes=(notes)=>{
    const dataJSON =JSON.stringify(notes)
    fs.writeFileSync("notes.json",dataJSON)
    //can I add this to a db instead?
}

const loadNotes=()=>{
    try{
        const dataBuffer=fs.readFileSync('notes.json')
        const dataJSON=dataBuffer.toString()
        return JSON.parse(dataJSON)

    }catch(e){
        return []
        
    }
}

module.exports ={
    addNotes:addNotes,
    removeNotes:removeNotes,
    listNotes:listNotes,
    readNotes:readNotes

    
}