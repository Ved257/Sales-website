import React, {useState,useContext} from 'react'
import {GlobalState} from '../../GlobalState'
import Menu from './icon/Menu.svg'
import Cart from './icon/Cart.svg'
import Close from './icon/Close.svg'
import {Link} from 'react-router-dom'


function Header() {
    const value=useContext(GlobalState)
    console.log(value)
    return (
        <header>
            <div className="menu">
                <img src={Menu} alt="\n" width="30"/>
            </div>
            <div className="logo">
                <h1>
                    <Link to="/">Sales Website</Link>
                </h1>
            </div>

            <ul>
                <li>
                    <Link to="/">Products</Link>
                </li>
                <li><Link to="/login">Login or Register</Link></li>
                <li className="close">
                <img src={Close} alt="" width="30"/>
                </li>
            </ul>

            <div className="cart-icon">
                <span>0</span>
                <Link to="/cart">
                <img src={Cart} alt="" width="30"/>
                </Link>
            </div>
        </header>
        

    )
}

export default Header
