@class NSDate;

@interface PPDecayedFeedbackCounts : NSObject

@property (readonly, nonatomic) double engagedExplicitly;
@property (readonly, nonatomic) double engagedImplicitly;
@property (readonly, nonatomic) double rejectedExplicitly;
@property (readonly, nonatomic) double rejectedImplicitly;
@property (readonly, nonatomic) NSDate *latestDate;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithLatestDate:(id)a0 engagedExplicitly:(double)a1 engagedImplicitly:(double)a2 rejectedExplicitly:(double)a3 rejectedImplicitly:(double)a4;

@end
