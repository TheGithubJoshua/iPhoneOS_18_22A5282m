@class NSNumber;

@interface PVLivePlayerThrottlingControlParameters : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *renderLinkRate;
@property (retain, nonatomic) NSNumber *playerQueueSize;
@property (retain, nonatomic) NSNumber *playerBypassRenderLink;

+ (id)CreateControllerParameters:(id)a0 :(id)a1 :(id)a2;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateNilsFrom:(id)a0;
- (BOOL)hasNilParameter;

@end
