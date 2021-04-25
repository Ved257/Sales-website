const router=require('express').Router()
const categoryCtrl=require('../controllers/categoryCtrls')
const auth=require('../middleware/auth')
const authAdmins = require('../middleware/authAdmins')


router.route('/category')
      .get(categoryCtrl.getCategories)
      .post(auth,authAdmins,categoryCtrl.createCategory)

router.route('/category/:id')
      .delete(auth, authAdmins, categoryCtrl.deleteCategory)

module.exports=router