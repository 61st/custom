class rhs_acvch
{
    options[] = { "camo", "goggles", "weather" };
    label="ACVC-H";
    class camo
    {
        values[] = { "GRN", "TAN" };
        alwaysSelectable=1;
    };
    class goggles
    {
        label = "Goggles";
        values[] = { "none", "ESS" };
        alwaysSelectable=1;
        class none
        {
            label = "ESS";
        };
    };
    class weather
    {
        label = "Weathering";
        values[] = { "No", "Yes" };
        alwaysSelectable=1;
    };
};
