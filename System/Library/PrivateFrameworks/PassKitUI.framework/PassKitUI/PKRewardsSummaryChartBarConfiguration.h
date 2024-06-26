@class NSString, PKAccountRewardsTierSummary, NSArray;

@interface PKRewardsSummaryChartBarConfiguration : NSObject <PKSegmentedBarConfiguration> {
    NSArray *_tierAmounts;
}

@property (readonly, nonatomic) PKAccountRewardsTierSummary *summary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReady;
- (void).cxx_destruct;
- (double)totalValue;
- (long long)numberOfSegments;
- (unsigned long long)_rewardsTierForIndex:(long long)a0;
- (id)_valueAtIndex:(long long)a0;
- (id)colorForSegmentAtIndex:(long long)a0;
- (id)initWithSummary:(id)a0;
- (double)valueForSegmentAtIndex:(long long)a0;

@end
