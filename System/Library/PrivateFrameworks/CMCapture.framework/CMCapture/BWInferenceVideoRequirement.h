@class BWInferenceVideoFormat;

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying>

@property (readonly, nonatomic) BWInferenceVideoFormat *videoFormat;
@property (readonly, nonatomic) int videoStorageType;

- (unsigned long long)satisfactionHash;
- (id)initWithAttachedMediaKey:(id)a0 count:(unsigned long long)a1;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1;
- (BOOL)isSatisfiedByRequirement:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1 videoStorageType:(int)a2;
- (id)initWithVideoRequirement:(id)a0;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1 count:(unsigned long long)a2;

@end
