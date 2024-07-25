// app.js
const express = require('express');
const bodyParser = require('body-parser');
const crud = require('./CRUD_operations');

const app = express();
app.use(bodyParser.json());

app.post('/account', async (req, res) => {
    const { User_Name, User_username, User_password, User_phone_number, User_email } = req.body;
    try {
        const result = await crud.createAccount(User_Name, User_username, User_password, User_phone_number, User_email);
        res.status(201).json(result);
    } catch (err) {
        res.status(500).json({ error: err.message });
    }
});

app.get('/account', async (req, res) => {
    try {
        const rows = await crud.getAccountInfo();
        res.status(200).json(rows);
    } catch (err) {
        res.status(500).json({ error: err.message });
    }
});

app.put('/account/:id', async (req, res) => {
    const { id } = req.params;
    const { User_Name, User_username, User_password, User_phone_number, User_email } = req.body;
    try {
        const result = await crud.updateAccount(id, User_Name, User_username, User_password, User_phone_number, User_email);
        res.status(200).json(result);
    } catch (err) {
        res.status(500).json({ error: err.message });
    }
});

app.delete('/account/:id', async (req, res) => {
    const { id } = req.params;
    try {
        const result = await crud.deleteAccount(id);
        res.status(200).json(result);
    } catch (err) {
        res.status(500).json({ error: err.message });
    }
});

const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
    console.log(`Server is running on port ${PORT}`);
});
