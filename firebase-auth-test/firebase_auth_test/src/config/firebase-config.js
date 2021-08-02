import firebase from 'firebase/app'
import 'firebase/analytics'

const firebaseConfig = {
    apiKey: "AIzaSyAUE2dIyOh6xAQ7wOMG6NncArLRgkyLfqU",
    authDomain: "test-3-8631d.firebaseapp.com",
    projectId: "test-3-8631d",
    storageBucket: "test-3-8631d.appspot.com",
    messagingSenderId: "332291006302",
    appId: "1:332291006302:web:4dfa54f6a113827ffdb9cf",
    measurementId: "G-B39Q7QDLHL"
  };
  // Initialize Firebase
  firebase.initializeApp(firebaseConfig);
  firebase.analytics();