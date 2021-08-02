
import './App.css';
import firebase from 'firebase/app';
import 'firebase/auth'
import { useEffect, useState } from 'react';
import Seller from './Seller';



function App() {
const [auth, setAuth] = useState(false|| window.localStorage.getItem('auth') === 'true');
const [token,setToken] = useState('');

  useEffect(()=>
  {
    firebase.auth().onAuthStateChanged((userCred)=>{
      if(userCred)
      {
        setAuth(true)
        window.localStorage.setItem('auth','true')
        userCred.getIdToken().then((token)=>{
          setToken(token)
        })
      }
      console.log(userCred)
    })
  });

  var provider = new firebase.auth.GoogleAuthProvider();

  const loginWithGoogle = ()=>{
    firebase.auth().signInWithPopup(provider).then((userCred)=>{
      if(userCred)
      {
        setAuth(true)
      }
      console.log(userCred)
    });
 
};



  return (

    <div className="App">
      {auth ?(
       <Seller token={token}/>
      )
      :(
      <p1>
      <button onClick={loginWithGoogle}>
        Login with Google
      </button>
      </p1>
      )}

    </div>
  );
}

export default App;
