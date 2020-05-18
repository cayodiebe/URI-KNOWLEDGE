select dd.name,round(
sum(
(aa.hours * 150.0)
+
(((aa.hours * 150.0) * ww.bonus)
/
100.0)) , 1) as salary
 from doctors dd
INNER JOIN attendances aa on aa.id_doctor = dd.id
INNER JOIN work_shifts ww on ww.id = aa.id_work_shift
group by dd.id
ORDER BY salary DESC