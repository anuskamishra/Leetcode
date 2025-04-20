# Write your MySQL query statement below
SELECT A.user_id, round(ifnull(avg(action = 'confirmed'),0),2) AS confirmation_rate
FROM signups as A
left join confirmations AS B
on A.user_id = B.user_id
GROUP BY A.user_id;