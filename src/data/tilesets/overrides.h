const u16 gTilesetPalOverride_General02[] = INCBIN_U16("data/tilesets/primary/general/palettes/02_over.gbapal");
const u16 gTilesetPalOverride_General07[] = INCBIN_U16("data/tilesets/primary/general/palettes/07_over.gbapal");

const u16 gTilesetPalOverride_NewBark08[] = INCBIN_U16("data/tilesets/secondary/new_bark/palettes/08_over.gbapal");

const u16 gTilesetPalOverride_Violet08[] = INCBIN_U16("data/tilesets/secondary/violet/palettes/08_over.gbapal");
const u16 gTilesetPalOverride_Violet09[] = INCBIN_U16("data/tilesets/secondary/violet/palettes/09_over.gbapal");

const u16 gTilesetPalOverride_Azalea09[] = INCBIN_U16("data/tilesets/secondary/azalea/palettes/09_over.gbapal");

const u16 gTilesetPalOverride_Goldenrod08[] = INCBIN_U16("data/tilesets/secondary/goldenrod/palettes/08_over.gbapal");
const u16 gTilesetPalOverride_Goldenrod09[] = INCBIN_U16("data/tilesets/secondary/goldenrod/palettes/09_over.gbapal");
const u16 gTilesetPalOverride_Goldenrod10[] = INCBIN_U16("data/tilesets/secondary/goldenrod/palettes/10_over.gbapal");
const u16 gTilesetPalOverride_Goldenrod12[] = INCBIN_U16("data/tilesets/secondary/goldenrod/palettes/12_over.gbapal");

const u16 gTilesetPalOverride_DeptStore09NoWin[] = INCBIN_U16("data/tilesets/secondary/department_store/palettes/09_over_nowin.gbapal");
const u16 gTilesetPalOverride_DeptStore09Win[] = INCBIN_U16("data/tilesets/secondary/department_store/palettes/09_over_win.gbapal");

const u16 gTilesetPalOverride_EcruteakCity09[] = INCBIN_U16("data/tilesets/secondary/ecruteakcity/palettes/09_over.gbapal");

const u16 gTilesetPalOverride_Olivine12[] = INCBIN_U16("data/tilesets/secondary/olivinecity/palettes/12_over.gbapal");
const u16 gTilesetPalOverride_Olivine10[] = INCBIN_U16("data/tilesets/secondary/olivinecity/palettes/10_over.gbapal");

const u16 gTilesetPalOverride_VermilionCity11[] = INCBIN_U16("data/tilesets/secondary/vermilioncity/palettes/11_over.gbapal");

const u16 gTilesetPalOverride_IndigoPlateau10[] = INCBIN_U16("data/tilesets/secondary/indigoplateau/palettes/10_over.gbapal");

const u16 gTilesetPalOverride_Saffron08[] = INCBIN_U16("data/tilesets/secondary/saffroncity/palettes/08_over.gbapal");
const u16 gTilesetPalOverride_Saffron11[] = INCBIN_U16("data/tilesets/secondary/saffroncity/palettes/11_over.gbapal");
const u16 gTilesetPalOverride_Saffron12[] = INCBIN_U16("data/tilesets/secondary/saffroncity/palettes/12_over.gbapal");

const u16 gTilesetPalOverride_Pallet08[] = INCBIN_U16("data/tilesets/secondary/pallettown/palettes/08_over.gbapal");

const u16 gTilesetPalOverride_Viridian12[] = INCBIN_U16("data/tilesets/secondary/viridiancity/palettes/12_over.gbapal");

const u16 gTilesetPalOverride_Fuchsia08[] = INCBIN_U16("data/tilesets/secondary/fuchsiacity/palettes/08_over.gbapal");

const u16 gTilesetPalOverride_Pewter08[] = INCBIN_U16("data/tilesets/secondary/pewtercity/palettes/08_over.gbapal");
const u16 gTilesetPalOverride_Pewter11[] = INCBIN_U16("data/tilesets/secondary/pewtercity/palettes/11_over.gbapal");

const u16 gTilesetPalOverride_Lavender11[] = INCBIN_U16("data/tilesets/secondary/lavendertown/palettes/11_over.gbapal");

const u16 gTilesetPalOverride_CeladonMansion07[] = INCBIN_U16("data/tilesets/secondary/celadonmansion/palettes/07_over.gbapal");

const u16 gTilesetPalOverride_DragonsDen_Shrine08[] = INCBIN_U16("data/tilesets/secondary/dragonsden_shrine/palettes/08_over.gbapal");
const u16 gTilesetPalOverride_DragonsDen_Shrine09[] = INCBIN_U16("data/tilesets/secondary/dragonsden_shrine/palettes/09_over.gbapal");


#define OVERRIDES_END { .slot = 0xFF, }

const struct PaletteOverride gTilesetPalOverrides_General[] =
{
    {
        .slot = 2,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_General02,
    },        
    {
        .slot = 7,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_General07,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_NewBark[] =
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_NewBark08,
    },        
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_NewBark08,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_Violet[] =
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Violet08,
    },        
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Violet09,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_Azalea[] =
{
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Azalea09,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_Goldenrod[] =
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Goldenrod08,
    },        
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Goldenrod09,
    },        
    {
        .slot = 10,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Goldenrod10,
    },        
    {
        .slot = 12,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Goldenrod12,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_DepartmentStore[] =
{
    {
        .slot = 9,
        .startHour = 0,
        .endHour = 24, // 24 hours a day, bby
        .palette = gTilesetPalOverride_DeptStore09NoWin,
    },        
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_DeptStore09Win,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_EcruteakCity[] =
{
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_EcruteakCity09,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_OlivineCity[] =
{
    {
        .slot = 12,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Olivine12,
    },        
    {
        .slot = 10,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Olivine10,
    },        
    OVERRIDES_END
};
	
const struct PaletteOverride gTilesetPalOverrides_VermilionCity[] =
{
    {
        .slot = 11,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_VermilionCity11,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_IndigoPlateau[] =
{
    {
        .slot = 10,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_IndigoPlateau10,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_SaffronCity[] =
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Saffron08,
    },        
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Goldenrod09,
    },        
    {
        .slot = 11,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Saffron11,
    },        
    {
        .slot = 12,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Saffron12,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_CeladonCity[] =
{
    {
        .slot = 10,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Goldenrod08,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_PalletTown[] =
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Pallet08,
    },        
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Pallet08,
    },        
    {
        .slot = 10,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Pallet08,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_ViridianCity[] =
{
    {
        .slot = 12,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Viridian12,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_FuchsiaCity[] =
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Fuchsia08,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_PewterCity[] =
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Pewter08,
    },        
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Pewter08,
    },        
    {
        .slot = 11,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Pewter11,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_LavenderTown[] =
{
    {
        .slot = 11,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Lavender11,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_CeladonMansion[] =
{
    {
        .slot = 7,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_CeladonMansion07,
    },        
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_DragonsDen_Shrine[] =
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_DragonsDen_Shrine08,
    },        
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_DragonsDen_Shrine09,
    },        
    OVERRIDES_END
};
