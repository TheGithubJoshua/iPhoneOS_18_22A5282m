@class NSString, NSDictionary;

@interface NARGlance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *glanceID;
@property (copy, nonatomic) NSDictionary *localizedDisplayNameMap;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;

@end
