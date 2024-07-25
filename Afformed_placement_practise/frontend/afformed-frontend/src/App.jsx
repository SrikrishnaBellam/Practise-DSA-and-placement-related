import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import UserForm from './UserForm'

function App() {
  const [count, setCount] = useState(0)

  return (
    <div className='App'>
      <h1>User Registration Form</h1>
      <UserForm/>
    </div>
  )
}

export default App
