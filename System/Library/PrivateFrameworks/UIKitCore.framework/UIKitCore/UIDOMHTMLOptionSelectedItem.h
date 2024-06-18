@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    BOOL _selected;
}

@property (retain, nonatomic) DOMHTMLOptionElement *_node;

- (id)node;
- (BOOL)selected;
- (void)setSelected:(BOOL)a0;
- (BOOL)isGroup;
- (void)dealloc;
- (id)initWithHTMLOptionNode:(id)a0;
- (void)unselect;

@end
