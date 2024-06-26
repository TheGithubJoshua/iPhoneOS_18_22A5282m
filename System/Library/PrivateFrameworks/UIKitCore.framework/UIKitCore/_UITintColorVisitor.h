@class UIView;

@interface _UITintColorVisitor : _UIViewVisitor {
    unsigned long long _reasons;
    UIView *_originalVisitedView;
    UIView *_changedSubview;
}

- (BOOL)_visitView:(id)a0;
- (id)initWithTraversalDirection:(unsigned long long)a0;
- (id)initWithNotificationReasons:(unsigned long long)a0;
- (BOOL)_prepareVisitor:(id)a0 toVisitView:(id)a1 changedSubview:(id)a2 previousWindow:(id)a3 previousSuperview:(id)a4;

@end
