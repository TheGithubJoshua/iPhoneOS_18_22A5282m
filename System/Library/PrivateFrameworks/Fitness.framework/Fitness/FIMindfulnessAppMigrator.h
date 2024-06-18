@class NSString;

@interface FIMindfulnessAppMigrator : NSObject {
    NSString *_container;
}

- (void)_synchronize;
- (id)init;
- (id)initWithContainer:(id)a0;
- (void).cxx_destruct;
- (void)_removeObjectForKey:(id)a0;
- (void)migrateIfNeeded;
- (long long)_integerForKey:(id)a0 exists:(BOOL *)a1;
- (void)_setInteger:(long long)a0 key:(id)a1;

@end
