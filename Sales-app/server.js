require('dotenv').config()
const express= require('express')
const mongoose=require('mongoose')
const cors=require('cors')
const fileupload=require('express-fileupload')
const cookieParser=require('cookie-parser')


const app=express()
app.use(express.json())
app.use(cookieParser())
app.use(cors())
app.use(fileupload({
    useTempFiles:true
}))

//Routes
app.use('/user',require('./routes/userRouter'))
app.use('/api/categoryRouter',require('./routes/categoryRouter'))
app.use('/api/upload',require('./routes/upload'))
app.use('/api/productRouter',require('./routes/productRouter'))

const PORT=process.env.PORT||3000
app.listen(PORT,()=>{
    console.log('Server is  running on port ',PORT)
})

const URI=process.env.MONDGODB_URL
mongoose.connect(URI,{
    useCreateIndex:true,
    useFindAndModify:false,
    useNewUrlParser:true,
    useUnifiedTopology:true
},err=>{
    if(err) throw err;
    console.log('Connected to MongoDB')
})

app.get('/',(req,res)=>{
    res.json({msg:"Trial run"})
})

