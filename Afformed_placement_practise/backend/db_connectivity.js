const mysql = require('mysql2/promise');

var pool = mysql.createPool({
    host:'localhost',
    user:'SK',
    password:'Admin@1230981',
    database:'userdb',
    port: '3306',
    waitForConnections: true,
    connectionLimit:10
});

module.exports = pool;