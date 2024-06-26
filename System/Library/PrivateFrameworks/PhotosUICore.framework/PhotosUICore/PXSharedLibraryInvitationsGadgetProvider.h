@class NSString, PXSharedLibraryStatusProvider;
@protocol PXSharedLibrary;

@interface PXSharedLibraryInvitationsGadgetProvider : PXGadgetProvider <PXChangeObserver> {
    PXSharedLibraryStatusProvider *_statusProvider;
    id<PXSharedLibrary> _invitation;
    BOOL _didGenerateGadgets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)estimatedNumberOfGadgets;
- (void).cxx_destruct;
- (void)loadDataForGadgets;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateGadgets;
- (void)generateGadgets;

@end
