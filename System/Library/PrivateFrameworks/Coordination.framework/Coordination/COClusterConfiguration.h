@class NSString, COClusterRealm;

@interface COClusterConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *prefix;
@property (readonly, nonatomic) unsigned long long requiredServices;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) COClusterRealm *realm;

+ (id)_prefixFromDomain:(id)a0;
+ (BOOL)_validateServices:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)configurationWithDomain:(id)a0 requiredServices:(unsigned long long)a1 options:(unsigned long long)a2 realm:(id)a3;
+ (id)domainPermittedCharacterSet;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initWithPrefix:(id)a0 requiredServices:(unsigned long long)a1 options:(unsigned long long)a2 realm:(id)a3;
- (BOOL)isEqualToClusterConfiguration:(id)a0;

@end
