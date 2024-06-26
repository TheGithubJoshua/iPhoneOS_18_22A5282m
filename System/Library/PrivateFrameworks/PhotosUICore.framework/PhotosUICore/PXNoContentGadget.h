@class NSString, PXNoContentGadgetView, PXGadgetSpec;
@protocol PXGadgetDelegate;

@interface PXNoContentGadget : NSObject <PXGadget>

@property (retain, nonatomic) PXNoContentGadgetView *noContentView;
@property (readonly, nonatomic) double minimumContentHeight;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) double contentHeightAdjustment;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)a0 localizedMessage:(id)a1;
- (void)configureWithButtonTitle:(id)a0 buttonAction:(id /* block */)a1;
- (BOOL)hasLoadedContentData;
- (id)initWithLocalizedTitle:(id)a0 localizedMessage:(id)a1 minimumContentHeight:(double)a2;
- (double)preferredHeightForViewController:(id)a0;
- (void)prepareCollectionViewItem:(id)a0;

@end
