@class INCodableDescription, NSString, INCodableAttribute;

@interface INCodableAttributeDialog : NSObject <NSSecureCoding, NSCopying, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setCodableAttribute:) INCodableAttribute *_codableAttribute;
@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSString *formatStringID;
@property (nonatomic, getter=isDefaultDialog) BOOL defaultDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)dictionaryRepresentation;
- (id)localizedDialogWithIntent:(id)a0 tokens:(id)a1 forLanguage:(id)a2;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)localizedDialogWithIntent:(id)a0 tokens:(id)a1 localizer:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDialogWithIntent:(id)a0 tokens:(id)a1;
- (id)__INCodableDescriptionFormatStringIDKey;

@end
