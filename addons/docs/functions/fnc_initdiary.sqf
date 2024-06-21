#include "..\script_component.hpp"
/*
 * Author: CPL.Brostrom.A -- Tinkered with by YonV tinkered with by YonV
 * This function add diary records.
 *
 * Example:
 * call LXIM_fnc_init_diary
 *
 * Public: No
 */

waitUntil {!isNull player && player == player};


// Add New Topic (LXIM)
if !(player diarySubjectExists "mission") then {
    player createDiarySubject ["mission","Mission"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
    // call FUNC(Doc_Radio);
    // call FUNC(Doc_Info);
};

// Add New Topic (Checklists)
if !(player diarySubjectExists "Chklists") then {
    player createDiarySubject ["Chklists","Checklists"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
    player createDiaryRecord["Chklists",
    ["ACE & DEFREF",
        "<img image='z\lxim\addons\media\images\diary\veh_ace.paa' width='367' />"
    ]
];

player createDiaryRecord["Chklists",
    ["SALUTE",
        "<img image='z\lxim\addons\media\images\diary\salute_react.paa' width='367' />"
    ]
];

player createDiaryRecord["Chklists",
    ["CONTACT",
        "<img image='z\lxim\addons\media\images\diary\contact.paa' width='367' />"
    ]
];

};

// Add New Topic (Radio Reports)
if !(player diarySubjectExists "radioReportsm") then {
    player createDiarySubject ["radioReportsm","Radio Reports Medical"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
    player createDiaryRecord["radioReportsm",
    ["CASEVAC REQUEST",
        "<img image='z\lxim\addons\media\images\diary\casevac.paa' width='367' />"
    ]
];

player createDiaryRecord["radioReportsm",
    ["MIST REPORT",
        "<img image='z\lxim\addons\media\images\diary\mist.paa' width='367' />"
    ]
];
};

// Add New Topic (Radio Reports)
if !(player diarySubjectExists "radioReportsc") then {
    player createDiarySubject ["radioReportsc","Radio Reports CAS"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
player createDiaryRecord["radioReportsc",
    ["AirFrame Check-in",
        "<img image='z\lxim\addons\media\images\diary\airframe.paa' width='367' />"
    ]
];

player createDiaryRecord["radioReportsc",
    ["Fixed Wing 9-line",
        "<img image='z\lxim\addons\media\images\diary\fixwing.paa' width='367' />"
    ]
];

player createDiaryRecord["radioReportsc",
    ["Gunship Call for Fire",
        "<img image='z\lxim\addons\media\images\diary\gunship.paa' width='367' />"
    ]
];

player createDiaryRecord["radioReportsc",
    ["Rotary 5-line",
        "<img image='z\lxim\addons\media\images\diary\gunship.paa' width='367' />"
    ]
];

player createDiaryRecord["radioReportsc",
    ["Air Drop",
        "<img image='z\lxim\addons\media\images\diary\airdrop.paa' width='367' />"
    ]
];
};
// Add New Topic (medical notes)
if !(player diarySubjectExists "medguide") then {
    player createDiarySubject ["medguide","Medical Notes"];

player createDiaryRecord["medguide",
    ["Cardiac Arrest",
        "<img image='z\lxim\addons\media\images\diary\med_card.paa' width='367' />"
    ]
];
player createDiaryRecord["medguide",
    ["Bandages",
        "<img image='z\lxim\addons\media\images\diary\med_band.paa' width='367' />"
    ]
];
player createDiaryRecord["medguide",
    ["Wounds",
        "<img image='z\lxim\addons\media\images\diary\med_wounds.paa' width='367' />"
    ]
];
player createDiaryRecord["medguide",
    ["Blood",
        "<img image='z\lxim\addons\media\images\diary\med_blood.paa' width='367' />"
    ]
];
player createDiaryRecord["medguide",
    ["Drugs 1",
        "<img image='z\lxim\addons\media\images\diary\med_drug_1.paa' width='367' />"
    ]
];
player createDiaryRecord["medguide",
    ["Drugs 2",
        "<img image='z\lxim\addons\media\images\diary\med_drug_2.paa' width='367' />"
    ]
];
};
// Add New Topic (JFIRE notes)
if !(player diarySubjectExists "jfireguide") then {
    player createDiarySubject ["jfireguide","JFIRE Notes"];

player createDiaryRecord["jfireguide",
    ["LZ Formations",
        "<img image='z\lxim\addons\media\images\diary\lz_formation.paa' width='367' />"
    ]
];
player createDiaryRecord["jfireguide",
    ["LZ Landing Points",
        "<img image='z\lxim\addons\media\images\diary\lz_landing.paa' width='367' />"
    ]
];
player createDiaryRecord["jfireguide",
    ["LZ Landing Marking",
        "<img image='z\lxim\addons\media\images\diary\lz_marking.paa' width='367' />"
    ]
];
};

