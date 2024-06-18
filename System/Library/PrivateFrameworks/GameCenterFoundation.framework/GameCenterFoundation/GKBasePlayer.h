@class NSString;

@interface GKBasePlayer : NSObject

@property (readonly, retain, nonatomic) NSString *playerID;
@property (readonly, nonatomic) NSString *displayName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (id)playerID;

@end
