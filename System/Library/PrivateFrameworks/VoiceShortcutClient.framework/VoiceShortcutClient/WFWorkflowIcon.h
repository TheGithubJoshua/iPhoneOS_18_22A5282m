@class NSData, WFColor, WFIcon;

@interface WFWorkflowIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long backgroundColorValue;
@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly, copy, nonatomic) NSData *customImageData;
@property (readonly, nonatomic) WFColor *backgroundColor;
@property (readonly, nonatomic) WFIcon *icon;

+ (unsigned short)defaultGlyphCharacter;
+ (unsigned long long)randomPaletteColor;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBackgroundColorValue:(long long)a0 glyphCharacter:(unsigned short)a1 customImageData:(id)a2;
- (id)initWithPaletteColor:(unsigned long long)a0 glyphCharacter:(unsigned short)a1 customImageData:(id)a2;

@end
