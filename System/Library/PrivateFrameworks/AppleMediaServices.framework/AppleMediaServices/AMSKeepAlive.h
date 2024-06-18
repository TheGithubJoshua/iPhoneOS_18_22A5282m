@class NSString, AMSRBSKeepAlive, NSObject;
@protocol OS_os_transaction;

@interface AMSKeepAlive : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
    AMSRBSKeepAlive *_rbsKeepAlive;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long style;

+ (id)rbs_keepAliveWithName:(id)a0;
+ (id)keepAliveWithName:(id)a0;
+ (BOOL)_isRBSAssertionsEnabled;
+ (id)rbs_keepAliveWithName:(id)a0 style:(long long)a1;
+ (void)_handleAssertionExpiration;
+ (void)rbs_keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (void)_accessAssertionCache:(id /* block */)a0;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (id)keepAliveWithFormat:(id)a0;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;

- (void)_takeProcessAssertion;
- (void)_takeOSTransaction;
- (void)rbs_invalidate;
- (id)initRBSWithName:(id)a0 style:(long long)a1;
- (void)_startLogTimer;
- (id)initRBSWithName:(id)a0;
- (id)initWithName:(id)a0 style:(long long)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_removeOSTransaction;
- (void)dealloc;
- (id)_cacheKey;
- (void)_removeProcessAssertion;
- (id)initWithName:(id)a0;
- (id)_assertionName;

@end
