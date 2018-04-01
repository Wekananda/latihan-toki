var
table : array [1..1001] of longint;
t,a,b,c,r : longint;
begin
readln(c);

for a:= 1 to c do
begin
readln(b);
table[b]:= table[b]+1;
end;

t:= -999;
r:= -999;
for a:= 1000 downto 1 do
begin
if(table[a]>t) then
begin
t:= table[a];
r:=a;
end;
end;
write(r);
writeln();
end.
