import './App.modules.css'
import {BrowserRouter as Router, Switch, Route} from "react-router-dom"

const App=() =>
{
    return (
        <Router>
            <Switch>
                <Route path="play/:songID">
                    <MusicPlayer/>
                </Route>
                <Route path="play/:songID">
                    <MusicPlayer/>
                </Route>
            </Switch>
        </Router>
    )
}
export default App