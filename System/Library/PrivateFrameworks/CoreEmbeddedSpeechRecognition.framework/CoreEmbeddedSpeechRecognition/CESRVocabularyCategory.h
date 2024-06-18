@class NSString, NSDictionary;

@interface CESRVocabularyCategory : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *templateName;
@property (readonly, copy, nonatomic) NSString *tagName;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTemplateName:(id)a0 tagName:(id)a1;

@end
