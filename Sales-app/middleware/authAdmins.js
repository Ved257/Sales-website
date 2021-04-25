const Users=require('../models/userModel')

const authAdmins=async(req,res,next)=>{
    try {
        const user=await Users.findOne({
            _id:req.user.id
        })

        if(user.role===0)
        return res.status(400).json({msg:'Admin resoursces access denied'})

        req.user=user
        next()
    } catch (error) {
        return res.status(500).json({msg: error.message})
    }
}

module.exports=authAdmins