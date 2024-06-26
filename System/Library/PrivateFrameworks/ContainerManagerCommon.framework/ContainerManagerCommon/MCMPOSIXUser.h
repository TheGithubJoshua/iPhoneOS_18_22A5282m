@class NSURL, NSString;

@interface MCMPOSIXUser : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int UID;
@property (readonly, nonatomic) unsigned int primaryGID;
@property (readonly, nonatomic) NSURL *homeDirectoryURL;
@property (readonly, nonatomic) NSURL *unvalidatedHomeDirectoryURL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isRoot) BOOL root;
@property (readonly, nonatomic, getter=isRoleUser) BOOL roleUser;
@property (readonly, nonatomic, getter=hasUseableHomeDirectory) BOOL useableHomeDirectory;

+ (void)flush;
+ (id)_getCachedUID:(unsigned int)a0 flush:(BOOL)a1 onCacheMiss:(id /* block */)a2;
+ (id)root;
+ (id)_posixUserWithPasswdPtr:(struct passwd { char *x0; char *x1; unsigned int x2; unsigned int x3; long long x4; char *x5; char *x6; char *x7; char *x8; long long x9; } *)a0;
+ (id)_posixUserWithUID:(unsigned int)a0 name:(id)a1 useUID:(BOOL)a2;
+ (id)posixUserWithName:(id)a0;
+ (BOOL)_isRoleUserWithUID:(unsigned int)a0 homeDirectoryURL:(id)a1;
+ (id)posixUserWithUID:(unsigned int)a0;
+ (id)currentPOSIXUser;
+ (id)nobody;

- (id)fullDescription;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithUID:(unsigned int)a0 primaryGID:(unsigned int)a1 homeDirectoryURL:(id)a2 unvalidatedHomeDirectoryURL:(id)a3 name:(id)a4 roleUser:(BOOL)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPOSIXUser:(id)a0;

@end
