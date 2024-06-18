@class NSDictionary, HDDaemon;

@interface HDUserDomainConceptEntityRegistry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_lock_typeIdentifierToEntityClass;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

+ (id)sharedInstance;
+ (id)registryWithDaemon:(id)a0 setSharedInstance:(BOOL)a1;
+ (void)unitTesting_setSharedInstance:(id)a0;
+ (void)_setSharedInstance:(id)a0;

- (id)initWithDaemon:(id)a0;
- (id)registeredDictionaryOfEntities;
- (id)registeredUserDomainConceptEntityClasses;
- (void)_registerUserDomainConceptClassesFromProvider:(id)a0 classRegistry:(id)a1;
- (void).cxx_destruct;
- (Class)userDomainConceptEntityClassForTypeIdentifier:(id)a0;
- (id)_builtinUserDomainConceptEntityClasses;
- (void)_lock_loadUserDomainConceptEntities;
- (id)_registeredUserDomainConceptEntityClasses;

@end
