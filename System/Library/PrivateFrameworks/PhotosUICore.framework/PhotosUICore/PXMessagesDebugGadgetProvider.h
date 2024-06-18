@interface PXMessagesDebugGadgetProvider : PXGadgetProvider

+ (unsigned long long)_enabledDebugSectionsCount;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;
- (void)generateGadgets;

@end
