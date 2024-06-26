@class NSMutableArray, NSMutableDictionary, Caller, NSDate, NSObject;
@protocol OS_os_log;

@interface Request : NSObject {
    NSMutableDictionary *_cachedValues;
    NSMutableArray *_heldObjects;
}

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, nonatomic) Caller *caller;
@property (readonly, nonatomic) NSDate *received;
@property (readonly, nonatomic) BOOL interactive;

+ (id)current;
+ (id)localRequest;
+ (id)requestFromCurrentConnection;

- (id)cachedValue:(long long)a0 object:(id)a1 error:(id *)a2 readValueBlock:(id /* block */)a3;
- (void)holdObject:(id)a0;
- (id)initWithCaller:(id)a0;
- (void).cxx_destruct;
- (id)_complexIdentifier:(long long)a0 object:(id)a1;
- (void)dealloc;
- (id)cachedValue:(long long)a0 error:(id *)a1 readValueBlock:(id /* block */)a2;
- (void)_invalidateCachedValue:(id)a0 identifier:(id)a1;

@end
