class XtdGearModels {
      class CfgWeapons {
            class GFPGP_2_ghost_Opsuni {
                  options[] = { "camo", "tag", "vet", "flag"};
                  label = "Uniform";
                  class camo {
                        alwaysSelectable = 1;
                        values[] = {"khk","mc","m81", "mca", "mct","rgr"};
                        label = "Camo";
                        class mct {
                              label = "MCT";
                              image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                        };
                        class mc {
                              label = "MC";
                              image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                        };
                        class khk {
                              label = "KHK";
                              image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                        };
                        class m81 {
                              label = "M81";
                              image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                        };
                        class mca {
                              label = "MCAR";
                              image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                        };
                        class rgr {
                              label = "RGR";
                              image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                        };

                  };
                  class flag {
                        alwaysSelectable = 1;
                        values[] = { "no","us","uk","ca"};
                        label = "Country";
                        class no {
                              label = "NO";
                        };
                        class us {
                              label = "US";
                        };
                        class uk {
                              label = "UK";
                        };
                        class ca {
                              label = "CA";
                        };
                  };
                  class vet {
                        alwaysSelectable = 1;
                        values[] = { "no","us","uk","ca"};
                        label = "Are you a Vet";
                        class no {
                              label = "NO";
                        };
                        class us {
                              label = "US";
                        };
                        class uk {
                              label = "UK";
                        };
                        class ca {
                              label = "CA";
                        };
                  };
                  class tag {
                        alwaysSelectable = 1;
                        values[] = { "none","eod","jfire","med"};
                        label = "TAG";
                        class none {
                              label = "None";
                        };
                        class eod {
                              label = "EOD";
                        };
                        class jfire {
                              label = "JFIRE";
                        };
                        class med {
                              label = "MED";
                        };
                  };
            };
      };
};

class XtdGearInfos {
      class CfgWeapons {
            class ghost_uniform_Uni_Crye_1_rgr_med_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "rgr";
                  tag = "med";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_mc_med_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mc";
                  tag = "med";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_mct_med_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mct";
                  tag = "med";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_mca_med_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mca";
                  tag = "med";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_m81_med_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "m81";
                  tag = "med";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_khk_med_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "khk";
                  tag = "med";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_rgr_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "rgr";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mc_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mc";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mct_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mct";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mca_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mca";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_m81_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "m81";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_khk_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "khk";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mc_jfire_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mc";
                  tag = "jfire";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_rgr_jfire_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "rgr";
                  tag = "jfire";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_mct_jfire_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mct";
                  tag = "jfire";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_mca_jfire_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mca";
                  tag = "jfire";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_m81_jfire_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "m81";
                  tag = "jfire";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_khk_jfire_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "khk";
                  tag = "jfire";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_rgr_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "rgr";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mc_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mc";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mct_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mct";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mca_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mca";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_m81_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "m81";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_khk_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "khk";
                  tag = "jfire";
                  vet = "no";
            };

