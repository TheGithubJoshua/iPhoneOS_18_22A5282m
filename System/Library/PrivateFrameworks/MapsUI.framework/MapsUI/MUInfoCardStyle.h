@interface MUInfoCardStyle : NSObject

+ (id)tintColor;
+ (id)textColor;
+ (void)setTintColorProvider:(id /* block */)a0;
+ (id)secondaryTextColor;
+ (id)cardBackgroundColor;
+ (id)tokenBackgroundColor;
+ (long long)platterStyle;
+ (id)actionRowTintColor;
+ (id)attributionTintColor;
+ (id)buttonCellTextColor;
+ (long long)containerStyle;
+ (id)directionsButtonTintColor;
+ (BOOL)hasExternallyProvidedTintColor;
+ (id)imageTileBackgroundColor;
+ (id)labelForProminence:(long long)a0;
+ (id)preferredVerticalCardConfiguration;
+ (id)punchoutButtonPlatterColor;
+ (id)resolvedPrimaryColorForProposedColor:(id)a0;
+ (id)rowSelectedColor;
+ (id)rowUnselectedColor;
+ (void)setInfoCardContainerStyle:(long long)a0;
+ (id)verifiedLogoBackgroundColor;

@end
