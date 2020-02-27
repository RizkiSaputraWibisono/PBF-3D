import React from 'react';
import './Login.css';


class Login extends React.Component
{
    render(){
    return (
        <div className="kotak_login">
            <h1>Form Login</h1>
            <h2>Tugas Pertemuan Ketiga</h2>
            <div className='formLogin'>
                <form action="">

                <label>Username</label>
                <input type="text" name="username" class="form_login" placeholder="Username atau email .."></input> 

                <label>Password</label>
                <input type="password" name="password" class="form_login" placeholder="Password .."></input>

                <input type="submit" class="tombol_login" value="LOGIN"></input>
                <br/>
                <br/>
                <input type="checkbox" /> Remember Me
                <br/>
                <br/>
                <input type="submit" class="tombol_cancel" value="CANCEL"></input>
                </form>
            </div>
        </div>
        );
    }
}

export default Login;