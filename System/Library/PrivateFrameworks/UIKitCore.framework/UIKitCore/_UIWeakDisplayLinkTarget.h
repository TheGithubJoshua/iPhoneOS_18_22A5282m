@interface _UIWeakDisplayLinkTarget : NSObject {
    id _target;
    SEL _action;
}

@property (class, readonly) SEL displayLinkAction;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_displayLinkTick:(id)a0;

@end
