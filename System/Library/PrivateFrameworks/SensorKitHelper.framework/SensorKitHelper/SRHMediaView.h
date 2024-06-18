@class NSUUID, UIView;

@interface SRHMediaView : NSObject

@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL onScreen;
@property (retain, nonatomic) NSUUID *uuid;

- (id)initWithView:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)isSizeAcceptable;
- (double)minimumVisibleArea;

@end
