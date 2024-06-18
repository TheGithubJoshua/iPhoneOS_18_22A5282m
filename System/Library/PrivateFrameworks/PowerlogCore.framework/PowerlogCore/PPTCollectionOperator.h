@class PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PPTCollectionOperator : PLOperator

@property (retain) PLXPCListenerOperatorComposition *metricListener;
@property (retain) PLXPCResponderOperatorComposition *allowlistResponder;

- (void)initOperatorDependancies;
- (id)init;
- (void)startCollection;
- (void).cxx_destruct;

@end
