const express= require('express')
const admin = require('firebase-admin');
// Firebase App (the core Firebase SDK) is always required and
// must be listed before other Firebase SDKs
var firebase = require("firebase/app");

// Add the Firebase products that you want to use
require("firebase/auth");
require("firebase/firestore");

// TODO: Replace the following with your app's Firebase project configuration
// For Firebase JavaScript SDK v7.20.0 and later, `measurementId` is an optional field

const firebaseConfig = {
        apiKey: "AIzaSyD0OuD6vXCz4tLRqYTHKs7pxYBgVWc8r1o",
        authDomain: "test-2-f4d0c.firebaseapp.com",
        projectId: "test-2-f4d0c",
        storageBucket: "test-2-f4d0c.appspot.com",
        messagingSenderId: "172028862274",
        appId: "1:172028862274:web:5e4b2caa1d5d1993aab2db",
        measurementId: "G-ZKXMSEDMFM"
      };    

  
  // Initialize Firebase
  firebase.initializeApp(firebaseConfig);

const app=express()
app.use(express.json())

const PORT=3000
app.listen(PORT,()=>{
    console.log('Server is  running on port ',PORT)
})



app.get('/',(req,res)=>{
    res.send("Hello there!")
})