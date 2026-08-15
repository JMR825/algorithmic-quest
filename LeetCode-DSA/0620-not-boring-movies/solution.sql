# Write your MySQL query statement below
select id, movie,description,rating
From Cinema 
where id%2=1 AND description <> 'boring' 
order by rating DESC;
