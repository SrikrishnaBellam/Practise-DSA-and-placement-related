// CRUD_operations.js
const pool = require('./db_connection');

async function createAccount(User_Name, User_username, User_password, User_phone_number, User_email) {
    const query = `INSERT INTO user_database (User_Name, User_username, User_password, User_phone_number, User_email) VALUES (?,?,?,?,?)`;
    const [results] = await pool.execute(query, [User_Name, User_username, User_password, User_phone_number, User_email]);
    return results;
}

async function getAccountInfo() {
    const query = `SELECT * FROM user_database`;
    const [rows] = await pool.execute(query);
    return rows;
}

async function updateAccount(User_ID, User_Name, User_username, User_password, User_phone_number, User_email) {
    const query = `UPDATE user_database SET User_Name = ?, User_username = ?, User_password = ?, User_phone_number = ?, User_email = ? WHERE User_ID=?`;
    const [result] = await pool.execute(query, [User_Name, User_username, User_password, User_phone_number, User_email, User_ID]);
    return result;
}

async function deleteAccount(User_ID) {
    const query = `DELETE FROM user_database WHERE User_ID = ?`;
    const [result] = await pool.execute(query, [User_ID]);
    return result;
}

module.exports = {
    createAccount,
    getAccountInfo,
    updateAccount,
    deleteAccount
};
