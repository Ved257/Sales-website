const chalk=require('chalk')
const yargs=require('yargs')
const notes=require('./notes.js')

//VCustomize yargs function
yargs.version('1.1.0')

//Create add command
yargs.command({
    command:'add',
    describe:'Add a new note',
    builder:{
        title:{
            describe:"Note title",
            demandOption:true,
            type:'string'
        },
        body:{
            describe:"Note Body",
            demandOption:true,
            type:'string'
        }
    },
    handler(argv){
     
      notes.addNotes(argv.title,argv.body)
    }
})

//Create remove command
yargs.command({
    command:'remove',
    describe:'Remove a new note',
    builder:{
        title:{
            describe:"Note title",
            demandOption:true,
            type:'string'
        }
    },
    handler(argv){
        notes.removeNotes(argv.title)
        
    }
})
//Create list command
yargs.command({
    command:'list',
    describe:'Listing the notes',
    handler(){
        notes.listNotes()
    }
})

//Read the notes
yargs.command({
    command:'read',
    describe:'reading a note',
    builder:{
        title:{
            describe:"Note title",
            demandOption:true,
            type:'string'
        }
    },
    handler(argv){
        notes.readNotes(argv.title)
    }
})


//add,remove,read,list

yargs.parse()