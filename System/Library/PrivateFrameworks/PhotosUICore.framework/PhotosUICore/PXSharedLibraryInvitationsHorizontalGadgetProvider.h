@class NSString, PXSharedLibraryStatusProvider, NSDate;

@interface PXSharedLibraryInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXChangeObserver, PXForYouRankable> {
    PXSharedLibraryStatusProvider *_statusProvider;
    BOOL _didGenerateGadgets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (unsigned long long)estimatedNumberOfGadgets;
- (void).cxx_destruct;
- (void)loadDataForGadgets;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateGadgets;
- (void)generateGadgets;

@end
