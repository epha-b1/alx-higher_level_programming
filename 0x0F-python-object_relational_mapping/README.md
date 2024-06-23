# 0x0F. Python - Object-relational mapping

This project explores Object-Relational Mapping (ORM) in Python, focusing on the interaction between Python and MySQL databases using both raw SQL queries and the SQLAlchemy ORM.

## Files

### SQL and MySQLdb
- `0-select_states.py`: Lists all states from the database hbtn_0e_0_usa.
- `1-filter_states.py`: Lists all states with a name starting with N from the database.
- `2-my_filter_states.py`: Displays all values in the states table where name matches the argument.
- `3-my_safe_filter_states.py`: SQL injection-safe version of 2-my_filter_states.py.
- `4-cities_by_state.py`: Lists all cities from the database hbtn_0e_4_usa.
- `5-filter_cities.py`: Lists all cities of a given state from the database.

### SQLAlchemy
- `model_state.py`: Contains the class definition of a State and an instance Base = declarative_base().
- `6-model_state.py`: Creates the State class and links it to the MySQL table states.
- `7-model_state_fetch_all.py`: Lists all State objects from the database.
- `8-model_state_fetch_first.py`: Prints the first State object from the database.
- `9-model_state_filter_a.py`: Lists all State objects that contain the letter 'a'.
- `10-model_state_my_get.py`: Prints the State object with the name passed as argument.
- `11-model_state_insert.py`: Adds the State object "Louisiana" to the database.
- `12-model_state_update_id_2.py`: Changes the name of a State object in the database.
- `13-model_state_delete_a.py`: Deletes all State objects with a name containing the letter 'a'.
- `model_city.py`: Contains the class definition of a City.
- `14-model_city_fetch_by_state.py`: Prints all City objects from the database.

### Advanced Tasks
- `relationship_city.py`: Enhanced version of model_city.py.
- `relationship_state.py`: Enhanced version of model_state.py with relationship to City.
- `100-relationship_states_cities.py`: Creates the State "California" with the City "San Francisco".
- `101-relationship_states_cities_list.py`: Lists all State objects and corresponding City objects.
- `102-relationship_cities_states_list.py`: Lists all City objects from the database.

### SQL Files
- `4-cities_by_state.sql`: SQL script to create and populate the cities table.
- `6-model_state.sql`: SQL script to create the database hbtn_0e_6_usa.

## Requirements
- Python 3.8.5
- MySQLdb 2.0.x
- SQLAlchemy 1.4.x
- pycodestyle 2.8.*
- MySQL 8.0

## Usage
To run any script, use the following format:

```bash
./script_name.py <mysql username> <mysql password> <database name>
```