@class NSArray, NSDate;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable>

@property (copy, nonatomic) NSArray *contentGadgets;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (weak, nonatomic) id<PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

+ (id)new;

- (id)init;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)estimatedNumberOfGadgets;
- (void).cxx_destruct;
- (id)priorityDate;
- (id)initWithSourceType:(unsigned long long)a0;
- (void)generateGadgets;
- (unsigned long long)gadgetType;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)a0;
- (void)presentationRequestForWelcomeCloudViewController:(id)a0;
- (void)resetPriorityDate;

@end
