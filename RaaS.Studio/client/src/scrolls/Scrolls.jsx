import React, { Component } from 'react'
import { Parallax, ParallaxLayer } from '@react-spring/parallax'
import Landing from '../landing'


export default class Anim1 extends Component {
    render() {
        return (
            <div>
                <Parallax pages={2} style={{ top: '0', left: '0' }}>
                <ParallaxLayer
                    offset={0}
                    speed={2.5}
                    // style={{ display: 'flex', justifyContent: 'center', alignItems: 'center' }}
                    >
                    <Landing/>
                </ParallaxLayer>

                <ParallaxLayer offset={1} speed={2} style={{ backgroundColor: '#BB04FE' }} />

                <ParallaxLayer
                    offset={1}
                    speed={0.5}
                    style={{
                    display: 'flex',
                    justifyContent: 'center',
                    alignItems: 'center',
                    color: 'white',
                    }}>
                    <p>Scroll up</p>
                </ParallaxLayer>
        </Parallax>
            </div>
        )
    }
}
