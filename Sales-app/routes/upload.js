const router=require('express').Router()
const cloudinary=require('cloudinary')
const auth=require('../middleware/auth')
const authAdmins=require('../middleware/authAdmins')
const fs=require('fs')


cloudinary.config({
    cloud_name:process.env.CLOUD_NAME,
    api_key:process.env.CLOUD_API_KEY,
    api_secret:process.env.CLOUD_API_SECRET,
})

router.post('/upload',auth,authAdmins,(req,res)=>{
    try {
        console.log(req.files)
        if(!req.files||Object.keys(req.files.files).length===0)
        return res.status(400).send('No files were uploaded')
                
        const file=req.files.file;
        if(file.size>1024*1024){
            removeTemp(file.tempFilePath)
        }
        return res.status(400).json({msg:"Size too large"})

        if(file.mimeype!=='image/jpeg' && file.mimeype!=='image/png')
        removeTemp(file.tempFilePath)
        return res.status(400).json({msg:"File format incorrect"})

        cloudinary.v2.uploader.upload(file.tempFilePath,{foleder:"ecommerce"},async (err,result)=>{
            if(err) throw err;
            
            removeTemp(file.tempFilePath)
            res.json({public_id:result.public_id,url:result.secure_url})
        })


        res.json('test upload')
    } catch (error) {
        res.status(500).json({msg:error.message})
    }
})

router.post('/destroy',auth,authAdmins,(req,res)=>{
    try {
        const {public_id}=req.body;
        if(!public_id)
        return res.status(400).json({msg:"No images"})

        cloudinary.v2.uploader.destroy(public_id, async (req,res)=>{
            if(err) throw err;

            res.json({msg:"Delted image"})
        })
        
    } catch (error) {
        return res.status(500).json({msg:error.message})
    }

})



const removeTemp=(path)=>{
    fs.unlink(path,err=>{
        if(err) throw err;
    })
}

module.exports=router