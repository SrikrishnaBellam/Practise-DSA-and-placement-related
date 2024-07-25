// db_connection.js
const mysql = require('mysql2/promise');

const pool = mysql.createPool({
    host: 'localhost',
    user: 'SK',
    password: 'Admin@1230981',
    database: 'userdb',
    port: "3306",
    waitForConnections: true,
    connectionLimit: 10,
    queueLimit: 0
});

module.exports = pool;
