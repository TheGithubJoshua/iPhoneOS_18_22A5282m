@class NPSManager;

@interface NPSManagerBridge : NSObject

@property (readonly, nonatomic) NPSManager *npsManager;

- (id)init;
- (void).cxx_destruct;
- (void)synchronizeUserDefaultsDomain:(id)a0 keys:(id)a1 container:(id)a2 appGroupContainer:(id)a3;

@end
