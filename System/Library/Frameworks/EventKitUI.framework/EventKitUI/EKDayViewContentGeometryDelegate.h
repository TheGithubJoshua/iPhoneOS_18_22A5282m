@class NSString, EKDayViewContent;

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate>

@property (weak, nonatomic) EKDayViewContent *dayViewContent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } displayedRect;
@property (readonly, nonatomic) double hourHeight;
@property (readonly, nonatomic) double topPadding;
@property (readonly, nonatomic) double timeWidth;
@property (readonly, nonatomic) BOOL originIsUpperLeft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)dateForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pointForDate:(double)a0;
- (BOOL)shouldReverseLayoutDirection;

@end
