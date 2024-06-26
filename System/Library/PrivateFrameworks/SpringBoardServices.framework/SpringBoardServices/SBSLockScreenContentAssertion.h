@class NSString, SBSLockScreenContentAction;

@interface SBSLockScreenContentAssertion : NSObject

@property (retain, nonatomic) NSString *slot;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id configurationObject;
@property (retain, nonatomic) SBSLockScreenContentAction *action;
@property (copy, nonatomic, getter=_errorHandler, setter=_setErrorHandler:) id /* block */ errorHandler;

+ (BOOL)_isRestrictedDevice;
+ (id)acquireContentProviderAssertionForType:(unsigned long long)a0 slot:(id)a1 identifier:(id)a2 configurationObject:(id)a3 errorHandler:(id /* block */)a4;
+ (id)acquireContentProviderAssertionForType:(unsigned long long)a0 slot:(id)a1 identifier:(id)a2 errorHandler:(id /* block */)a3;

- (BOOL)_supportsReacquisition;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)type;
- (void)_acquireAssertionWithType:(unsigned long long)a0 slot:(id)a1 identifier:(id)a2 configurationObject:(id)a3;
- (id)initWithType:(unsigned long long)a0 slot:(id)a1 identifier:(id)a2 configurationObject:(id)a3 errorHandler:(id /* block */)a4;

@end
