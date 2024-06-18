@class EKEvent, NSArray, NSSet;

@interface EKSeriesDetails : NSObject <NSCopying>

@property (retain) EKEvent *masterEvent;
@property (retain) NSArray *detachedEvents;
@property (retain) NSSet *exceptionDates;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMasterEvent:(id)a0 detachedEvents:(id)a1 exceptionDates:(id)a2;

@end
