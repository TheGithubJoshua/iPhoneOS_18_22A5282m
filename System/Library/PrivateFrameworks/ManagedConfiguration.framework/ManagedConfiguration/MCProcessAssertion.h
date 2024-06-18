@class NSString, NSObject;
@protocol OS_os_transaction;

@interface MCProcessAssertion : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSString *reason;

- (id)initWithReason:(id)a0;
- (void)_releaseAssertion;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_createAssertion;

@end
