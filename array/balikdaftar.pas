var n:longint;
    i,j:integer;
    k: array[1..25000] of longint;
begin
    i:=0;
    while not eof(input) do
    begin
    i:=i+1;
    readln(k[i]);
    end;
    for j:=i downto 1 do begin
    writeln(k[j]);
    end;
end.
