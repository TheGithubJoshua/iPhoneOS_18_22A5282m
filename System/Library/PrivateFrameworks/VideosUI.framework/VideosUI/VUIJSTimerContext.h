@class NSTimer, JSManagedValue, VUIJSManagedArray;

@interface VUIJSTimerContext : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (readonly, retain, nonatomic) id ownerObject;
@property (readonly, retain, nonatomic) JSManagedValue *managedCallback;
@property (readonly, retain, nonatomic) VUIJSManagedArray *managedArgs;
@property (readonly, nonatomic) BOOL isRepeating;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithCallback:(id)a0 callbackArgs:(id)a1 repeating:(BOOL)a2 ownerObject:(id)a3 timer:(id)a4;
- (void)removeManagedReferences;

@end
