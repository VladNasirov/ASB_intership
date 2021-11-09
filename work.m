file='floatres.txt';
[Fisxodnoe]=importdata(file);
subplot(2,1, 1)
plot(Fisxodnoe,'o-');

subplot(2,1, 2)
file='doubleres.txt';
[Disxodnoe]=importdata(file);
plot(Disxodnoe,'o-');