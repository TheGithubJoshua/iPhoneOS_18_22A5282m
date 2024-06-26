@class NSString, NSDictionary, NSMutableArray;
@protocol NSLayoutItem;

@interface NSLayoutConstraintParser : NSObject {
    NSString *_line;
    const char *_lineChars;
    unsigned long long _lineLength;
    unsigned long long _opts;
    BOOL _useHorizontalArrangement;
    NSDictionary *_metrics;
    NSDictionary *_views;
    id<NSLayoutItem> _containerView;
    NSMutableArray *_constraints;
    NSMutableArray *_unflushedWidthConstraints;
    NSMutableArray *_alignmentConstraints;
    unsigned long long _currentCharacter;
    NSMutableArray *_incompleteConstraints;
    id<NSLayoutItem> _parsedLeftView;
    id<NSLayoutItem> _parsedRightView;
    id<NSLayoutItem> _parsedConstrainedWidthView;
}

+ (id)constraintsWithVisualFormat:(id)a0 options:(unsigned long long)a1 metrics:(id)a2 views:(id)a3;

- (id)constraints;
- (void)flushWidthConstraints;
- (void)finishConstraint;
- (void)parseOp;
- (double)parseConstant;
- (id)parseView;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfName;
- (id)initWithFormat:(id)a0 options:(unsigned long long)a1 metrics:(id)a2 views:(id)a3;
- (id)description;
- (void)parseConnection;
- (void)findContainerView;
- (void)parsePredicateWithParentheses;
- (void)parsePredicateList;
- (void)parsePredicate;
- (void)dealloc;
- (void)failWithDescription:(id)a0;
- (void)parse;

@end
