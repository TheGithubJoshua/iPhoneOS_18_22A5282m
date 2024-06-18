@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate>

@property (retain, nonatomic) DOMHTMLOptGroupElement *_node;

- (id)node;
- (BOOL)selected;
- (void)setSelected:(BOOL)a0;
- (BOOL)isGroup;
- (void)dealloc;
- (id)initWithHTMLOptGroupNode:(id)a0;
- (void)unselect;

@end
