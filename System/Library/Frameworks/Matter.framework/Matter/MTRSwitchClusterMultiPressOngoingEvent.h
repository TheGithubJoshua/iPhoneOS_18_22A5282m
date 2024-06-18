@class NSNumber;

@interface MTRSwitchClusterMultiPressOngoingEvent : NSObject <NSCopying>

@property (copy, nonatomic, getter=getNewPosition) NSNumber *newPosition;
@property (copy, nonatomic) NSNumber *currentNumberOfPressesCounted;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
