@class MKPowerAssertion, NSObject;
@protocol OS_os_transaction;

@interface MKAPIServerDaemon : MKAPIServer {
    MKPowerAssertion *_power;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;

@end
