@class NSShadow, NSAttributedString;

@interface PXCTFramesetter : NSObject {
    BOOL _prepared;
}

@property (readonly, nonatomic) const struct __CTFramesetter { } *framesetter;
@property (readonly, nonatomic) NSShadow *shadow;
@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct CGContext { } *context;

- (id)init;
- (id)frameWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maximumLineCount:(unsigned long long)a1 allowTruncation:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0 context:(struct CGContext { } *)a1;
- (void)dealloc;
- (void)prepare;

@end
