@class NSString;

@interface PKAssertion : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationLock;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) BOOL invalidateWhenBackgrounded;
@property (copy, nonatomic) id /* block */ invalidationHandler;

+ (void)acquireAssertionOfType:(unsigned long long)a0 withReason:(id)a1 completion:(id /* block */)a2;
+ (void)isAssertionValid:(id)a0 completion:(id /* block */)a1;
+ (void)preheatConnection;

- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1 reason:(id)a2;
- (void)markAsInvalidatedAndNotify;

@end
