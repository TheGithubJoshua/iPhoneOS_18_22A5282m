@class NSString;

@interface IKUser : NSObject

@property (nonatomic) unsigned long long userID;
@property (copy, nonatomic) NSString *username;
@property (nonatomic, getter=isSubscribed) BOOL subscribed;

- (id)init;
- (id)description;
- (void)dealloc;

@end
