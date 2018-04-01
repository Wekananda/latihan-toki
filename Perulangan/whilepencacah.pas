var a,sum:longint;
begin
while not eof(input) do
begin
readln(a);
sum := sum + a;
end;
writeln(sum);
end.
