const express = require('express');
const app = express();
const bodyParser= require('body-parser')
const MongoClient = require('mongodb').MongoClient



var connectionString = 'mongodb+srv://admin:v256e60e9f@cluster0.wgczl.mongodb.net/Users?retryWrites=true&w=majority'

MongoClient.connect(connectionString, { useUnifiedTopology: true })
  .then(client => {
    console.log('Connected to Database')
    const db = client.db('users-core')
    const usersCollection = db.collection('users')

    app.use(bodyParser.json())
    app.use(bodyParser.urlencoded({ extended: true }))
    app.use(express.static(__dirname));

    app.get('/', (req, res) => {
        usersCollection.find().toArray()
            .then(results => {
            console.log(results)
            })
            .catch(error => console.error(error))
        res.sendFile(__dirname + '/index.html')
    })

    app.post('/signin', (req, res) => {
        usersCollection.insertOne(req.body)
            .then(result => {
            console.log(result)
        })
        .catch(error => console.error(error))
        res.redirect('/')
    })
  })

app.listen(3000, function() {
  console.log('listening on 3000')
})

