@class NSString;

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {
    id _private;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *namePrefix;
@property (copy) NSString *givenName;
@property (copy) NSString *middleName;
@property (copy) NSString *familyName;
@property (copy) NSString *nameSuffix;
@property (copy) NSString *nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation;

+ (id)_allProperties;
+ (id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(BOOL)a0;
+ (id)_allComponents;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)_isEmpty;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(BOOL)a0;
- (BOOL)isEqualToComponents:(id)a0;

@end
