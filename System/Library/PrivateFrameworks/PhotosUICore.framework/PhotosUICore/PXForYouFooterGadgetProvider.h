@class NSDate;

@interface PXForYouFooterGadgetProvider : PXGadgetProvider <PXForYouRankable>

@property (nonatomic) long long footerState;
@property (nonatomic) BOOL attemptedToGenerateGadgets;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;
- (void)generateGadgets;
- (BOOL)_didProcessContentOvernight;
- (void)_generateFooterGadget;
- (void)_handleFaceProgressCompletionWithFacesCountDictionary:(id)a0;
- (void)_handleSceneProgressCompletionWithUnprocessedCount:(unsigned long long)a0;
- (id)_peaceMemoryFetchOptions;

@end
