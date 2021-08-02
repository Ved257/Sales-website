const mongoose =require('mongoose')

const membersSchema = new mongoose.Schema({
    // name:{
    //     type:String,
    //     required:true
    // },
    regNo:{
        type:String,
        required:true
    },
    password:{
        type:String,
        required:true
    },

});

module.exports= mongoose.model("board",membersSchema)