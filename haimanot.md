#Prosjektoppgave, Haimanot, C++ 2013
------------------------------------------

Du skal lage et administrasjonssystem for programmeringskurs, med enkelt grafisk grensesnitt i Qt. 


Hovedfunksjonalitet

- Legge til kurs
- Importere studenter inn i kurs (feks. C++, 2013, eller Java1 2012)), fra en kommaseparert liste
- Legge til oppgaver i kurset, som alle studentene skal kobles til
- For hver student skal det være mulig å opprette en besvarelse, for hver oppgave. 
- En besvarelse er en klasse som er:
     - knyttet til en kurs-id og en student-id
     - En status, "levert" / "ikke levert"
     - Et leveringstidspunkt
     - En leveringsfrist
     - En poengscore, fra 0 til 100
     - En liste av linker til ressurser, som feks. github-repositorier

- Når programmet starter får man opp en liste over kurs som er aktive nå. Man kan også få tak i kurs som er avsluttet.
- Når man velger et kurs skal man få opp en side eller et panel med:
  - En oppsummering av kurset, mtp. hvor mange studenter som har levert, fått godkjent etc. for hver av oppgavene
  - En liste over alle studentene, gjerne med muilghet for å legge til bilde
    - Når man klikker på en av studentene vil oppsummeringen av kurset nevnt over, bli oppdatert for å vise denne studentens progresjon


Vi kan spesifisere dette nærmere etterhvert!