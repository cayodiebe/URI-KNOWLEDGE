select name,round((((math*2)+(specific*3)+(project_plan*5))/10),2) as avg from candidate cc
inner join score ss on ss.candidate_id = cc.id

order by avg desc
