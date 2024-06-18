@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions

@property (nonatomic) BOOL suspended;
@property (nonatomic) BOOL sceneless;
@property (nonatomic) long long openApplicationPriority;
@property (nonatomic) BOOL allowsForegroundAppLaunchWhileInCarPlay;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
