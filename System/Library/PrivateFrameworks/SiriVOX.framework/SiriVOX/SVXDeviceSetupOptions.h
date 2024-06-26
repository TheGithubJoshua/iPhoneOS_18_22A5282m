@class NSString;

@interface SVXDeviceSetupOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) long long hasActiveAccount;
@property (readonly, nonatomic) long long isNewsRestricted;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithCoder:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLanguageCode:(id)a0 gender:(long long)a1 hasActiveAccount:(long long)a2 isNewsRestricted:(long long)a3;

@end
