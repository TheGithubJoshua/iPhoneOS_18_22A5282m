@class NSString, NSUUID, NSObject;
@protocol OS_os_transaction;

@interface MSVXPCTransaction : NSObject {
    NSUUID *_identifier;
    NSObject<OS_os_transaction> *_transaction;
    long long _transactionCount;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)activeTransactions;

- (void)beginTransaction;
- (void)endTransaction;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (void)endTransactionOnDate:(id)a0;

@end
