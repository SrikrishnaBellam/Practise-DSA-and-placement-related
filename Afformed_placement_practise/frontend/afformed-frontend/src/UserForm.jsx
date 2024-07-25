import React, {useState} from "react";

const UserForm = () => {
    const [formData, setFormData] = useState({
        User_Name:'',
        User_username:'',
        User_password:'',
        User_phone_number:'',
        User_email:''
    });

    const handleChange = (e) => {
        const {name, value} = e.target;
        setFormData({
            ...formData,
            [name]: value
        });
    };

    const handleSubmit = (e) => {
        e.preventDefault();
        console.log('Form Data Submitted:', JSON.stringify(formData));
    };

    return(
        <form onSubmit={handleSubmit}>
            <div>
                <label>Name: </label>
                <input type="text" name="User_Name" value={formData.User_Name} onChange={handleChange}/>
            </div>
            <div>
                <label>UserName: </label>
                <input type="text" name="User_username" value={formData.User_username} onChange={handleChange}/>
            </div>
            <div>
                <label>Password: </label>
                <input type="password" name="User_password" value={formData.User_password} onChange={handleChange}/>
            </div>
            <div>
                <label>Phone Number: </label>
                <input type="text" name="User_phone_number" value={formData.User_phone_number} onChange={handleChange}/>
            </div>
            <div>
                <label>Email: </label>
                <input type="email" name="User_email" value={formData.User_email} onChange={handleChange}/>
            </div>
            <button type="submit">Submit</button>
        </form>
    )
}

export default UserForm;