            class ghost_uniform_Uni_Crye_1_mc_eod_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mc";
                  tag = "eod";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_rgr_eod_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "rgr";
                  tag = "eod";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_mct_eod_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mct";
                  tag = "eod";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_mca_eod_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mca";
                  tag = "eod";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_m81_eod_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "m81";
                  tag = "eod";
                  vet = "us";
            };

            class ghost_uniform_Uni_Crye_1_khk_eod_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "khk";
                  tag = "eod";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_rgr_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "rgr";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mc_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mc";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mct_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mct";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mca_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mca";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_m81_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "m81";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_khk_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "khk";
                  tag = "eod";
                  vet = "no";
            };

            class ghost_uniform_Uni_Crye_1_rgr_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "rgr";
                  tag = "none";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_rgr_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "rgr";
                  tag = "none";
                  vet = "no";
            };

            class ghost_uniform_Uni_Crye_1_mc_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mc";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mc_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mc";
                  tag = "none";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_mct_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mct";
                  tag = "none";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_mct_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mct";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mca_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mca";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_mca_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "mca";
                  tag = "none";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_m81_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "m81";
                  tag = "none";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_m81_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "m81";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_khk_v_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "khk";
                  tag = "none";
                  vet = "us";
            };
            class ghost_uniform_Uni_Crye_1_khk_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "us";
                  camo = "khk";
                  tag = "none";
                  vet = "no";
            };

            class ghost_uniform_Uni_Crye_1_uk_v_rgr_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "rgr";
                  tag = "med";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mc_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mc";
                  tag = "med";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mct_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mct";
                  tag = "med";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mca_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mca";
                  tag = "med";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_m81_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "m81";
                  tag = "med";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_khk_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "khk";
                  tag = "med";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_rgr_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "rgr";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mc_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mc";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mct_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mct";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mca_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mca";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_m81_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "m81";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_khk_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "khk";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mc_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mc";
                  tag = "jfire";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_rgr_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "rgr";
                  tag = "jfire";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mct_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mct";
                  tag = "jfire";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mca_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mca";
                  tag = "jfire";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_m81_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "m81";
                  tag = "jfire";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_khk_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "khk";
                  tag = "jfire";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_rgr_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "rgr";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mc_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mc";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mct_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mct";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mca_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mca";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_m81_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "m81";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_khk_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "khk";
                  tag = "jfire";
                  vet = "no";
            };

            class ghost_uniform_Uni_Crye_1_uk_v_mc_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mc";
                  tag = "eod";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_rgr_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "rgr";
                  tag = "eod";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mct_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mct";
                  tag = "eod";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mca_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mca";
                  tag = "eod";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_m81_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "m81";
                  tag = "eod";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_khk_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "khk";
                  tag = "eod";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_rgr_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "rgr";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mc_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mc";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mct_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mct";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mca_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mca";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_m81_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "m81";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_khk_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "khk";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_rgr_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "rgr";
                  tag = "none";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_rgr_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "rgr";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mc_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mc";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mc_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mc";
                  tag = "none";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mct_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mct";
                  tag = "none";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_mct_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mct";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_mca_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mca";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_mca_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "mca";
                  tag = "none";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_m81_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "m81";
                  tag = "none";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_m81_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "m81";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_uk_v_khk_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "khk";
                  tag = "none";
                  vet = "uk";
            };
            class ghost_uniform_Uni_Crye_1_uk_khk_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "uk";
                  camo = "khk";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_rgr_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "rgr";
                  tag = "med";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mc_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mc";
                  tag = "med";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mct_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mct";
                  tag = "med";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mca_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mca";
                  tag = "med";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_m81_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "m81";
                  tag = "med";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_khk_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "khk";
                  tag = "med";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_rgr_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "rgr";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mc_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mc";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mct_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mct";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mca_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mca";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_m81_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "m81";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_khk_med_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "khk";
                  tag = "med";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mc_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mc";
                  tag = "jfire";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_rgr_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "rgr";
                  tag = "jfire";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mct_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mct";
                  tag = "jfire";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mca_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mca";
                  tag = "jfire";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_m81_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "m81";
                  tag = "jfire";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_khk_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "khk";
                  tag = "jfire";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_rgr_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "rgr";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mc_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mc";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mct_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mct";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mca_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mca";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_m81_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "m81";
                  tag = "jfire";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_khk_jfire_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "khk";
                  tag = "jfire";
                  vet = "no";
            };

            class ghost_uniform_Uni_Crye_1_ca_v_mc_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mc";
                  tag = "eod";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_rgr_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "rgr";
                  tag = "eod";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mct_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mct";
                  tag = "eod";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mca_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mca";
                  tag = "eod";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_m81_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "m81";
                  tag = "eod";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_khk_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "khk";
                  tag = "eod";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_rgr_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "rgr";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mc_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mc";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mct_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mct";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mca_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mca";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_m81_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "m81";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_khk_eod_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "khk";
                  tag = "eod";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_rgr_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "rgr";
                  tag = "none";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_rgr_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "rgr";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mc_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mc";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mc_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mc";
                  tag = "none";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mct_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mct";
                  tag = "none";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_mct_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mct";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_mca_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mca";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_mca_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "mca";
                  tag = "none";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_m81_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "m81";
                  tag = "none";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_m81_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "m81";
                  tag = "none";
                  vet = "no";
            };
            class ghost_uniform_Uni_Crye_1_ca_v_khk_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "khk";
                  tag = "none";
                  vet = "ca";
            };
            class ghost_uniform_Uni_Crye_1_ca_khk_U {
                  model = "gfpgp_2_ghost_opsuni";
                  flag = "ca";
                  camo = "khk";
                  tag = "none";
                  vet = "no";
            };
      };
};
