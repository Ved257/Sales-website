import React,{useContext,useState,useEffect} from 'react'
import {useParams,Link} from 'react-router-dom'
import {GlobalState} from '../../../GlobalState'

function DetailsProducts() {
    const params=useParams()
    const state=useContext(GlobalState)
    const [products]=state.productsAPI.products
    const [detailsProduct, setDetailsProduct]=useState([])

    useEffect(()=>{
        if(params){
            products.forEach(product => {
                if(product._id===params.id) setDetailsProduct(product)
            });
        }
    },[params,products])

    if(detailsProduct.length===0) return null

    return (
        <div className="detailProduct">
            <>
            <img  src={detailsProduct.images} alt=""/>
            <div className="box-detail">
                <div>
                    <h2>{detailsProduct.title}</h2>
                    <h6>#id:{detailsProduct.product_id}</h6>
                </div>
                <span>₹{detailsProduct.price}</span>
                <p>{detailsProduct.description}</p>
                <p>{detailsProduct.content}</p>
                <p>Sold:{detailsProduct.sold}</p>
                <Link to="/cart" className="cart">Buy Now</Link>
            </div>
             </>
        </div>
      

    )
}

export default DetailsProducts
