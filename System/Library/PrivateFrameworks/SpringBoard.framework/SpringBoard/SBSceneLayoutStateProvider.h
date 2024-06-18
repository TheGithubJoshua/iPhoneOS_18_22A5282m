@class SBMainDisplayLayoutState;

@interface SBSceneLayoutStateProvider : NSObject

@property (retain, nonatomic) SBMainDisplayLayoutState *layoutState;
@property (retain, nonatomic) SBMainDisplayLayoutState *previousLayoutState;

- (void).cxx_destruct;
- (id)initWithLayoutState:(id)a0;

@end
