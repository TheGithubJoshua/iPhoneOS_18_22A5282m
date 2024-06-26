@class NSData, NSString, NSDate;

@interface TITypologyProfileState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *salt;
@property (copy, nonatomic) NSDate *profileInstallationDate;
@property (copy, nonatomic) NSDate *userNotificationDate;
@property (copy, nonatomic) NSString *userResponse;

+ (BOOL)removePersistedStateAtURL:(id)a0;
+ (id)defaultPersistentURL;
+ (id)typologyProfileStateWithURL:(id)a0;
+ (BOOL)_removePersistedStateAtURL:(id)a0;
+ (id)_typologyProfileStateFromURL:(id)a0;
+ (BOOL)removePersistedState;
+ (id)typologyProfileStateFromPersistedState;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)persistState;
- (id)hashForString:(id)a0;
- (BOOL)_authenticateHashToken:(id)a0 forProfileInstallationDate:(id)a1 userNotificationDate:(id)a2 userResponse:(id)a3;
- (id)_hashTokenForProfileInstallationDate:(id)a0 userNotificationDate:(id)a1 userResponse:(id)a2;
- (BOOL)_persistStateToURL:(id)a0;
- (id)initWithProfileInstallationDate:(id)a0;
- (id)initWithProfileInstallationDate:(id)a0 userNotificationDate:(id)a1 userResponse:(id)a2;
- (BOOL)persistStateToURL:(id)a0;

@end
