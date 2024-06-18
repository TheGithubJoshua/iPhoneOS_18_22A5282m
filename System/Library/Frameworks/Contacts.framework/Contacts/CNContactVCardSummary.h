@class CNContactFormatter, NSString, NSArray;

@interface CNContactVCardSummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) CNContactFormatter *defaultNameFormatter;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *descriptiveLabel;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned long long contactCount;
@property (readonly, copy, nonatomic) NSArray *avatarContacts;

+ (id)readingOptionsWithContactLimit:(unsigned long long)a0;
+ (id)namesForContact:(id)a0;
+ (id)makeFormatter;
+ (id)localizedStringWithName:(id)a0 andThisManyOthers:(unsigned long long)a1;
+ (id)localizedStringWithName:(id)a0 andOtherName:(id)a1;
+ (BOOL)isAvatarContacts:(id)a0 equalTo:(id)a1;
+ (id)nameForContact:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 contactCount:(unsigned long long)a2 avatarContacts:(id)a3;

@end