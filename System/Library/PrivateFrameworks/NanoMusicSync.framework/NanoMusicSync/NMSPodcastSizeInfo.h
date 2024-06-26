@interface NMSPodcastSizeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) double totalDuration;
@property (nonatomic) unsigned long long count;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)averageSize;
- (double)sizeDurationRatio;

@end
