@class NSString;

@interface PDSUser : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) char userType;

+ (id)userWithDSID:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToUser:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithUserID:(id)a0 userType:(char)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
