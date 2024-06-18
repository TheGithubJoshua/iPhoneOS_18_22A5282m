@class NSString, NSArray;

@interface HUAccessorySetupFlow : NSObject

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSArray *homeKitObjects;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(id)a0 homeKitObjects:(id)a1;

@end
