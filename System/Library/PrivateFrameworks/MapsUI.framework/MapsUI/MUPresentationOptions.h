@class UIViewController, UIContextMenuInteraction, UIView, UIBarButtonItem;
@protocol MKActivityObserving;

@interface MUPresentationOptions : NSObject <NSCopying>

@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (retain, nonatomic) id<MKActivityObserving> progressObserver;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
