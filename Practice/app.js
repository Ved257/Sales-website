var express= require('express');
var app=express();
var bodyParser = require('body-parser');
var mongoose= require('mongoose');

app.use(bodyParser.json())

Songs= require('./models/songs');
Songs1= require('./models/songs1');

// //Connect to Mongoose
 mongoose.connect('mongodb://localhost/musicapp');
var db =mongoose.connection;

app.get('/', function(req,res){
    res.send("Please use /api/music ");
});

app.get('/api/songs',function(req,res){
    Songs.getSongs(function(err,songs){
        if(err){
            throw err;
        }
        res.json(songs)
    })
});
app.post('/api/songs',function(req,res){
    var songs=req.body;
    Songs.addSongs(songs,function(err,songs){
        if(err){
            throw err;
        }
        res.json(songs);
    })
});

app.get('/api/songs1',function(req,res){
    Songs1.getSongs1(function(err,songs1){
        if(err){
            throw err;
        }
        res.json(songs1)
    })
});

app.post('/api/songs1',function(req,res){
    var songs1=req.body;
    Songs1.getSongs1(function(err,songs1){
        if(err){
            throw err;
        }
        res.json(songs1)
    })
});

app.get('/api/songs1/:_id',function(req,res){
    Songs1.getSongs1ById(req.params._id,function(err,songs1){
        if(err){
            throw err;
        }
        res.json(songs1)
    })
});

app.listen(3000);
console.log('Running on port 3000....');