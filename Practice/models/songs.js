var mongoose =require('mongoose')

var songsSchema=mongoose.Schema({
    name:{
        type:String,
        required:true
    }

});

var Songs =module.exports= mongoose.model("Songs",songsSchema)

module.exports.getSongs=function(callback,limit){
    Songs.find(callback).limit(limit);

}
module.exports.addSongs=function(song,callback){
    Songs.create(song,callback);

}