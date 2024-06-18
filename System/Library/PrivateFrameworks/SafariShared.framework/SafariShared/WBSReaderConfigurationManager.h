@class NSDictionary, NSMutableDictionary, WBSReaderFontManager;

@interface WBSReaderConfigurationManager : NSObject {
    long long _textZoomIndex;
    long long _theme;
    long long _darkModeTheme;
    NSMutableDictionary *_fontFamilyNameForLanguageTag;
    WBSReaderFontManager *_fontManager;
    BOOL _prefersLargerDefaultFontSize;
}

@property (readonly, nonatomic) NSDictionary *configurationToSave;
@property (readonly, nonatomic) NSDictionary *configurationToSendToWebPage;
@property (nonatomic) BOOL javaScriptEnabled;
@property (nonatomic) BOOL darkModeEnabled;
@property (nonatomic) BOOL isOLEDDisplay;
@property (readonly, nonatomic) BOOL canMakeTextBigger;
@property (readonly, nonatomic) BOOL canMakeTextSmaller;
@property (readonly, nonatomic) BOOL resettingTextSizeWouldHaveEffect;

- (void)_migrateToVersion5IfNecessary;
- (void)makeTextSmaller;
- (void)makeTextBigger;
- (void)setFont:(id)a0 forLanguageTag:(id)a1;
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)a0 fontManager:(id)a1;
- (long long)_defaultTextZoomIndex;
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)a0 fontManager:(id)a1 prefersLargerDefaultFontSize:(BOOL)a2;
- (void).cxx_destruct;
- (long long)themeForAppearance:(long long)a0;
- (void)setTheme:(long long)a0 forAppearance:(long long)a1;
- (void)resetTextSize;
- (long long)_defaultThemeForAppearance:(long long)a0;
- (id)fontForLanguageTag:(id)a0;
- (long long)_effectiveTextZoomIndex;

@end
