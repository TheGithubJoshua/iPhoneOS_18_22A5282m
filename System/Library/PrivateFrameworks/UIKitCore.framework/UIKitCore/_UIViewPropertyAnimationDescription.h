@class NSMutableDictionary, UIView;

@interface _UIViewPropertyAnimationDescription : NSObject

@property (readonly, nonatomic) NSMutableDictionary *updates;
@property (readonly, weak, nonatomic) UIView *view;

- (id)init;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)_addUpdate:(id)a0;

@end
