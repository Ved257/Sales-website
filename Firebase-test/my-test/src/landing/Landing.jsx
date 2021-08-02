import React from 'react'
import Card from 'react-bootstrap/Card'
import Button from 'react-bootstrap/Button'
import CardGroup from 'react-bootstrap/CardGroup'
import 'bootstrap/dist/css/bootstrap.min.css';
import './Landing.scss';
import { Router } from 'express';
import {Link} from'react-router-dom';


function Landing() {
  return (
        
    <CardGroup>
  <Card>
    
    <Card.Body >
      
      <Card.Title>SHOPKEEPER</Card.Title>
      <Card.Text>
      For shop owners, 
      who wish to increase their sales 
      and ensuring safe purchase of the products in their store.
      
      </Card.Text>
    </Card.Body>
    <Card.Footer>
    <>
  <Button classname=".custom-btn" variant="outline-primary" background-color="primary" size="small" block> 
  <Router>
    <Link>

    Register Now  
    </Link>
    
  </Router>
  </Button>
  <Button variant="primary" size="small" block>
    Sign in
  </Button>
</>
    </Card.Footer>
  </Card>
  <Card>
    
    <Card.Body>
      <Card.Title>CUSTOMER</Card.Title>
      <Card.Text>
      For those who wish to buy products from these  stores  safely .{' '}
      </Card.Text>
      
    </Card.Body>
    <Card.Footer>
    <Button variant="outline-secondary" size="small" block>
    Register Now 
  </Button>
  <Button variant="secondary" size="small" block>
    Sign in
  </Button>
    </Card.Footer>
  </Card>
  <Card>
    
    {/* <Card.Body>
      <Card.Title>Card title</Card.Title>
      <Card.Text>
        This is a wider card with supporting text below as a natural lead-in to
        additional content. This card has even longer content than the first to
        show that equal height action.
      </Card.Text>
    </Card.Body>
    <Card.Footer>
    <Button size="small">Learn More</Button>
    </Card.Footer>*/}
  </Card> 
</CardGroup>

  )
}

export default Landing
