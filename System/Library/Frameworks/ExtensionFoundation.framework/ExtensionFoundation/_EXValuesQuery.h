@class NSString, NSPredicate;

@interface _EXValuesQuery : _EXQuery {
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSPredicate *_predicate;
    struct { unsigned int val[8]; } _hostAuditToken;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)extensionPointIdentifier;
- (struct { unsigned int x0[8]; })hostAuditToken;
- (id)init;
- (void)setPlatform:(unsigned int)a0;
- (void)setPredicate:(id)a0;
- (unsigned int)platform;
- (id)extensionPointRecords;
- (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)predicate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToQuery:(id)a0;
- (id)initWithExtensionPointIdentifier:(id)a0 predicate:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (void)setExtensionPointIdentifier:(id)a0;
- (BOOL)matchesRecord:(id)a0;

@end
