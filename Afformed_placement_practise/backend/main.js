const express = require('express');
const crud = require('./crud_operation');
const bodyParser = require('body-parser');

const app = express();
app.use(bodyParser.json());

app.post('/create', async (req, res) => {
    const { User_Name, User_username, User_password, User_phone_number, User_email } = req.body;
    try {
      const result = await crud.createUser(User_Name, User_username, User_password, User_phone_number, User_email);
      res.status(201).json(result);
    } catch (err) {
      res.status(500).json({ error: err.message });
    }
  });

app.get('/getUsers', async(req, res)=>{
    try{
        const rows = await crud.getUsers();
        res.status(200).json(rows);
    }catch(err){
        res.status(500).json({error: err.message});
    }
})

app.put('/update/:id', async(req, res)=>{
    const {id} = req.paramsl
    const {User_Name, User_username, User_password, User_phone_number, User_email} = req.body;
    try{
        const results = await crud.updateUser(id, User_Name, User_username, User_password, User_phone_number, User_email);
        res.status(200).json(results)
    }catch(err){
        res.status(500).json({error:err.message});
    }
});

app.delete('/delete/:id', async (req, res)=>{
    const { id } = req.params;
    try {
        const result = await crud.deleteAccount(id);
        res.status(200).json(result);
    } catch (err) {
        res.status(500).json({ error: err.message });
    }
})

const PORT = 3000;
app.listen(PORT, ()=>{
    console.log(`Server is running on ${PORT}`);
})