@class NSString, NSDictionary;

@interface CacheDeleteVolume : NSObject

@property (readonly) BOOL isRoot;
@property (readonly, nonatomic) NSString *fsType;
@property (readonly, nonatomic) NSString *mountPoint;
@property (readonly) unsigned long long initialFreespace;
@property (readonly, nonatomic) NSDictionary *thresholds;
@property (readonly, nonatomic) long long state;
@property (readonly) int dev;
@property (readonly) unsigned int block_size;
@property (readonly, nonatomic) NSString *bsdName;

+ (id)mountPointForUUID:(id)a0;
+ (id)volumeWithMountpoint:(id)a0;
+ (id)volumeWithPath:(id)a0;
+ (id)volumeWithUUID:(id)a0;
+ (id)rootVolume;
+ (long long)stateForPath:(id)a0;
+ (id)validateVolumeAtPath:(id)a0;

- (unsigned long long)used;
- (id)initWithVolume:(id)a0;
- (BOOL)mayContainPurgeableAmount:(id)a0 forService:(id)a1;
- (long long)state;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithPath:(id)a0;
- (BOOL)amountIsRational:(id)a0;
- (unsigned long long)effective_size;
- (unsigned long long)hash;
- (id)uuid;
- (BOOL)validate;
- (void).cxx_destruct;
- (unsigned long long)amountPurged;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)freespace;
- (id)description;
- (id)FSEventsUUID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)size;
- (BOOL)freespaceIsStale:(unsigned long long)a0;
- (BOOL)containsPath:(id)a0;

@end
