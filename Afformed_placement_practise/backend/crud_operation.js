const pool = require('./db_connectivity');


async function createUser(User_Name, User_username, User_password, User_phone_number, User_email) {
    const query = `INSERT INTO user_database (User_Name, User_username, User_password, User_phone_number, User_email) VALUES (?,?,?,?,?)`;
    const [result] = await pool.execute(query, [User_Name, User_username, User_password, User_phone_number, User_email]);
    return result;
  }

async function getUsers(){
    const query = `SELECT * FROM user_database`;
    const [rows] = await pool.execute(query);
    return rows;
}

async function updateUser(User_ID,User_Name, User_username, User_password, User_phone_number, User_email){
    const query =`UPDATE user_database SET User_Name=?,User_username=?,User_password=?,User_phone_number=?,User_email=? WHERE User_ID=?`;
    const [results] = await pool.execute(query,[User_Name, User_username, User_password, User_phone_number, User_email, User_ID]);
    return results;
}

async function deleteUser(User_ID){
    const query = `DELETE FROM user_database WHERE User_ID=?`;
    const [results] = await pool.execute(query,[User_ID]);
    return results;
}

module.exports = {
    createUser,
    getUsers,
    updateUser,
    deleteUser
}