@class NSArray, NSString;

@interface PREditorColorPalette : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasGeneratedPickerColors;
@property (readonly) BOOL includesObjectsOfTypePRPosterColor;
@property (readonly) unsigned long long paletteType;
@property (retain) NSArray *pickerColors;
@property (readonly, copy) NSString *localizedName;
@property (readonly) NSArray *colors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)additionalColorsForExtendedPalette;
+ (id)standardPalette;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)standardPaletteColors;
+ (id)extendedPalette;

- (id)initWithCoder:(id)a0;
- (BOOL)shouldShowColorWell;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithColors:(id)a0 localizedName:(id)a1 showsColorWell:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPickerColors:(id)a0 localizedName:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)generatePickerColorsIfNeededForContext:(unsigned long long)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithPickerColors:(id)a0 colors:(id)a1 localizedName:(id)a2 paletteType:(unsigned long long)a3 showsColorWell:(BOOL)a4;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
