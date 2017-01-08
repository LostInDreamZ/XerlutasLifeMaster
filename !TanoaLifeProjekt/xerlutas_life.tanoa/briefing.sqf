waitUntil {!isServer && !isNull player && player isEqualTo player};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["Platz1","*******************"];
player createDiarySubject ["werbung1","Homepage | Forum"];
player createDiarySubject ["werbung2","Teamspeak"];
player createDiarySubject ["Platz2","*******************"];
player createDiarySubject ["controls","Steuerung"];
player createDiarySubject ["regeln","Regelwerk"];
player createDiarySubject ["Platz3","*******************"];

/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>
                "
        ]
    ];
*/

//Werbung
    player createDiaryRecord ["werbung1",
        [
          " ",
				"
<font size='25'>xerlutas.de</font>
				" 
        ]
    ];
	
	player createDiaryRecord ["werbung2",
        [
          " ",
				"
<font size='25'>ts.xerlutas.de</font>
				" 
        ]
    ];


// Regelwerk
player createDiaryRecord["regeln",
		[
			" ",
				"
<font size='25' color='#ff0000'>Regeln</font><br/><br/>
Unser Regelwerk findest du im Forum: <br/> <font color='#31ada5'>forum.xerlutas.de</font>
				"
		]
	];
	
	
// Controls Section
    player createDiaryRecord ["controls",
        [
            "Polizei | Feuerwehr",
                "
<font size='25' color='#ff0000'>• Polizei •</font><br/>
<font color='#D60000'>SHIFT + R</font><br/>Person Fesseln<br/><br/>
<font color='#D60000'>SHIFT + L</font><br/>Blaulicht An/Aus<br/><br/>
<font color='#D60000'>F</font><br/>Fahrzeug Sirene An/Aus<br/><br/>
<font color='#D60000'>L</font><br/>Speed Radar<br/><br/>
<font size='25' color='#ff0000'>• Feuerwehr •</font><br/>
<font color='#D60000'>SHIFT + L</font><br/>Blaulicht An/Aus<br/><br/>
<font color='#D60000'>F</font><br/>Fahrzeug Sirene An/Aus<br/><br/>
                "
        ]
    ];
	
    player createDiaryRecord ["controls",
        [
            "Zivilisten",
                "
<font color='#D60000'>Z</font><br/>Handy/Spieler-Menü öffnen<br/><br/>
<font color='#D60000'>U</font><br/>Fahrzeuge auf- und zuschließen<br/><br/>
<font color='#D60000'>T</font><br/>Kofferraum öffnen (Virtuelle Items)<br/><br/>
<font color='#D60000'>SHIFT + B</font><br/>Sich Ergeben<br/><br/>
<font color='#D60000'>Windows</font><br/>Interaktions-Menü (Fahrzege / Häußer / gefesselte Personen)<br/><br/>
<font color='#D60000'>SHIFT + H</font><br/>Waffe holstern<br/><br/>
<font color='#D60000'>STRG + H</font><br/>Waffe ziehen<br/><br/>
<font color='#D60000'>SHIFT + Spacebar</font><br/>Springen<br/><br/>
<font color='#D60000'>SHIFT + O</font><br/>Ohrstöpsel An/Aus <br/><br/>
<font color='#D60000'>SHIFT + G</font><br/>Niederschlagen (Waffe benötigt.)<br/><br/>
<font color='#D60000'>Spacebar</font><br/>Kiste plazieren<br/><br/>
                "
        ]
    ];
