@class NSArray, MPMusicPlayerPlayParameters;

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor {
    MPMusicPlayerPlayParameters *_containerPlayParameters;
}

@property (copy, nonatomic) NSArray *playParametersQueue;
@property (retain, nonatomic) MPMusicPlayerPlayParameters *startItemPlayParameters;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)containerPlayParameters;
- (id)initWithPlayParametersQueue:(id)a0;
- (void)setContainerPlayParameters:(id)a0;
- (void)setEndTime:(double)a0 forItemWithPlayParameters:(id)a1;
- (void)setStartTime:(double)a0 forItemWithPlayParameters:(id)a1;

@end
