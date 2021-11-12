file='C:\Users\makas\source\repos\Work\Work\floatres.txt';
[Fisxodnoe]=importdata(file);
subplot(2,1, 1)
plot(Fisxodnoe,'o-');
ylabel('A*10');
subplot(2,1, 2)
file='C:\Users\makas\source\repos\Work\Work\doubleres.txt';
[Disxodnoe]=importdata(file);
plot(Disxodnoe,'o-');