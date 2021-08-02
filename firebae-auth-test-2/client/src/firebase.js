import firebase from "firebase";
import "firebase/auth"

const app= firebase.initializeApp({
    apiKey: "AIzaSyAlvKpmSX3D3M4q8IKNkNxQ3RSD01IhVyc",
    authDomain: "auth-dev-1342b.firebaseapp.com",
    projectId: "auth-dev-1342b",
    storageBucket: "auth-dev-1342b.appspot.com",
    messagingSenderId: "453267224535",
    appId: "1:453267224535:web:cd5d1a3cfddd94838abd92"

})

export const auth=app.auth();
export default app;