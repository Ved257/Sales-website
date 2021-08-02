const express=require('express')
const app= express();
const cors=require('cors');
const middleware = require('../middleware');

app.use(cors());

app.use(middleware.decodeToken)


PORT=5000;

app.get('/',(req,res)=>{
    console.log(req.headers);
    res.json(
        {
            "User":"Sells"
        }
    )
})

app.listen(PORT,()=>{
    console.log("Server is running on port ",PORT);
});