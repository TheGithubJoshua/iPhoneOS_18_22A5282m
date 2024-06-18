@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileProtection;

+ (id)completeUnlessOpen;
+ (id)completeUntilFirstUserAuthentication;
+ (id)none;
+ (id)complete;

- (id)initWithCoder:(id)a0;
- (BOOL)indicatesProtection;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtection:(id)a0;

@end
