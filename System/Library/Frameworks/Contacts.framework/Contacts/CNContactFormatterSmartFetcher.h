@class NSSet, NSDictionary;

@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {
    NSSet *_mandatoryNameProperties;
    NSDictionary *_fallBackNamePropertyByNameKey;
}

@property (nonatomic) BOOL ignoresNickname;
@property (nonatomic) BOOL ignoresOrganization;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (id)_cn_optionalKeys;
- (id)_cn_ignorableKeys;
- (id)init;
- (id)_cn_requiredKeys;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
