@class NSString, NSSet;

@interface AMDAppSegmentInfo : NSObject

@property (retain) NSString *appIdentifier;
@property (retain) NSSet *segments;

- (void).cxx_destruct;
- (BOOL)isEqualToApp:(id)a0;
- (id)initWithAppIdentifier:(id)a0 andSegments:(id)a1;

@end
