@class _SFPBImage, NSString, NSData, _SFPBText;

@interface _SFPBFormattedText : PBCodable <_SFPBFormattedText, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBText *text;
@property (retain, nonatomic) _SFPBImage *glyph;
@property (nonatomic) BOOL isEmphasized;
@property (nonatomic) BOOL isBold;
@property (nonatomic) int textColor;
@property (nonatomic) int encapsulationStyle;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;

@end
