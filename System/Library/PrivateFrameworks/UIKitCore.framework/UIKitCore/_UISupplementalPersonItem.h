@class NSString;

@interface _UISupplementalPersonItem : _UISupplementalItem

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *phoneticOrganizationName;
@property (copy, nonatomic) NSString *nickname;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (id)initWithContact:(id)a0;
- (id)init;
- (unsigned long long)_identifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithContact:(id)a0 icon:(id)a1;
- (id)initWithPersonNameComponents:(id)a0;
- (id)initWithPersonNameComponents:(id)a0 icon:(id)a1;
- (id)initWithTISupplementalPersonItem:(id)a0 icon:(id)a1;

@end
