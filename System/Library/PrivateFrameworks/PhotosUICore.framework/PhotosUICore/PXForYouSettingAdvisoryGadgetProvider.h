@class NSDate;

@interface PXForYouSettingAdvisoryGadgetProvider : PXGadgetProvider <PXForYouRankable>

@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;
- (void)generateGadgets;

@end
