import React,{useEffect} from 'react'
import axios from 'axios'
import firebase from 'firebase';

export default function Seller({token}) {
    // const [auth, setAuth] = useState(true);
    useEffect(() => {
        if(token)
        {
            fetchData(token);
            firebase.auth(true)
        }
        
    },)
    // const logOutFromGoogle=()=>{
    //     firebase.auth().signOut().then(() => {
    //         setAuth(false)

    //       }).catch((error) => {
    //         console.log(error)
    //       });
    // }


   
    const fetchData=async()=>{
      const res= await axios.get("http://localhost:5000/",{
          headers:{
              Authorization:'Bearer '+ token
          }
      })
      console.log(res.data)
    }
    return (
        <div>
            <h1>
            Signup With User
            </h1>
            <button >
                Sign-out
            </button>
        </div>
    )
}
