@class RTVisit;

@interface RTVisitMonitorState : NSObject

@property (retain, nonatomic) RTVisit *lastVisitIncident;
@property (retain, nonatomic) RTVisit *lastLowConfidenceVisitIncident;

- (id)init;
- (void)dump;
- (void).cxx_destruct;
- (id)initWithLastVisit:(id)a0 lastLowConfidenceVisit:(id)a1;

@end
