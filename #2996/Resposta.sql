
select pp.year,uu.name,uu2.name from packages pp 
INNER JOIN users as uu on pp.id_user_sender = uu.id
INNER JOIN users as uu2 on pp.id_user_receiver = uu2.id

where id_user_receiver != 2 and id_user_sender != 2

order by 1 desc,2 desc