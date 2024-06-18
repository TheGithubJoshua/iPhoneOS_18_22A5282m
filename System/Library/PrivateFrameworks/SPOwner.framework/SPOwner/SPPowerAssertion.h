@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SPPowerAssertion : NSObject

@property (copy, nonatomic) NSString *reason;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned int powerAssertionId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)drop;
- (void)hold;
- (void).cxx_destruct;
- (id)powerAssertionOption;
- (void)dealloc;
- (void)_drop;
- (id)initWithReason:(id)a0 type:(unsigned long long)a1 timeout:(double)a2;
- (id)assertionName;
- (id)assertionType;

@end
