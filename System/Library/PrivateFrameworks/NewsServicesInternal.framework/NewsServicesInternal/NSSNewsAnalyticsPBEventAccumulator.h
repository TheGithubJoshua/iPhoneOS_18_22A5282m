@class NSMutableArray, NSSNewsAnalyticsEnvelopeDescriptor;
@protocol NSSNewsAnalyticsSessionManager;

@interface NSSNewsAnalyticsPBEventAccumulator : NSObject

@property (readonly, copy, nonatomic) NSSNewsAnalyticsEnvelopeDescriptor *envelopeDescriptor;
@property (readonly, weak, nonatomic) id<NSSNewsAnalyticsSessionManager> sessionManager;
@property (readonly, nonatomic) NSMutableArray *events;

- (id)init;
- (id)initWithEnvelopeDescriptor:(id)a0 sessionManager:(id)a1;
- (void).cxx_destruct;
- (id)dequeueEventsIntoEnvelope;
- (void)observeEvent:(id)a0;
- (void)observeEvents:(id)a0;

@end
