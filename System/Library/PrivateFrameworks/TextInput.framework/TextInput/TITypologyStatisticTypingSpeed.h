@class TITypologyStatisticBasicCounts, TITypologyStatisticTimeElapsed;

@interface TITypologyStatisticTypingSpeed : TITypologyStatisticComposite

@property (readonly, nonatomic) TITypologyStatisticTimeElapsed *timeElapsed;
@property (readonly, nonatomic) TITypologyStatisticBasicCounts *basicCounts;
@property (readonly, nonatomic) float typingSpeed;

+ (id)statisticCompositeWithStatistics:(id)a0;
+ (id)statistic;

- (id)initWithTimeElapsed:(id)a0 basicCounts:(id)a1;
- (void).cxx_destruct;
- (id)aggregateReport;

@end
