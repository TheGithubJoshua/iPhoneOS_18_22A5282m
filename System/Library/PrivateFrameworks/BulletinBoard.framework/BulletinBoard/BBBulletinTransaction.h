@class NSString;

@interface BBBulletinTransaction : NSObject

@property (readonly, copy, nonatomic) NSString *bulletinID;
@property (readonly, nonatomic) unsigned long long transactionID;

+ (id)transactionWithBulletinID:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)incrementTransactionID;
- (id)description;
- (id)initWithBulletinID:(id)a0;

@end
