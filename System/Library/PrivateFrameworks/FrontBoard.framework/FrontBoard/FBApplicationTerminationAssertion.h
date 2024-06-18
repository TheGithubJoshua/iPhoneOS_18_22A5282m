@class NSString;

@interface FBApplicationTerminationAssertion : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long serialNumber;
@property (retain, nonatomic) id plugInHoldToken;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
