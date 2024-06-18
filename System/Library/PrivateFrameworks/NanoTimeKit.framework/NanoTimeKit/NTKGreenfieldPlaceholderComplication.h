@class NSNumber, NSString, NTKComplication;

@interface NTKGreenfieldPlaceholderComplication : NTKComplication

@property (readonly, nonatomic) NTKComplication *complication;
@property (readonly, nonatomic) NSNumber *appStoreItemId;
@property (readonly, nonatomic) NSString *appName;

+ (BOOL)supportsSecureCoding;
+ (id)placeholderWithComplication:(id)a0;
+ (id)placeholderWithComplication:(id)a0 appStoreItemId:(id)a1 appName:(id)a2;

- (id)initWithCoder:(id)a0;
- (id)appIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;

@end