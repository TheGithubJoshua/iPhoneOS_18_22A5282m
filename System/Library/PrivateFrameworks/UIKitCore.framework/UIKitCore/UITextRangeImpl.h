@class DOMRange;

@interface UITextRangeImpl : UITextRange

@property (retain, nonatomic) DOMRange *domRange;
@property (nonatomic) long long affinity;

+ (id)wrapDOMRange:(id)a0;
+ (id)wrapDOMRange:(id)a0 withAffinity:(long long)a1;

- (id)end;
- (BOOL)isEmpty;
- (id)start;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)adjustAffinityOfPosition:(id)a0 isStart:(BOOL)a1;

@end
