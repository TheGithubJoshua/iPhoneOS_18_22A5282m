@interface APSMultiUserMode : NSObject

@property (readonly, nonatomic) BOOL isMultiUser;
@property (readonly, nonatomic) BOOL isLoggedInUser;

+ (BOOL)_getIsCurrentlyLoggedIn;
+ (id)sharedInstance;
+ (BOOL)_getMultiUserMode;

- (id)initWithIsMultiUserMode:(BOOL)a0 loggedInUser:(BOOL)a1;
- (BOOL)isMultiAndLoggedIn;

@end
