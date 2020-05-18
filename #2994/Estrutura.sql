CREATE TABLE doctors ( 
    id INTEGER NOT NULL, 
    name VARCHAR(50), 
    CONSTRAINT doctors_pkey 
    PRIMARY KEY(id) ) 
    WITH (oids = false);

INSERT INTO doctors ("id", "name") 
VALUES 
(1, E'Arlino'), 
(2, E'Tiago'), 
(3, E'Amanda'), 
(4, E'Wellington');

CREATE TABLE work_shifts ( 
    id INTEGER NOT NULL, 
    name VARCHAR(50), 
    bonus NUMERIC, 
    CONSTRAINT work_shifts_pkey 
    PRIMARY KEY(id) ) 
    WITH (oids = false);

INSERT INTO work_shifts ("id", "name", "bonus") 
VALUES 
(1, E'nocturnal ', 15), 
(2, E'afternoon ', 2), 
(3, E'day ', 1);

CREATE TABLE attendances ( 
    id INTEGER NOT NULL, 
    id_doctor INTEGER, 
    hours INTEGER, 
    id_work_shift INTEGER, 
    CONSTRAINT attendances_pkey 
    PRIMARY KEY(id) ) 
    WITH (oids = false);

INSERT INTO attendances ("id", "id_doctor", "hours", "id_work_shift") 
VALUES 
(1, 1, 5, 1), 
(2, 3, 2, 1), 
(3, 3, 3, 2), 
(4, 2, 2, 3), 
(5, 1, 5, 3), 
(6, 4, 1, 3), 
(7, 4, 2, 1), 
(8, 3, 2, 2), 
(9, 2, 4, 2);