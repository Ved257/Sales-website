import React from 'react'
import {Navbar, Nav, Container} from 'react-bootstrap'
import './Navbar.scss'
import 'bootstrap/dist/css/bootstrap.min.css';


export default function NavbarFunc() {
    return (
        <div>
            <>
            <Navbar bg="dark" variant="dark">
                <Container>
                <Navbar.Brand href="#home">Navbar</Navbar.Brand>
                <Nav className="actions">
                <Nav.Link href="#home">Home</Nav.Link>
                <Nav.Link href="#features">Features</Nav.Link>
                <Nav.Link href="#pricing">Pricing</Nav.Link>
                </Nav>
                </Container>
            </Navbar>
            </>
        </div>
    )
}
