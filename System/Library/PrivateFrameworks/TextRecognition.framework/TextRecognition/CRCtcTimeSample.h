@interface CRCtcTimeSample : NSObject

@property void *sample;
@property struct CRCtcCandidate { int symbol; float prob; } blank;

- (id)init;
- (const void *)candidates;
- (void)dealloc;
- (void)addCandidate:(struct CRCtcCandidate { int x0; float x1; })a0;
- (struct CRCtcCandidate { int x0; float x1; })topCandidate;
- (void)trimCandidates;

@end
