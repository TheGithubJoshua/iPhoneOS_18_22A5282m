@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO

@property (retain, nonatomic) CHDrawing *strokes;
@property (retain, nonatomic) CHDrawing *drawing;

- (void)flush;
- (void)clear;
- (void)addPoint:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithFIFO:(id)a0;

@end
