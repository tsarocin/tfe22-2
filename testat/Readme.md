# Testat

## Aufgabenstellung

Ziel ist es eine Kommandozeilen Applikation zu entwickeln welche als persönlicher Wetter Assistent verwendet werden kann. Dabei können die folgenden Aspekte von Interesse sein:

- Mit dem Fahrrad Pendeln, dabei ist es vielleicht interessant zu wissen ob es in einem Zeitfenster regnet oder ob es empfehlenswert ist für eine entsprechende Beleuchtung zu sorgen.
- Landwirtschaftliche Nutzung
- Fußballtrainer, der nicht immer allen in der Whats-App Gruppe mitteilen möchte ob das Training stattfindet oder nicht.
- Zeitreise in die Vergangenheit. Sie planen eine Urlaubsreise und möchten wissen wie wie dort das Wetter für den angegebenen Zeitraum in den letzten `n` Jahren gewesen ist.

Für die Ausgabe eignet sich Markdown was zum Beispiel mittels [gum](https://github.com/charmbracelet/gum) visualisiert werden kann. Alternativ können Sie auch eine Alternative HTML Ausgabe verwenden.

### Abfrage der Wetterdaten

Die Abfrage der Wetterdaten können Sie über die API der [open-meteo.com](https://open-meteo.com/) realisieren.

### Benachrichtigung

Wählen Sie mindestens zwei Varianten zur Benachrichtigung, hier einige Beispiele:

- X (auch als Twitter bekannt) oder Mastodon
- [Microsoft Teams](https://learn.microsoft.com/de-de/adaptive-cards/resources/tools), Slack oder Mattermost
- E-Mail
- What's App, Signal, Threema, Discord oder Telegram
- MQTT
- Twillo
- IFTTT
- ...

Es muss keine Ende zu Ende Benachrichtigung stattfinden, es reicht das schematisch darzustellen. Wenn Sie es trotzdem schaffen erhalten Sie Zusatzpunkte.

**WICHTIG:** Speichern Sie keine Passwörter oder Zugangs-Token nutzen Sie hierfür Methoden wie Konfigurationsdateien oder Umgebungsvariablen.

## Vorbereitung

Jede Gruppe legt ein eigenes Repository an und fügt den Benutzer `graugans` zu diesem Repository hinzu. Das Repository ist auf **Privat** zu stellen. Damit die Gruppen nicht voneinander abschreiben können.

## Bewertung

### Quellcode 50%

Bewertet wird die Qualität des Quellcodes hinsichtlich der folgenden Kriterien:

- Lesbarkeit
- Niedrige Fehlerrate
- Verwendung der in der Vorlesung erlernte Konzepte

### Dokumentation 40%

Neben der Implementierung spielt die Dokumentation Ihres Projektes eine Zentrale Rolle. Dazu Gehören die folgenden Aspekte:

- Doxygen, ist nicht zwingend notwendig.
- Projektdokumentation

Die Projektdokumentation hat in **Markdown** zu erfolgen!
Zusatzpunkte können Sie erlangen wenn Sie zum Beispiel Ihre Projektdokumentation mittels [MkDocs](https://www.mkdocs.org/) und GitHub Pages zu Verfügung stellen.

### Testing 10%

Um sicherzustellen, dass der Quellcode die erwarten Ergebnisse liefert ist ein geeignetes Test set-up zu wählen. In Ihrem Codespace stehen Ihnen dafür das Framework [Catch2](https://github.com/catchorg/Catch2) zu Verfügung.

### Zusatzpunkte

Generell gilt, überraschen Sie mich. Besonders Kreative Ansätze und erweiterte Lösungen werden belohnt. Hier ein paar Vorschläge zum sammeln von Zusatzpunkten:

- Nutzung der GitHub Actions zum automatisierten Bauen
- Verwendung eines Tools wie [MkDocs](https://www.mkdocs.org/) zur Erzeugung einer Projektwebseite und deren Hosting mittels GitHub Pages.
- Vollständige Benachrichtigung über einen Dienst Ihrer Wahl

## Abgabe

Die Abgabe erfolgt bis spätestens 13.01.2023 um 00:00 Uhr. Über einen Pull-Request im spezifische Team Repository. Erstellen Sie hierzu einen Branch `testat-001` analog zu folgender Graphik:

![](https://mermaid.ink/img/pako:eNqdkMEKwjAMhl-l5DxhXnsWNmEn9dhL7LJ1uLajSw9j7N2tiAgyRRYI5CfJ94fMoH1NIEG0HRcBByOqk1ROPEN7azv-Jq8BnTaCaWTkXZ7v_9xbxzSEHANt52hD-uYjrx1kKbS0xeLFtNi5D9rbRvA0kBTlsSirlJffcMggARKwTn-fH00FbMiSApnKmhqMPStQbkmjGNmfJ6dBcoiUQRxqZDp02Aa0IBvsR1ruc2aHwg?type=png)

Sie entwickeln Ihre Features in separaten Branches welche Sie jeweils mittels Pull-Request in Ihren Branch `testat-001` mergen.

**Wichtig:** Sie dürfen Ihren Branch `testat-001` auf keinen Fall in main mergen.

### Disqualifikation

Sollte eine oder mehrere Gruppen voneinander abschreiben, oder identischen Quellcode abliefern werden beide Gruppen disqualifiziert und das Testat gilt als nicht bestanden.
