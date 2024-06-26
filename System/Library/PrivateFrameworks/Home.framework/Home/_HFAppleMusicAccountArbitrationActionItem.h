@class NSString, NSSet, NSDictionary, NAFuture;

@interface _HFAppleMusicAccountArbitrationActionItem : NSObject

@property (retain, nonatomic) NSString *actionItemDescription;
@property (copy, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NAFuture *future;

+ (id)loginActionItemForAccessories:(id)a0 account:(id)a1 contextGenerator:(id /* block */)a2;
+ (id)logoutActionItemForAccessories:(id)a0 desiredAccount:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
