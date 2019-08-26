#ifndef GUARD_PHONE_CONTACT_H
#define GUARD_PHONE_CONTACT_H

struct PhoneContact;
typedef const u8 *(*PhoneContactSelectMessage)(const struct PhoneContact *phoneContact, bool8 isCallingPlayer);
typedef bool8 (*PhoneContactAcceptRematchCB)(s8 dayOfWeek, s8 hour);

struct PhoneContact
{
    const u8 *customDisplayName;
    const u8 *phoneScript;
    PhoneContactAcceptRematchCB canAcceptRematch;
    u8 mapNum;
    u8 mapGroup;
    u16 registeredFlag;
    u8 rematchTrainerId;
    u8 availability;
    u8 isPermanent;
};

enum {
    PHONE_CONTACT_MOM,
    PHONE_CONTACT_ELM,
    PHONE_CONTACT_ROSE,
    PHONE_CONTACT_ANDRES,
    PHONE_CONTACT_DUSTY,
    PHONE_CONTACT_LOLA,
    PHONE_CONTACT_RICKY,
    PHONE_CONTACT_LILA_AND_ROY,
    PHONE_CONTACT_CRISTIN,
    PHONE_CONTACT_BROOKE,
    PHONE_CONTACT_WILTON,
    PHONE_CONTACT_VALERIE,
    PHONE_CONTACT_CINDY,
    PHONE_CONTACT_THALIA,
    PHONE_CONTACT_JESSICA,
    PHONE_CONTACT_WINSTON,
    PHONE_CONTACT_STEVE,
    PHONE_CONTACT_TONY,
    PHONE_CONTACT_NOB,
    PHONE_CONTACT_KOJI,
    PHONE_CONTACT_FERNANDO,
    PHONE_CONTACT_DALTON,
    PHONE_CONTACT_BERNIE,
    PHONE_CONTACT_ETHAN,
    PHONE_CONTACT_JOHN_AND_JAY,
    PHONE_CONTACT_JEFFREY,
    PHONE_CONTACT_CAMERON,
    PHONE_CONTACT_JACKI,
    PHONE_CONTACT_WALTER,
    PHONE_CONTACT_KAREN,
    PHONE_CONTACT_JERRY,
    PHONE_CONTACT_ANNA_AND_MEG,
    PHONE_CONTACT_ISABEL,
    PHONE_CONTACT_MIGUEL,
    PHONE_CONTACT_TIMOTHY,
    PHONE_CONTACT_SHELBY,
    PHONE_CONTACT_CALVIN,
    PHONE_CONTACT_ELLIOT,
    PHONE_CONTACT_ISAIAH,
    PHONE_CONTACT_MARIA,
    PHONE_CONTACT_ABIGAIL,
    PHONE_CONTACT_DYLAN,
    PHONE_CONTACT_KATELYN,
    PHONE_CONTACT_BENJAMIN,
    PHONE_CONTACT_PABLO,
    PHONE_CONTACT_NICOLAS,
    PHONE_CONTACT_ROBERT,
    PHONE_CONTACT_LAO,
    PHONE_CONTACT_CYNDY,
    PHONE_CONTACT_MADELINE,
    PHONE_CONTACT_JENNY,
    PHONE_CONTACT_DIANA,
    PHONE_CONTACT_AMY_AND_LIV,
    PHONE_CONTACT_ERNEST,
    PHONE_CONTACT_CORY,
    PHONE_CONTACT_EDWIN,
    PHONE_CONTACT_LYDIA,
    PHONE_CONTACT_ISAAC,
    PHONE_CONTACT_GABRIELLE,
    PHONE_CONTACT_CATHERINE,
    PHONE_CONTACT_JACKSON,
    PHONE_CONTACT_HALEY,
    PHONE_CONTACT_JAMES,
    PHONE_CONTACT_TRENT,
    PHONE_CONTACT_SAWYER,
    PHONE_CONTACT_KIRA_AND_DAN,
    PHONE_CONTACT_WALLY,
    PHONE_CONTACT_ROXANNE,
    PHONE_CONTACT_BRAWLY,
    PHONE_CONTACT_WATTSON,
    PHONE_CONTACT_FLANNERY,
    PHONE_CONTACT_NORMAN,
    PHONE_CONTACT_WINONA,
    PHONE_CONTACT_TATE_AND_LIZA,
    PHONE_CONTACT_JUAN,
    PHONE_CONTACT_SIDNEY,
    PHONE_CONTACT_PHOEBE,
    PHONE_CONTACT_GLACIA,
    PHONE_CONTACT_DRAKE,
    PHONE_CONTACT_WALLACE,
    PHONE_CONTACT_COUNT,
};

enum
{
    PHONE_AVAILABILITY_ALWAYS,
};

extern const struct PhoneContact gPhoneContacts[PHONE_CONTACT_COUNT];

bool8 IsPhoneContactAvailable(const struct PhoneContact *phoneContact, s8 dayOfWeek, s8 hour);
const u8 *BuildPhoneContactDisplayName(const struct PhoneContact *phoneContact, u8 *dest);
const u8 *BuildPhoneContactDisplayNameForCall(const struct PhoneContact *phoneContact, u8 *dest);

#endif //GUARD_PHONE_CONTACT_H
