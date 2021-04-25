const Category=require('../models/categoryModels')

const categoryCtrls={
    getCategories:async (req,res)=>{
        try {
            const categories=await Category.find()
            res.json(categories)
        } catch (error) {
            return res.status(500).json({msg: error.message})
        }
    },
    createCategory:async(req,res)=>{
        try {
            const {name}=req.body;
            const category= await Category.findOne({name})
            if(category) return res.status(400).json({msg:"This category already exists"})

            const newCategory=new Category.findOne({name})

            await newCategory.save()
            res.json('Check admin success')
        } catch (error) {
            return res.status(500).json({msg: error.message})
        }
    },
    deleteCategory:async (req,res)=>{
        try {
            await Category.findByIdAndDelete(req.params.id)
            res.json({msg:"Deleted Category"})
        } catch (error) {
            return res.status(500).json({msg:error.message})
        }
    }


}

module.exports=categoryCtrls