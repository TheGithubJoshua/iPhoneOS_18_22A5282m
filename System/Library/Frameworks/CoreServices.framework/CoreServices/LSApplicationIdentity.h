@class LSApplicationRecord, NSString, _LSEmbeddedApplicationIdentityBookmark;

@interface LSApplicationIdentity : NSObject <NSSecureCoding, NSCopying> {
    _LSEmbeddedApplicationIdentityBookmark *_identityBookmark;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) LSApplicationRecord *weakRecord;
@property (readonly, nonatomic) NSString *identityString;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) unsigned long long personaType;

+ (unsigned int)classVersion;
+ (Class)currentIdentityClass;
+ (id)enumeratorWithOptions:(unsigned long long)a0;

- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)needsMigration;
- (id)findApplicationRecordWithError:(id *)a0;
- (id)initForRecord:(id)a0 personaWithAttributes:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 allowPlaceholder:(BOOL)a1 personaUniqueString:(id)a2 error:(id *)a3;
- (id)initWithIdentityBookmark:(id)a0 identityString:(id)a1 personaUniqueString:(id)a2 personaType:(unsigned long long)a3;
- (id)initWithIdentityString:(id)a0;
- (id)initWithIdentityString:(id)a0 parsedIdentityStringDictionary:(id)a1 error:(id *)a2;

@end
