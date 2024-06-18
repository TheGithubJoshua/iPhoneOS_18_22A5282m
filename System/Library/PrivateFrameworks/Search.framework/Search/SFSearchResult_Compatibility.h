@class NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras

@property (retain, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSString *compatibilityTitle;

- (void)setUniqueIdentifier:(id)a0;
- (id)copy;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;
- (void)writeTo:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)uniqueIdentifier;
- (BOOL)isQuickGlance;
- (void)setSimpleTitle:(id)a0;
- (id)section_header;
- (id)simpleTitle;

@end
