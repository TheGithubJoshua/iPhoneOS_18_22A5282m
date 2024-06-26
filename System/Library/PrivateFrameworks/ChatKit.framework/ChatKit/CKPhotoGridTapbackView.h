@class CKAggregateAcknowledgmentBalloonView, PXAssetReference, NSString;

@interface CKPhotoGridTapbackView : UIView <PXGDecorationView, CKGradientReferenceView>

@property (retain, nonatomic) CKAggregateAcknowledgmentBalloonView *tapbackBalloonView;
@property (nonatomic) BOOL needsAnimation;
@property (nonatomic) unsigned long long decorationOptions;
@property (copy, nonatomic) PXAssetReference *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)becomeReusable;
- (id)gradientReferenceView;
- (BOOL)shouldAnimate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)asset;
- (void)layoutSubviews;
- (BOOL)isFromMe;
- (id)_imAggregateAcknowledgmentChatItem;
- (void)_setupBalloonView;
- (void)_tearDownBalloonView;
- (Class)balloonViewClass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })gradientFrame;
- (BOOL)invertTail;
- (void)performInsertion:(id /* block */)a0;

@end
