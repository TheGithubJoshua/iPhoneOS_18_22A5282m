@class FlexSegment, NSURL;

@interface FlexSegmentAssemblyInfo : NSObject

@property (retain, nonatomic) FlexSegment *segment;
@property (nonatomic) long long barsUsed;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long offset;
@property (nonatomic) long long duration;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
