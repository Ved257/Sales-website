import React from 'react'
import { Jumbotron, Row,Col, Container} from 'react-bootstrap'
import 'bootstrap/dist/css/bootstrap.min.css';
import './Landing.scss'

export default function Landing() {
    return (
        <div>
            <Container>
                <Row>
                    <Col >
                    <div>
                    <Jumbotron fluid className="content">
                        <Container fluid>
                        <h1 className="display-4">RETAIL IS CHANGING AT A SPEED</h1>
                        <p className="lead">This is a modified jumbotron that occupies the entire horizontal space of its parent.</p>
                        </Container>
                    </Jumbotron>
                    </div>
                    </Col>
                </Row>
        </Container>
        </div>


    )
}
