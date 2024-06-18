@protocol DBLayoutHelperViewDelegate;

@interface DBLayoutHelperView : UIView

@property (weak, nonatomic) id<DBLayoutHelperViewDelegate> layoutDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
