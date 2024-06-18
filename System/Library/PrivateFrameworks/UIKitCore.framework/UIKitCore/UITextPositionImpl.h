@class WebVisiblePosition;

@interface UITextPositionImpl : UITextPosition

@property (retain, nonatomic) WebVisiblePosition *webVisiblePosition;

+ (id)wrapWebVisiblePosition:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
