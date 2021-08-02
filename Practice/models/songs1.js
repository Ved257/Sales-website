var mongoose =require('mongoose')

var songs1Schema=mongoose.Schema({
    name:{
        type:String,
        required:true
    },
    songURL:{
        type:String,
        
    }
});

var Songs1 =module.exports= mongoose.model("Songs1",songs1Schema)

module.exports.getSongs1=function(callback,limit){
    Songs1.find(callback).limit(limit);

}

module.exports.getSongs1ById=function(id,callback){
    Songs1.findById(id,callback);

}
module.exports.addSongs1=function(songs,callback){
    Songs1.create(songs,callback);

}