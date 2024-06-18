@class NSUUID, _OSDataProtectionManager;

@interface _OSDataProtectionStateMonitor : NSObject

@property (readonly, nonatomic) _OSDataProtectionManager *manager;
@property (readonly, nonatomic) NSUUID *handlerUUID;
@property (copy, nonatomic) id /* block */ changeHandler;

+ (id)dataProtectionClassC;
+ (id)dataProtectionClassA;
+ (id)dataProtectionClassD;

- (id)init;
- (BOOL)isDataAvailableFor:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)unnotifiedIsDataAvailableForClassC;

@end
